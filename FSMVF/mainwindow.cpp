#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
//    ser_com = new QSerialPort;

//    qDebug() << "Number of available ports: " << QSerialPortInfo::availablePorts().length();

    //Setup Serial Comms
//    if(serial.open(QIODevice::WriteOnly))
//    {
//        if(!serial.setBaudRate(QSerialPort::Baud19200))
//            qDebug()<<serial.errorString();
//        if(!serial.setDataBits(QSerialPort::Data8))
//            qDebug()<<serial.errorString();
//        if(!serial.setParity(QSerialPort::NoParity))
//            qDebug()<<serial.errorString();
//        if(!serial.setStopBits(QSerialPort::OneStop))
//            qDebug()<<serial.errorString();
//        if(!serial.setFlowControl(QSerialPort::NoFlowControl))
//            qDebug()<<serial.errorString();

//    }

    //Setup camera for video capture
    capture.open(1 + CAP_DSHOW);
    //Set dimensions for frame
    capture.set(CV_CAP_PROP_FRAME_WIDTH, WIDTH);
    capture.set(CV_CAP_PROP_FRAME_HEIGHT, HEIGHT);
    
    //create windows to show frames
    namedWindow(cameraWindow,WINDOW_GUI_NORMAL);//,WINDOW_FREERATIO);
    namedWindow(procWindow,WINDOW_GUI_NORMAL);//,WINDOW_FREERATIO);
    namedWindow(HSVWindow,WINDOW_GUI_NORMAL);

    WinSize.width = 460;
    WinSize.height = 1080;
    resizeWindow(cameraWindow,WinSize);
    resizeWindow(HSVWindow,WinSize);
    resizeWindow(procWindow,WinSize);

    moveWindow(cameraWindow,269,0);
    moveWindow(HSVWindow,730,0);
    moveWindow(procWindow,1191,0);

    //setup the ROI for cropping
    ROI.x = crop_x;
    ROI.y = crop_y;
    ROI.width = crop_width;
    ROI.height = crop_height;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    breakLoop = true;
    destroyAllWindows();
    capture.~VideoCapture();
//    serial.close();
    this->destroy();
    event->accept();
}

void MainWindow::Start()
{
    on_set_button_clicked();
    while (true)
    {
        if (breakLoop == true) return;
        //Get values from HSV widgets
        H_min = ui->HminBox->text().toInt();
        H_max = ui->HmaxBox->text().toInt();
        S_min = ui->SminBox->text().toInt();
        S_max = ui->SmaxBox->text().toInt();
        V_min = ui->VminBox->text().toInt();
        V_max = ui->VmaxBox->text().toInt();

        //Get a frame from the camera
        capture.read(frame);
        frame_cropped = frame(ROI); //crop the image

        //Convert to HSV
        cvtColor(frame_cropped,frame_HSV, COLOR_RGB2HSV_FULL);

        //Draw horizontal and vertical line for alignment
        line(frame_cropped,
             Point(0,(crop_height*2)/3),
             Point(crop_width,(crop_height*2)/3),
             Scalar(0,255,0),
             1,
             8);
        line(frame_cropped,
             Point(crop_width/2,0),
             Point(crop_width/2,crop_height),
             Scalar(0,255,0),
             1,
             8);

        //Check if within HSV limits
        inRange(frame_HSV,Scalar(H_min,S_min,V_min),Scalar(H_max,S_max,V_max),frame_mask);

        //Count the number of white pixels in the mask
        pixels_num = countNonZero(frame_mask == 255);
        //Get pixel locations
        findNonZero(frame_mask, pixels_location);

        //calculate params using pixels_location
//        flame_height = pixels_location[pixels_location.size()- 1].y - pixels_location[0].y;
//        flame_width = pixels_location[pixels_location.size()- 1].x - pixels_location[0].x;
//        flame_liftoff = (HEIGHT*2/3) - pixels_location[pixels_location.size()- 1].y;

        flame_ROI = boundingRect(pixels_location); //update flame ROI
        flame_ROI_min_val = flame_ROI.tl();
        flame_ROI_max_val = flame_ROI.br() - Point(1,1);
        //calculate params using boundingRect
        flame_height = flame_ROI_max_val.y - flame_ROI_min_val.y;
        flame_width = flame_ROI_max_val.x - flame_ROI_min_val.x;
        flame_liftoff = (HEIGHT*2/3) - flame_ROI_max_val.y;



        //draw rectangle around flame
        rectangle(frame_cropped,flame_ROI_avg, Scalar(0,255,255), 2, 8, 0);

        //Apply a mask based on the HSV threshold (Show the flame pixels)
        cvtColor(frame_mask,frame_mask,CV_GRAY2RGB); //convert mask to correct number of channels
        bitwise_and(frame_cropped,frame_mask,frame_tmp); //Show the flame pixels

        //Update image variables and display on windows
        frame_tmp.copyTo(frame_proc);
        imshow(cameraWindow,frame_cropped);
        imshow(HSVWindow,frame_HSV);
        imshow(procWindow,frame_proc);

        if (j < FPS)
        {
            j++;
            //Update variables
            pixels_avg += pixels_num;
            flame_height_avg += flame_height;
            flame_width_avg += flame_width;
            flame_liftoff_avg += flame_liftoff;
            flame_ROI_min_val_avg.x += flame_ROI_min_val.x;
            flame_ROI_min_val_avg.y += flame_ROI_min_val.y;
            flame_ROI_max_val_avg.x += flame_ROI_max_val.x;
            flame_ROI_max_val_avg.y += flame_ROI_max_val.y;
        }
        else //per second updates
        {
            flame_ROI_avg = boundingRect(pixels_location);
//            flame_ROI_avg = Rect(Point((flame_ROI_min_val_avg.x/FPS),(flame_ROI_min_val_avg.y/FPS)),
//                                 Point(flame_ROI_max_val_avg.x/FPS,flame_ROI_max_val_avg.y/FPS));

            //unit checkbox logic
            factor = mm_or_cm ? PIX_TO_MM : PIX_TO_CM;
            unit = mm_or_cm ? "mm" : "cm";
            //Update labels
            ui->label_numPixel->setText(QStringLiteral("%L1 pixels").arg((pixels_avg/FPS)));
            ui->label_flameAreaValue->setText(QStringLiteral("%L1 (%2)2").arg(((pixels_avg/FPS)*pow((factor),2)), 6, 'f', 2, '0').arg(unit));
            ui->label_flameHeightValue->setText(QStringLiteral("%L1 %2").arg(((flame_height_avg/FPS)*(factor)), 6, 'f', 2, '0').arg(unit));
            ui->label_flameWidthValue->setText(QStringLiteral("%L1 %2").arg(((flame_width_avg/FPS)*(factor)), 6, 'f', 2, '0').arg(unit));
            ui->label_flameLiftoff->setText(QStringLiteral("%L1 %2").arg(((flame_liftoff_avg/FPS)*(factor)), 6, 'f', 2, '0').arg(unit));
            //Reset variables to zero
            pixels_avg = 0;
            flame_height_avg = 0;
            flame_width_avg = 0;
            flame_liftoff_avg = 0;
            flame_ROI_min_val_avg = Point(0,0);
            flame_ROI_max_val_avg = Point(0,0);
//            flame_ROI_min_val_avg.x = 0;
//            flame_ROI_max_val_avg.y = 0;
//            flame_ROI_min_val_avg.x = 0;
//            flame_ROI_max_val_avg.y = 0;

            j = 0;
        }
        waitKey(30);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_reset_button_clicked()
{
    ui->HminBox->setValue(0);
    ui->HmaxBox->setValue(255);
    ui->SminBox->setValue(0);
    ui->SmaxBox->setValue(255);
    ui->VminBox->setValue(0);
    ui->VmaxBox->setValue(255);
}

void MainWindow::on_set_button_clicked()
{
    ui->HminBox->setValue(0);
    ui->HmaxBox->setValue(43);
    ui->SminBox->setValue(0);
    ui->SmaxBox->setValue(255);
    ui->VminBox->setValue(160);
    ui->VmaxBox->setValue(255);
}

void MainWindow::on_exit_button_clicked()
{
    close();
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
   mm_or_cm = arg1 ? true : false;
}
