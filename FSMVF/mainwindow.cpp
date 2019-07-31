#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Setup csv logging
    date_time = new QDateTime();
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT(update_seconds_cntr()));

    //Setup serial port for device comms
    serial_port = new QSerialPort;
    connect_serial();
    connect(serial_port, SIGNAL(readyRead()), this, SLOT(read_serial_port()));

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

    //Setup recording of images
    // get current date and time of hour
    date = date_time->currentDateTime().date().toString("ddMMyy");
    time = date_time->currentDateTime().toLocalTime().time().toString("_hhmm");

//    vid_camera.open(QString("C:/FSMVF_log_files/video_logs/camera_" + date + time + ".avi").toStdString(),CV_FOURCC('M','J','P','G'),30,WinSize);
//    if (!vid_camera.isOpened())
//        QMessageBox::warning(this,"Video Recording Error!","Cannot open Camera recording file.");
//    vid_output.open(QString("C:/FSMVF_log_files/video_logs/output_" + date + time + ".avi").toStdString(),CV_FOURCC('M','J','P','G'),30,WinSize);
//    if (!vid_output.isOpened())
//        QMessageBox::warning(this,"Video Recording Error!","Cannot open Output recording file.");

}

void MainWindow::closeEvent(QCloseEvent *event)
{
    breakLoop = true;       //stop the loop
    destroyAllWindows();    //close all open video windows
    capture.~VideoCapture();//close video capture object
    vid_camera.~VideoWriter();
    vid_output.~VideoWriter();

    if(serial_port->isOpen())//close serial port
        serial_port->close();

    this->destroy();
    event->accept();
//    QCoreApplication::quit();
}

void MainWindow::Start()
{
    on_set_button_clicked();
    proc_time.start();
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

        //@pixtocm calibration
//        qDebug() << "Height :" << QStringLiteral("%L1").arg(flame_height);
//        qDebug() << "Width :" << QStringLiteral("%L1").arg(flame_width);

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
            //Update variables per frame
            pixels_avg += pixels_num;
            flame_height_avg += flame_height;
            flame_width_avg += flame_width;
            flame_liftoff_avg += flame_liftoff;
            flame_ROI_min_val_avg.x += flame_ROI_min_val.x;
            flame_ROI_min_val_avg.y += flame_ROI_min_val.y;
            flame_ROI_max_val_avg.x += flame_ROI_max_val.x;
            flame_ROI_max_val_avg.y += flame_ROI_max_val.y;

            if (csv_log)
            {
                //Create strings for data logging
                str_num_pixel = QStringLiteral("%L1").arg(pixels_num);
                str_flame_area = QStringLiteral("%L1").arg(((pixels_num)*pow((factor),2)), 6, 'f', 2, '0');
                str_flame_height = QStringLiteral("%L1").arg(((flame_height)*(factor)), 6, 'f', 2, '0');
                str_flame_width = QStringLiteral("%L1").arg(((flame_width)*(factor)), 6, 'f', 2, '0');
                str_flame_liftoff = QStringLiteral("%L1").arg(((flame_liftoff)*(factor)), 6, 'f', 2, '0');

                log_to_csv();
            }

            if (video_log)
            {
                //update lcd value
                lcd_frames_cntr++;
                //save image to video
                vid_camera.write(frame_cropped);  //Recording for camera
                vid_output.write(frame_proc);  //Recording for processed image
            }
        }
        else
        {
            //Update variables per second
            flame_ROI_avg = boundingRect(pixels_location);
//            flame_ROI_avg = Rect(Point((flame_ROI_min_val_avg.x/FPS),(flame_ROI_min_val_avg.y/FPS)),
//                                 Point(flame_ROI_max_val_avg.x/FPS,flame_ROI_max_val_avg.y/FPS));

            //unit checkbox logic
            factor = mm_or_cm ? PIX_TO_MM : PIX_TO_CM;
            unit = mm_or_cm ? "mm" : "cm";
            //Update labels
            str_num_pixel = QStringLiteral("%L1 pixels").arg((pixels_avg/FPS));
            str_flame_area = QStringLiteral("%L1 (%2)2").arg(((pixels_avg/FPS)*pow((factor),2)), 6, 'f', 2, '0').arg(unit);
            str_flame_height = QStringLiteral("%L1 %2").arg(((flame_height_avg/FPS)*(factor)), 6, 'f', 2, '0').arg(unit);
            str_flame_width = QStringLiteral("%L1 %2").arg(((flame_width_avg/FPS)*(factor)), 6, 'f', 2, '0').arg(unit);
            str_flame_liftoff = QStringLiteral("%L1 %2").arg(((flame_liftoff_avg/FPS)*(factor)), 6, 'f', 2, '0').arg(unit);
            ui->label_numPixel->setText(str_num_pixel);
            ui->label_flameAreaValue->setText(str_flame_area);
            ui->label_flameHeightValue->setText(str_flame_height);
            ui->label_flameWidthValue->setText(str_flame_width);
            ui->label_flameLiftoff->setText(str_flame_liftoff);
            //Reset variables to zero
            pixels_avg = 0;
            flame_height_avg = 0;
            flame_width_avg = 0;
            flame_liftoff_avg = 0;
            flame_ROI_min_val_avg = Point(0,0);
            flame_ROI_max_val_avg = Point(0,0);
            j = 0;

            //check if auto ignite is on
            if (auto_ignite && pixels_avg == 0)
                on_ignite_button_clicked();

        //end of 'per second' loop
        }
        waitKey(5);

        //check if controller is connected
        check_serial_port();

//        //Code Block for @data_logging
//        if (video_log)
//        {
//            vid_camera.write(frame_cropped);  //Recording for camera
//            vid_output.write(frame_tmp);  //Recording for processed image
//        }
//        write_serial_port(freqs.at(freq_cntr) + "Q"); //This sets freq of DDS

        //

        //Debug time elapsed @time_stamp
//        qDebug() << "ImageProc:" << proc_time.elapsed() << "ms";
//        qDebug() << "ImageProc:" << proc_time.nsecsElapsed() << "ns";
//        proc_time.restart();

        update_lcds();
        //end of loop
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::log_to_csv()
{
    date = date_time->currentDateTime().date().toString("ddMMyy");
    time = date_time->currentDateTime().toLocalTime().time().toString("_hhmm");
    time_now = date_time->currentDateTime().toLocalTime().time().toString("hh:mm:ss");
//    qDebug() << date << time;
//    qDebug() << time_now;

    QFile file("C:/FSMVF_log_files/csv_logs/csv_log_" + date + time +".csv");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        return;

    QTextStream out(&file);
    //Update this to record time,frequency,flame LD and flame area
    if (bode_log)
        out << time_now << "," << freqs.at(freq_cntr) << "," << str_flame_liftoff << "," << str_flame_area << endl;
    else
        out << time_now << "," << ui->lcd_freq->value() << "," << str_flame_liftoff << "," << str_flame_area << endl;
}

void MainWindow::connect_serial()
{
    //Check for port with correct Vid and Pid and get the port name
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()) {
        if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier())
            if(serialPortInfo.vendorIdentifier() == PORT_VID)
                if(serialPortInfo.productIdentifier() == PORT_PID) {
                    port_name = serialPortInfo.portName();
                    port_avail = true;
                }
    }

    //If device is connected
    if (port_avail) {
        serial_port->setPortName(port_name);
        if (serial_port->open(QSerialPort::ReadWrite))
        {
            ui->statusBar->showMessage(tr("Controller is connected."),0);
            qDebug() << "SERIAL: Device at" << port_name << "is open.";
            port_status = true;
            update_serial_status();
        }
        else
        {
            ui->statusBar->showMessage(("Can't connect to controller."),0);
            qDebug() << "SERIAL: Error opening " << port_name;
        }
        serial_port->setBaudRate(QSerialPort::Baud115200);
        serial_port->setDataBits(QSerialPort::Data8);
        serial_port->setParity(QSerialPort::NoParity);
        serial_port->setStopBits(QSerialPort::OneStop);
        serial_port->setFlowControl(QSerialPort::NoFlowControl);
    } else {
      QMessageBox::warning(this,"Port Error","Device not found!");
    }
}

void MainWindow::check_serial_port()
{
    port_status = serial_port->isOpen();
    update_serial_status();
}

void MainWindow::update_serial_status()
{
    if (port_status)
    {
        ui->statusBar->showMessage("Controller connected.",0);
        ui->connect_button->setText("Disconnect");
    }
    else
    {
        ui->statusBar->showMessage("Controller disconnected!",0);
        ui->connect_button->setText("Connect");
    }
}

void MainWindow::reset_lcds()
{
    lcd_frames_cntr = 0;
    lcd_seconds_cntr = 0;
    lcd_freq_cntr = 0;
}

void MainWindow::update_lcds()
{
    ui->lcd_frames->display(lcd_frames_cntr);
    ui->lcd_seconds->display(lcd_seconds_cntr);
    ui->lcd_freq->display(lcd_freq_cntr);
}

void MainWindow::update_seconds_cntr()
{
    lcd_seconds_cntr++;
}

void MainWindow::read_serial_port()
{
    qDebug() << serial_port->readAll();
}

void MainWindow::write_serial_port(QString command)
{
    if (serial_port->isWritable())
    {
        serial_port->write(command.toStdString().c_str());
        qDebug() << "SERIAL: " << command.toStdString().c_str();
//        qDebug() << command.toStdString().c_str();
    } else
    {
        qDebug() << "SERIAL: Could not send command!";
        check_serial_port();
    }
}

//auto-generated functions
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

void MainWindow::on_connect_button_clicked()
{
    if (port_status)
        serial_port->close();
    else
        connect_serial();

    check_serial_port();
}

void MainWindow::on_send_cmd_button_clicked()
{
    QString cmd;
    cmd = QString::number(ui->freqBox->text().toInt()).rightJustified(6,'0') + "Q";
//    qDebug() << cmd;
    write_serial_port(cmd);

    lcd_freq_cntr = ui->freqBox->text().toInt();
    update_lcds();
}

void MainWindow::on_reset_dds_button_clicked()
{
    write_serial_port("R");
    lcd_freq_cntr = 0;
    ui->freqBox->setValue(0);
    update_lcds();
}

void MainWindow::on_ignite_button_clicked()
{
    write_serial_port("I");
}

void MainWindow::on_spark_button_clicked()
{
    write_serial_port("X");
}

void MainWindow::on_extend_button_clicked()
{
    write_serial_port("E");
}

void MainWindow::on_contract_button_clicked()
{
    write_serial_port("C");
}

void MainWindow::on_auto_ignite_check_stateChanged(int arg1)
{
    auto_ignite = arg1 ? true : false;
}

void MainWindow::on_start_log_button_clicked()
{
    video_log = true;
    csv_log = true;

    //start timer for updating the lcd
    timer->start(1000);
    //open a file for video logging
    vid_camera.open(QString("C:/FSMVF_log_files/video_logs/camera_" + date + time + ".avi").toStdString(),CV_FOURCC('M','J','P','G'),30,WinSize);
    if (!vid_camera.isOpened())
        QMessageBox::warning(this,"Video Recording Error!","Cannot open Camera recording file.");
    vid_output.open(QString("C:/FSMVF_log_files/video_logs/output_" + date + time + ".avi").toStdString(),CV_FOURCC('M','J','P','G'),30,WinSize);
    if (!vid_output.isOpened())
        QMessageBox::warning(this,"Video Recording Error!","Cannot open Output recording file.");

}

void MainWindow::on_stop_log_button_clicked()
{
    video_log = false;
    csv_log = false;
    bode_log =false;

    reset_lcds();
    update_lcds();
    on_reset_button_clicked();

    timer->stop();
    vid_camera.~VideoWriter();
    vid_output.~VideoWriter();
}

void MainWindow::on_bode_log_button_clicked()
{
    bode_log = true;
    on_start_log_button_clicked();
}
