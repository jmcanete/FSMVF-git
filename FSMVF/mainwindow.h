#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QCloseEvent>
#include <sstream>
#include <string>
#include <iostream>
#include <thread>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "opencv2\core\core.hpp"
#include "opencv2\imgproc.hpp"
#include "opencv2\highgui.hpp"
#include "opencv2\opencv.hpp"
#include "opencv2\videoio.hpp"
#include "opencv2\video.hpp"
#include "opencv\cv.hpp"

#define WIDTH 1920
#define HEIGHT 1080
#define FPS 30
#define PIX_TO_MM 0.81589958158995815899581589958159
#define PIX_TO_CM 0.081589958158995815899581589958159

using namespace cv;
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    //Size of image windows
    Size WinSize;
    //Names for windows
    string cameraWindow = "Original Image";
    string HSVWindow = "HSV Image";
    string procWindow = "Processed Image";

    //Define the variables for image cropping
    const int crop_width = 460;
    const int crop_height = 1080;
    const int crop_x = 640;
    const int crop_y = 0;

    //Variables for HSV values
    int H_min;
    int H_max;
    int S_min;
    int S_max;
    int V_min;
    int V_max;

    //Variables for flow control, etc
    int j = 0;
    double factor;

    //Pixel variables
    int pixels_num;
    int pixels_avg;
    vector<Point> pixels_location;
    vector<Point> pixels_location_avg;
    int flame_height;
    int flame_width;
    int flame_liftoff;
    int flame_height_avg;
    int flame_width_avg;
    int flame_liftoff_avg;
    Point flame_ROI_min_val;
    Point flame_ROI_max_val;
    Point flame_ROI_min_val_avg;
    Point flame_ROI_max_val_avg;
    
    //Boolean flags
    bool breakLoop = false; //for loop
    bool mm_or_cm = false; //changing length units
    
    //Matrix for storing images
    Mat frame;
    Mat frame_HSV;
    Mat frame_cropped;
    Mat frame_proc;
    Mat frame_tmp;
    Mat frame_mask;

    //Rect object for cropping;
    Rect ROI;
    Rect flame_ROI;
    Rect flame_ROI_avg;
    //Camera object
    VideoCapture capture;
    
    //Miscellaneous variables
    QString unit;

    //Functions
    void closeEvent(QCloseEvent *event);
    void Start();
    
    //Serial Comms
    QSerialPort ser_com;
    QString ser_com_name;

    ~MainWindow();
private slots:
    void on_reset_button_clicked();

    void on_set_button_clicked();

    void on_exit_button_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
