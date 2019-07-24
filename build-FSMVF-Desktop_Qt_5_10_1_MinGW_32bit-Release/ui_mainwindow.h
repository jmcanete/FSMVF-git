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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpinBox *HminBox;
    QSpinBox *HmaxBox;
    QSpinBox *VmaxBox;
    QSpinBox *SminBox;
    QSpinBox *VminBox;
    QSpinBox *SmaxBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QSlider *horizontalSlider_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QSlider *horizontalSlider_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QSlider *horizontalSlider_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QSlider *horizontalSlider_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *set_button;
    QPushButton *reset_button;
    QPushButton *exit_button;
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(560, 490);
        MainWindow->setMouseTracking(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 441, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        HminBox = new QSpinBox(gridLayoutWidget);
        HminBox->setObjectName(QStringLiteral("HminBox"));
        HminBox->setMaximum(255);

        gridLayout->addWidget(HminBox, 0, 1, 1, 1);

        HmaxBox = new QSpinBox(gridLayoutWidget);
        HmaxBox->setObjectName(QStringLiteral("HmaxBox"));
        HmaxBox->setMaximum(255);
        HmaxBox->setValue(255);

        gridLayout->addWidget(HmaxBox, 1, 1, 1, 1);

        VmaxBox = new QSpinBox(gridLayoutWidget);
        VmaxBox->setObjectName(QStringLiteral("VmaxBox"));
        VmaxBox->setMaximum(255);
        VmaxBox->setValue(255);

        gridLayout->addWidget(VmaxBox, 5, 1, 1, 1);

        SminBox = new QSpinBox(gridLayoutWidget);
        SminBox->setObjectName(QStringLiteral("SminBox"));
        SminBox->setMaximum(255);

        gridLayout->addWidget(SminBox, 2, 1, 1, 1);

        VminBox = new QSpinBox(gridLayoutWidget);
        VminBox->setObjectName(QStringLiteral("VminBox"));
        VminBox->setMaximum(255);

        gridLayout->addWidget(VminBox, 4, 1, 1, 1);

        SmaxBox = new QSpinBox(gridLayoutWidget);
        SmaxBox->setObjectName(QStringLiteral("SmaxBox"));
        SmaxBox->setMaximum(255);
        SmaxBox->setValue(255);

        gridLayout->addWidget(SmaxBox, 3, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalSlider = new QSlider(gridLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        horizontalSlider_2 = new QSlider(gridLayoutWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setValue(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider_2);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        horizontalSlider_3 = new QSlider(gridLayoutWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_3);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        horizontalSlider_4 = new QSlider(gridLayoutWidget);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setValue(255);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider_4);


        gridLayout->addLayout(verticalLayout_5, 3, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_6->addWidget(label_5);

        horizontalSlider_5 = new QSlider(gridLayoutWidget);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(255);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(horizontalSlider_5);


        gridLayout->addLayout(verticalLayout_6, 4, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_7->addWidget(label_6);

        horizontalSlider_6 = new QSlider(gridLayoutWidget);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(255);
        horizontalSlider_6->setValue(255);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(horizontalSlider_6);


        gridLayout->addLayout(verticalLayout_7, 5, 0, 1, 1);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 300, 301, 151));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        set_button = new QPushButton(layoutWidget);
        set_button->setObjectName(QStringLiteral("set_button"));

        horizontalLayout->addWidget(set_button);

        reset_button = new QPushButton(layoutWidget);
        reset_button->setObjectName(QStringLiteral("reset_button"));

        horizontalLayout->addWidget(reset_button);

        exit_button = new QPushButton(layoutWidget);
        exit_button->setObjectName(QStringLiteral("exit_button"));

        horizontalLayout->addWidget(exit_button);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_pixel = new QLabel(layoutWidget);
        label_pixel->setObjectName(QStringLiteral("label_pixel"));
        label_pixel->setTextFormat(Qt::AutoText);
        label_pixel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_pixel);

        label_numPixel = new QLabel(layoutWidget);
        label_numPixel->setObjectName(QStringLiteral("label_numPixel"));
        label_numPixel->setEnabled(true);

        horizontalLayout_3->addWidget(label_numPixel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_flamearea = new QLabel(layoutWidget);
        label_flamearea->setObjectName(QStringLiteral("label_flamearea"));
        label_flamearea->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_flamearea);

        label_flameAreaValue = new QLabel(layoutWidget);
        label_flameAreaValue->setObjectName(QStringLiteral("label_flameAreaValue"));

        horizontalLayout_2->addWidget(label_flameAreaValue);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_height = new QLabel(layoutWidget);
        label_height->setObjectName(QStringLiteral("label_height"));
        label_height->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_height);

        label_flameHeightValue = new QLabel(layoutWidget);
        label_flameHeightValue->setObjectName(QStringLiteral("label_flameHeightValue"));

        horizontalLayout_4->addWidget(label_flameHeightValue);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_width = new QLabel(layoutWidget);
        label_width->setObjectName(QStringLiteral("label_width"));
        label_width->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_width);

        label_flameWidthValue = new QLabel(layoutWidget);
        label_flameWidthValue->setObjectName(QStringLiteral("label_flameWidthValue"));

        horizontalLayout_5->addWidget(label_flameWidthValue);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_liftoff = new QLabel(layoutWidget);
        label_liftoff->setObjectName(QStringLiteral("label_liftoff"));
        label_liftoff->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_liftoff);

        label_flameLiftoff = new QLabel(layoutWidget);
        label_flameLiftoff->setObjectName(QStringLiteral("label_flameLiftoff"));

        horizontalLayout_6->addWidget(label_flameLiftoff);


        verticalLayout_2->addLayout(horizontalLayout_6);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(310, 300, 141, 151));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setLayoutDirection(Qt::LeftToRight);
        checkBox->setTristate(true);

        verticalLayout_8->addWidget(checkBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        QWidget::setTabOrder(horizontalSlider_6, exit_button);

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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FSMVF Main", nullptr));
        label->setText(QApplication::translate("MainWindow", "Hue - Minimum", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Hue - Maximum", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Saturation - Minimum", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Saturation - Maximum", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Value - Minimum", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Value - Maximum", nullptr));
        set_button->setText(QApplication::translate("MainWindow", "Set", nullptr));
        reset_button->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        exit_button->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label_pixel->setText(QApplication::translate("MainWindow", "Number of Pixels =", nullptr));
        label_numPixel->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_flamearea->setText(QApplication::translate("MainWindow", "Flame Area =", nullptr));
        label_flameAreaValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_height->setText(QApplication::translate("MainWindow", "Flame Height =", nullptr));
        label_flameHeightValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_width->setText(QApplication::translate("MainWindow", "Flame Width =", nullptr));
        label_flameWidthValue->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_liftoff->setText(QApplication::translate("MainWindow", "Flame Liftoff Distance =", nullptr));
        label_flameLiftoff->setText(QApplication::translate("MainWindow", "0", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Unit change (mm or cm)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
