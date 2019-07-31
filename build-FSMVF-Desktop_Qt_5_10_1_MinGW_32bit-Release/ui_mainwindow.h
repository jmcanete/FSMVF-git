/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_FP;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_pixel;
    QLabel *label_numPixel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_flamearea;
    QLabel *label_flameAreaValue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_height;
    QLabel *label_flameHeightValue;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_width;
    QLabel *label_flameWidthValue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_liftoff;
    QLabel *label_flameLiftoff;
    QCheckBox *checkBox;
    QGroupBox *groupBox_HSV;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *set_button;
    QPushButton *reset_button;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QSlider *horizontalSlider_4;
    QSpinBox *SminBox;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QSlider *horizontalSlider_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QSpinBox *SmaxBox;
    QSpinBox *HmaxBox;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QSlider *horizontalSlider_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QSlider *horizontalSlider_3;
    QSpinBox *VminBox;
    QSpinBox *HminBox;
    QSpinBox *VmaxBox;
    QGroupBox *groupBox_EP;
    QGroupBox *groupBox_C;
    QPushButton *connect_button;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *extend_button;
    QPushButton *ignite_button;
    QPushButton *contract_button;
    QPushButton *spark_button;
    QPushButton *send_cmd_button;
    QPushButton *reset_dds_button;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QSlider *freqSlider;
    QSpinBox *freqBox;
    QCheckBox *auto_ignite_check;
    QPushButton *exit_button;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_8;
    QPushButton *start_log_button;
    QPushButton *stop_log_button;
    QPushButton *bode_log_button;
    QFormLayout *formLayout_2;
    QLabel *label_frames;
    QLCDNumber *lcd_frames;
    QLabel *label_frames_2;
    QLCDNumber *lcd_seconds;
    QLabel *label_frames_3;
    QLCDNumber *lcd_freq;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(660, 510);
        MainWindow->setMouseTracking(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_FP = new QGroupBox(centralWidget);
        groupBox_FP->setObjectName(QStringLiteral("groupBox_FP"));
        groupBox_FP->setGeometry(QRect(335, 10, 315, 150));
        verticalLayout_2 = new QVBoxLayout(groupBox_FP);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_pixel = new QLabel(groupBox_FP);
        label_pixel->setObjectName(QStringLiteral("label_pixel"));
        label_pixel->setTextFormat(Qt::AutoText);
        label_pixel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_pixel);

        label_numPixel = new QLabel(groupBox_FP);
        label_numPixel->setObjectName(QStringLiteral("label_numPixel"));
        label_numPixel->setEnabled(true);

        horizontalLayout_3->addWidget(label_numPixel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_flamearea = new QLabel(groupBox_FP);
        label_flamearea->setObjectName(QStringLiteral("label_flamearea"));
        label_flamearea->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_flamearea);

        label_flameAreaValue = new QLabel(groupBox_FP);
        label_flameAreaValue->setObjectName(QStringLiteral("label_flameAreaValue"));

        horizontalLayout_2->addWidget(label_flameAreaValue);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_height = new QLabel(groupBox_FP);
        label_height->setObjectName(QStringLiteral("label_height"));
        label_height->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_height);

        label_flameHeightValue = new QLabel(groupBox_FP);
        label_flameHeightValue->setObjectName(QStringLiteral("label_flameHeightValue"));

        horizontalLayout_4->addWidget(label_flameHeightValue);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_width = new QLabel(groupBox_FP);
        label_width->setObjectName(QStringLiteral("label_width"));
        label_width->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_width);

        label_flameWidthValue = new QLabel(groupBox_FP);
        label_flameWidthValue->setObjectName(QStringLiteral("label_flameWidthValue"));

        horizontalLayout_5->addWidget(label_flameWidthValue);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_liftoff = new QLabel(groupBox_FP);
        label_liftoff->setObjectName(QStringLiteral("label_liftoff"));
        label_liftoff->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_liftoff);

        label_flameLiftoff = new QLabel(groupBox_FP);
        label_flameLiftoff->setObjectName(QStringLiteral("label_flameLiftoff"));

        horizontalLayout_6->addWidget(label_flameLiftoff);


        verticalLayout_2->addLayout(horizontalLayout_6);

        checkBox = new QCheckBox(groupBox_FP);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setLayoutDirection(Qt::LeftToRight);
        checkBox->setTristate(false);

        verticalLayout_2->addWidget(checkBox);

        groupBox_HSV = new QGroupBox(centralWidget);
        groupBox_HSV->setObjectName(QStringLiteral("groupBox_HSV"));
        groupBox_HSV->setGeometry(QRect(10, 10, 315, 355));
        groupBox_HSV->setAutoFillBackground(false);
        groupBox_HSV->setFlat(false);
        groupBox_HSV->setCheckable(false);
        verticalLayout_9 = new QVBoxLayout(groupBox_HSV);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        set_button = new QPushButton(groupBox_HSV);
        set_button->setObjectName(QStringLiteral("set_button"));

        horizontalLayout->addWidget(set_button);

        reset_button = new QPushButton(groupBox_HSV);
        reset_button->setObjectName(QStringLiteral("reset_button"));

        horizontalLayout->addWidget(reset_button);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(groupBox_HSV);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        horizontalSlider_4 = new QSlider(groupBox_HSV);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setValue(255);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider_4);


        gridLayout->addLayout(verticalLayout_5, 3, 0, 1, 1);

        SminBox = new QSpinBox(groupBox_HSV);
        SminBox->setObjectName(QStringLiteral("SminBox"));
        SminBox->setMaximum(255);

        gridLayout->addWidget(SminBox, 2, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(groupBox_HSV);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_6->addWidget(label_5);

        horizontalSlider_5 = new QSlider(groupBox_HSV);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(255);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(horizontalSlider_5);


        gridLayout->addLayout(verticalLayout_6, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox_HSV);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalSlider = new QSlider(groupBox_HSV);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(groupBox_HSV);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalSlider_2 = new QSlider(groupBox_HSV);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setValue(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_2);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        SmaxBox = new QSpinBox(groupBox_HSV);
        SmaxBox->setObjectName(QStringLiteral("SmaxBox"));
        SmaxBox->setMaximum(255);
        SmaxBox->setValue(255);

        gridLayout->addWidget(SmaxBox, 3, 1, 1, 1);

        HmaxBox = new QSpinBox(groupBox_HSV);
        HmaxBox->setObjectName(QStringLiteral("HmaxBox"));
        HmaxBox->setMaximum(255);
        HmaxBox->setValue(255);

        gridLayout->addWidget(HmaxBox, 1, 1, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(groupBox_HSV);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_7->addWidget(label_6);

        horizontalSlider_6 = new QSlider(groupBox_HSV);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(255);
        horizontalSlider_6->setValue(255);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(horizontalSlider_6);


        gridLayout->addLayout(verticalLayout_7, 5, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(groupBox_HSV);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        horizontalSlider_3 = new QSlider(groupBox_HSV);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_3);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        VminBox = new QSpinBox(groupBox_HSV);
        VminBox->setObjectName(QStringLiteral("VminBox"));
        VminBox->setMaximum(255);

        gridLayout->addWidget(VminBox, 4, 1, 1, 1);

        HminBox = new QSpinBox(groupBox_HSV);
        HminBox->setObjectName(QStringLiteral("HminBox"));
        HminBox->setMaximum(255);

        gridLayout->addWidget(HminBox, 0, 1, 1, 1);

        VmaxBox = new QSpinBox(groupBox_HSV);
        VmaxBox->setObjectName(QStringLiteral("VmaxBox"));
        VmaxBox->setMaximum(255);
        VmaxBox->setValue(255);

        gridLayout->addWidget(VmaxBox, 5, 1, 1, 1);


        verticalLayout_9->addLayout(gridLayout);

        groupBox_EP = new QGroupBox(centralWidget);
        groupBox_EP->setObjectName(QStringLiteral("groupBox_EP"));
        groupBox_EP->setGeometry(QRect(335, 160, 315, 205));
        groupBox_C = new QGroupBox(centralWidget);
        groupBox_C->setObjectName(QStringLiteral("groupBox_C"));
        groupBox_C->setGeometry(QRect(10, 370, 315, 110));
        connect_button = new QPushButton(groupBox_C);
        connect_button->setObjectName(QStringLiteral("connect_button"));
        connect_button->setGeometry(QRect(230, 80, 75, 23));
        connect_button->setFlat(false);
        layoutWidget = new QWidget(groupBox_C);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 158, 83));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        extend_button = new QPushButton(layoutWidget);
        extend_button->setObjectName(QStringLiteral("extend_button"));

        formLayout->setWidget(1, QFormLayout::LabelRole, extend_button);

        ignite_button = new QPushButton(layoutWidget);
        ignite_button->setObjectName(QStringLiteral("ignite_button"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ignite_button);

        contract_button = new QPushButton(layoutWidget);
        contract_button->setObjectName(QStringLiteral("contract_button"));

        formLayout->setWidget(2, QFormLayout::LabelRole, contract_button);

        spark_button = new QPushButton(layoutWidget);
        spark_button->setObjectName(QStringLiteral("spark_button"));

        formLayout->setWidget(2, QFormLayout::FieldRole, spark_button);

        send_cmd_button = new QPushButton(layoutWidget);
        send_cmd_button->setObjectName(QStringLiteral("send_cmd_button"));

        formLayout->setWidget(0, QFormLayout::FieldRole, send_cmd_button);

        reset_dds_button = new QPushButton(layoutWidget);
        reset_dds_button->setObjectName(QStringLiteral("reset_dds_button"));

        formLayout->setWidget(0, QFormLayout::LabelRole, reset_dds_button);

        layoutWidget1 = new QWidget(groupBox_C);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 20, 141, 21));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        freqSlider = new QSlider(layoutWidget1);
        freqSlider->setObjectName(QStringLiteral("freqSlider"));
        freqSlider->setMaximum(999);
        freqSlider->setSingleStep(1);
        freqSlider->setOrientation(Qt::Horizontal);
        freqSlider->setTickPosition(QSlider::NoTicks);
        freqSlider->setTickInterval(50);

        horizontalLayout_7->addWidget(freqSlider);

        freqBox = new QSpinBox(layoutWidget1);
        freqBox->setObjectName(QStringLiteral("freqBox"));
        freqBox->setMaximum(999);

        horizontalLayout_7->addWidget(freqBox);

        auto_ignite_check = new QCheckBox(groupBox_C);
        auto_ignite_check->setObjectName(QStringLiteral("auto_ignite_check"));
        auto_ignite_check->setGeometry(QRect(173, 53, 111, 17));
        exit_button = new QPushButton(centralWidget);
        exit_button->setObjectName(QStringLiteral("exit_button"));
        exit_button->setGeometry(QRect(575, 452, 75, 23));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(335, 370, 230, 110));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 19, 215, 85));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        start_log_button = new QPushButton(widget);
        start_log_button->setObjectName(QStringLiteral("start_log_button"));

        verticalLayout_8->addWidget(start_log_button);

        stop_log_button = new QPushButton(widget);
        stop_log_button->setObjectName(QStringLiteral("stop_log_button"));

        verticalLayout_8->addWidget(stop_log_button);

        bode_log_button = new QPushButton(widget);
        bode_log_button->setObjectName(QStringLiteral("bode_log_button"));

        verticalLayout_8->addWidget(bode_log_button);


        horizontalLayout_8->addLayout(verticalLayout_8);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_frames = new QLabel(widget);
        label_frames->setObjectName(QStringLiteral("label_frames"));
        label_frames->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_frames);

        lcd_frames = new QLCDNumber(widget);
        lcd_frames->setObjectName(QStringLiteral("lcd_frames"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(170, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(212, 127, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lcd_frames->setPalette(palette);
        lcd_frames->setLayoutDirection(Qt::LeftToRight);
        lcd_frames->setFrameShape(QFrame::Box);
        lcd_frames->setFrameShadow(QFrame::Raised);
        lcd_frames->setLineWidth(1);
        lcd_frames->setMidLineWidth(0);
        lcd_frames->setSmallDecimalPoint(false);
        lcd_frames->setDigitCount(5);
        lcd_frames->setSegmentStyle(QLCDNumber::Filled);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lcd_frames);

        label_frames_2 = new QLabel(widget);
        label_frames_2->setObjectName(QStringLiteral("label_frames_2"));
        label_frames_2->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_frames_2);

        lcd_seconds = new QLCDNumber(widget);
        lcd_seconds->setObjectName(QStringLiteral("lcd_seconds"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lcd_seconds->setPalette(palette1);
        lcd_seconds->setLayoutDirection(Qt::LeftToRight);
        lcd_seconds->setFrameShape(QFrame::Box);
        lcd_seconds->setFrameShadow(QFrame::Raised);
        lcd_seconds->setLineWidth(1);
        lcd_seconds->setMidLineWidth(0);
        lcd_seconds->setSmallDecimalPoint(false);
        lcd_seconds->setDigitCount(5);
        lcd_seconds->setSegmentStyle(QLCDNumber::Filled);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lcd_seconds);

        label_frames_3 = new QLabel(widget);
        label_frames_3->setObjectName(QStringLiteral("label_frames_3"));
        label_frames_3->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_frames_3);

        lcd_freq = new QLCDNumber(widget);
        lcd_freq->setObjectName(QStringLiteral("lcd_freq"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        lcd_freq->setPalette(palette2);
        lcd_freq->setLayoutDirection(Qt::LeftToRight);
        lcd_freq->setFrameShape(QFrame::Box);
        lcd_freq->setFrameShadow(QFrame::Raised);
        lcd_freq->setLineWidth(1);
        lcd_freq->setMidLineWidth(0);
        lcd_freq->setSmallDecimalPoint(false);
        lcd_freq->setDigitCount(5);
        lcd_freq->setSegmentStyle(QLCDNumber::Filled);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lcd_freq);


        horizontalLayout_8->addLayout(formLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(HminBox, HmaxBox);
        QWidget::setTabOrder(HmaxBox, SminBox);
        QWidget::setTabOrder(SminBox, SmaxBox);
        QWidget::setTabOrder(SmaxBox, VminBox);
        QWidget::setTabOrder(VminBox, VmaxBox);
        QWidget::setTabOrder(VmaxBox, horizontalSlider);
        QWidget::setTabOrder(horizontalSlider, horizontalSlider_2);
        QWidget::setTabOrder(horizontalSlider_2, horizontalSlider_3);
        QWidget::setTabOrder(horizontalSlider_3, horizontalSlider_4);
        QWidget::setTabOrder(horizontalSlider_4, horizontalSlider_5);
        QWidget::setTabOrder(horizontalSlider_5, horizontalSlider_6);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), HminBox, SLOT(setValue(int)));
        QObject::connect(HminBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), HmaxBox, SLOT(setValue(int)));
        QObject::connect(HmaxBox, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), SminBox, SLOT(setValue(int)));
        QObject::connect(SminBox, SIGNAL(valueChanged(int)), horizontalSlider_3, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), SmaxBox, SLOT(setValue(int)));
        QObject::connect(SmaxBox, SIGNAL(valueChanged(int)), horizontalSlider_4, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), VminBox, SLOT(setValue(int)));
        QObject::connect(VminBox, SIGNAL(valueChanged(int)), horizontalSlider_5, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), VmaxBox, SLOT(setValue(int)));
        QObject::connect(VmaxBox, SIGNAL(valueChanged(int)), horizontalSlider_6, SLOT(setValue(int)));
        QObject::connect(freqSlider, SIGNAL(valueChanged(int)), freqBox, SLOT(setValue(int)));
        QObject::connect(freqBox, SIGNAL(valueChanged(int)), freqSlider, SLOT(setValue(int)));

        connect_button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FSMVF Main", nullptr));
        groupBox_FP->setTitle(QApplication::translate("MainWindow", "Flame Properties", nullptr));
        label_pixel->setText(QApplication::translate("MainWindow", "Number of Pixels =", nullptr));
        label_numPixel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_flamearea->setText(QApplication::translate("MainWindow", "Flame Area =", nullptr));
        label_flameAreaValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_height->setText(QApplication::translate("MainWindow", "Flame Height =", nullptr));
        label_flameHeightValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_width->setText(QApplication::translate("MainWindow", "Flame Width =", nullptr));
        label_flameWidthValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_liftoff->setText(QApplication::translate("MainWindow", "Flame Lift-off Distance =", nullptr));
        label_flameLiftoff->setText(QApplication::translate("MainWindow", "0", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Unit change (mm or cm)", nullptr));
        groupBox_HSV->setTitle(QApplication::translate("MainWindow", "HSV Filter", nullptr));
        set_button->setText(QApplication::translate("MainWindow", "Set to default", nullptr));
        reset_button->setText(QApplication::translate("MainWindow", "Reset", nullptr));
#ifndef QT_NO_SHORTCUT
        reset_button->setShortcut(QApplication::translate("MainWindow", "Alt+R", nullptr));
#endif // QT_NO_SHORTCUT
        label_4->setText(QApplication::translate("MainWindow", "Saturation - Maximum", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Value - Minimum", nullptr));
        label->setText(QApplication::translate("MainWindow", "Hue - Minimum", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Hue - Maximum", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Value - Maximum", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Saturation - Minimum", nullptr));
        groupBox_EP->setTitle(QApplication::translate("MainWindow", "Excitation Parameters", nullptr));
        groupBox_C->setTitle(QApplication::translate("MainWindow", "Controller", nullptr));
        connect_button->setText(QString());
#ifndef QT_NO_SHORTCUT
        connect_button->setShortcut(QApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_NO_SHORTCUT
        extend_button->setText(QApplication::translate("MainWindow", "Extend", nullptr));
        ignite_button->setText(QApplication::translate("MainWindow", "Ignite Flame", nullptr));
        contract_button->setText(QApplication::translate("MainWindow", "Contract", nullptr));
        spark_button->setText(QApplication::translate("MainWindow", "Spark", nullptr));
        send_cmd_button->setText(QApplication::translate("MainWindow", "Send CMD", nullptr));
        reset_dds_button->setText(QApplication::translate("MainWindow", "Reset DDS", nullptr));
        auto_ignite_check->setText(QApplication::translate("MainWindow", "Auto Ignite On", nullptr));
        exit_button->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        exit_button->setShortcut(QApplication::translate("MainWindow", "Alt+X", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("MainWindow", "Data Logging", nullptr));
        start_log_button->setText(QApplication::translate("MainWindow", "Start Log", nullptr));
        stop_log_button->setText(QApplication::translate("MainWindow", "Stop Log", nullptr));
        bode_log_button->setText(QApplication::translate("MainWindow", "Bode Plot Log", nullptr));
        label_frames->setText(QApplication::translate("MainWindow", "Frames :", nullptr));
        label_frames_2->setText(QApplication::translate("MainWindow", "Seconds :", nullptr));
        label_frames_3->setText(QApplication::translate("MainWindow", "Frequency :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
