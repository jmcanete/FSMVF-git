#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDateTime>
#include <QTimer>
#include <QFile>
#include <QTextStream>
#include <QElapsedTimer>

/*#include <sstream>
#include <string>
#include <iostream>*/

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

#define HMIN 0
#define HMAX 43
#define SMIN 0
#define SMAX 255
#define VMIN 160
#define VMAX 255

//#define PIX_TO_MM 0.81589958158995815899581589958159
//#define PIX_TO_CM 0.081589958158995815899581589958159
//@pixtocm manual calibrated at 100 cm away from camera
#define PIX_TO_MM 0.45045045045045045045045045045045
#define PIX_TO_CM 0.04504504504504504504504504504505

#define PORT_VID 6790
#define PORT_PID 29987

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
    ~MainWindow();

    void Start();
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
    QString unit;

    //Flame variables
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
    QString str_num_pixel;
    QString str_flame_area;
    QString str_flame_height;
    QString str_flame_width;
    QString str_flame_liftoff;

    //Boolean flags
    bool breakLoop = false; //for infinite loop
    bool mm_or_cm = false;  //changing length units
    bool port_avail = false;  //controller is connected
    bool port_status = false; //controller is open
    bool auto_ignite = false; //auto ignite
    bool video_log = false;   //data logging
    bool csv_log = false;     //csv logging
    bool csv_log_file = true; //create csv log file
    bool bode_log = false;    //bode plot logging
    bool debug_proc_time = false;  //show processing time in debug

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
    VideoWriter vid_camera;
    VideoWriter vid_output;

    //Serial Port
    QSerialPort *serial_port;
    QString port_name;

    //Data Logging
    QDateTime date_time;
    QTimer *timer_log;
    QFile *file;
    QTextStream out;
    QElapsedTimer proc_time;
    QString date;
    QString time;
    QString time_now;
//    QStringList freqs = (QStringList()
//                         << "000050"
//                         << "000075"
//                         << "000100"
//                         << "000200");
    int freq_cntr = 0;
    int bode_duration = 3;
    int bode_limit = 399;
    int lcd_frames_cntr = 0;
    int lcd_seconds_cntr = 0;
    int lcd_freq_cntr = 0;

    //Auto Ignite
    QTimer *timer_ignite;
    int auto_ign_cntr = 0;

private slots:
    void closeEvent(QCloseEvent *event);
    void log_to_csv();
    void connect_serial();
    void check_serial_port();
    void update_serial_status();
    void reset_lcds();
    void update_lcds();
    void update_seconds_cntr();
    void read_serial_port();
    void write_serial_port(QString);
    void ignite_flame();

    void on_reset_button_clicked();

    void on_set_button_clicked();

    void on_exit_button_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_connect_button_clicked();

    void on_send_cmd_button_clicked();

    void on_reset_dds_button_clicked();

    void on_ignite_button_clicked();

    void on_spark_button_clicked();

    void on_extend_button_clicked();

    void on_contract_button_clicked();

    void on_auto_ignite_check_stateChanged(int arg1);

    void on_start_log_button_clicked();

    void on_stop_log_button_clicked();

    void on_bode_log_button_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
