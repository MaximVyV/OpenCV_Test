/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *pAction_File_Open;
    QAction *pAction_File_Quit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *pGridLayout_Base;
    QFrame *pFrame_VideoCapture;
    QGridLayout *gridLayout_3;
    QGridLayout *pGridLayout_VideoCapture;
    QLabel *pLabel_FPS;
    QLabel *pLabel_VideoCaptureStatus_Title;
    QLabel *pLabel_VideoCapture_Title;
    QLabel *pLabel_VideoFrameCounter_Title;
    QLineEdit *pLineEdit_VideoRecordFileName;
    QLabel *pLabel_FPS_Title;
    QLabel *pLabel_VideoFrameCounter;
    QLabel *pLabel_VideoCaptureStatus;
    QCheckBox *pCheckBox_VideoRecording;
    QLabel *pLabel_TimerCounter;
    QFrame *pFrame_TCP_VideoCapture;
    QGridLayout *gridLayout_4;
    QGridLayout *pGridLayout_TCP_VideoCapture;
    QLabel *pLabel_TCP_VideoFrameCounter;
    QLabel *pLabel_TCP_VideoFrameCounter_Title;
    QLabel *pLabel_TCP_VideoCapture_Title;
    QLabel *pLabel_TCP_VideoCaptureStatus_Title;
    QCheckBox *pCheckBox_TCP_VideoRecording;
    QLabel *pLabel_TCP_VideoCaptureStatus;
    QLineEdit *pLineEdit_TCP_VideoRecordFileName;
    QLabel *pLabel_TCP_FPS;
    QLabel *pLabel_TCP_FPS_Title;
    QCheckBox *pCheckBox_TCP_VideoCapture;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 400);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        pAction_File_Open = new QAction(MainWindow);
        pAction_File_Open->setObjectName(QString::fromUtf8("pAction_File_Open"));
        pAction_File_Quit = new QAction(MainWindow);
        pAction_File_Quit->setObjectName(QString::fromUtf8("pAction_File_Quit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pGridLayout_Base = new QGridLayout();
        pGridLayout_Base->setSpacing(5);
        pGridLayout_Base->setObjectName(QString::fromUtf8("pGridLayout_Base"));
        pFrame_VideoCapture = new QFrame(centralWidget);
        pFrame_VideoCapture->setObjectName(QString::fromUtf8("pFrame_VideoCapture"));
        pFrame_VideoCapture->setFrameShape(QFrame::StyledPanel);
        pFrame_VideoCapture->setFrameShadow(QFrame::Plain);
        gridLayout_3 = new QGridLayout(pFrame_VideoCapture);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pGridLayout_VideoCapture = new QGridLayout();
        pGridLayout_VideoCapture->setSpacing(5);
        pGridLayout_VideoCapture->setObjectName(QString::fromUtf8("pGridLayout_VideoCapture"));
        pLabel_FPS = new QLabel(pFrame_VideoCapture);
        pLabel_FPS->setObjectName(QString::fromUtf8("pLabel_FPS"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        pLabel_FPS->setFont(font);

        pGridLayout_VideoCapture->addWidget(pLabel_FPS, 3, 1, 1, 1);

        pLabel_VideoCaptureStatus_Title = new QLabel(pFrame_VideoCapture);
        pLabel_VideoCaptureStatus_Title->setObjectName(QString::fromUtf8("pLabel_VideoCaptureStatus_Title"));
        pLabel_VideoCaptureStatus_Title->setFont(font);

        pGridLayout_VideoCapture->addWidget(pLabel_VideoCaptureStatus_Title, 1, 0, 1, 1);

        pLabel_VideoCapture_Title = new QLabel(pFrame_VideoCapture);
        pLabel_VideoCapture_Title->setObjectName(QString::fromUtf8("pLabel_VideoCapture_Title"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pLabel_VideoCapture_Title->setFont(font1);
        pLabel_VideoCapture_Title->setFrameShape(QFrame::NoFrame);
        pLabel_VideoCapture_Title->setAlignment(Qt::AlignCenter);

        pGridLayout_VideoCapture->addWidget(pLabel_VideoCapture_Title, 0, 0, 1, 2);

        pLabel_VideoFrameCounter_Title = new QLabel(pFrame_VideoCapture);
        pLabel_VideoFrameCounter_Title->setObjectName(QString::fromUtf8("pLabel_VideoFrameCounter_Title"));
        pLabel_VideoFrameCounter_Title->setFont(font);

        pGridLayout_VideoCapture->addWidget(pLabel_VideoFrameCounter_Title, 2, 0, 1, 1);

        pLineEdit_VideoRecordFileName = new QLineEdit(pFrame_VideoCapture);
        pLineEdit_VideoRecordFileName->setObjectName(QString::fromUtf8("pLineEdit_VideoRecordFileName"));
        pLineEdit_VideoRecordFileName->setFont(font);

        pGridLayout_VideoCapture->addWidget(pLineEdit_VideoRecordFileName, 4, 1, 1, 1);

        pLabel_FPS_Title = new QLabel(pFrame_VideoCapture);
        pLabel_FPS_Title->setObjectName(QString::fromUtf8("pLabel_FPS_Title"));
        pLabel_FPS_Title->setFont(font);

        pGridLayout_VideoCapture->addWidget(pLabel_FPS_Title, 3, 0, 1, 1);

        pLabel_VideoFrameCounter = new QLabel(pFrame_VideoCapture);
        pLabel_VideoFrameCounter->setObjectName(QString::fromUtf8("pLabel_VideoFrameCounter"));
        pLabel_VideoFrameCounter->setFont(font);

        pGridLayout_VideoCapture->addWidget(pLabel_VideoFrameCounter, 2, 1, 1, 1);

        pLabel_VideoCaptureStatus = new QLabel(pFrame_VideoCapture);
        pLabel_VideoCaptureStatus->setObjectName(QString::fromUtf8("pLabel_VideoCaptureStatus"));
        pLabel_VideoCaptureStatus->setFont(font);

        pGridLayout_VideoCapture->addWidget(pLabel_VideoCaptureStatus, 1, 1, 1, 1);

        pCheckBox_VideoRecording = new QCheckBox(pFrame_VideoCapture);
        pCheckBox_VideoRecording->setObjectName(QString::fromUtf8("pCheckBox_VideoRecording"));
        pCheckBox_VideoRecording->setFont(font);

        pGridLayout_VideoCapture->addWidget(pCheckBox_VideoRecording, 4, 0, 1, 1);


        gridLayout_3->addLayout(pGridLayout_VideoCapture, 0, 0, 1, 1);


        pGridLayout_Base->addWidget(pFrame_VideoCapture, 0, 0, 1, 1);

        pLabel_TimerCounter = new QLabel(centralWidget);
        pLabel_TimerCounter->setObjectName(QString::fromUtf8("pLabel_TimerCounter"));
        pLabel_TimerCounter->setFont(font);

        pGridLayout_Base->addWidget(pLabel_TimerCounter, 4, 0, 1, 1);

        pFrame_TCP_VideoCapture = new QFrame(centralWidget);
        pFrame_TCP_VideoCapture->setObjectName(QString::fromUtf8("pFrame_TCP_VideoCapture"));
        pFrame_TCP_VideoCapture->setFrameShape(QFrame::StyledPanel);
        pFrame_TCP_VideoCapture->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(pFrame_TCP_VideoCapture);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pGridLayout_TCP_VideoCapture = new QGridLayout();
        pGridLayout_TCP_VideoCapture->setSpacing(5);
        pGridLayout_TCP_VideoCapture->setObjectName(QString::fromUtf8("pGridLayout_TCP_VideoCapture"));
        pLabel_TCP_VideoFrameCounter = new QLabel(pFrame_TCP_VideoCapture);
        pLabel_TCP_VideoFrameCounter->setObjectName(QString::fromUtf8("pLabel_TCP_VideoFrameCounter"));
        pLabel_TCP_VideoFrameCounter->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pLabel_TCP_VideoFrameCounter, 3, 1, 1, 1);

        pLabel_TCP_VideoFrameCounter_Title = new QLabel(pFrame_TCP_VideoCapture);
        pLabel_TCP_VideoFrameCounter_Title->setObjectName(QString::fromUtf8("pLabel_TCP_VideoFrameCounter_Title"));
        pLabel_TCP_VideoFrameCounter_Title->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pLabel_TCP_VideoFrameCounter_Title, 3, 0, 1, 1);

        pLabel_TCP_VideoCapture_Title = new QLabel(pFrame_TCP_VideoCapture);
        pLabel_TCP_VideoCapture_Title->setObjectName(QString::fromUtf8("pLabel_TCP_VideoCapture_Title"));
        pLabel_TCP_VideoCapture_Title->setFont(font1);
        pLabel_TCP_VideoCapture_Title->setFrameShape(QFrame::NoFrame);
        pLabel_TCP_VideoCapture_Title->setAlignment(Qt::AlignCenter);

        pGridLayout_TCP_VideoCapture->addWidget(pLabel_TCP_VideoCapture_Title, 0, 0, 1, 2);

        pLabel_TCP_VideoCaptureStatus_Title = new QLabel(pFrame_TCP_VideoCapture);
        pLabel_TCP_VideoCaptureStatus_Title->setObjectName(QString::fromUtf8("pLabel_TCP_VideoCaptureStatus_Title"));
        pLabel_TCP_VideoCaptureStatus_Title->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pLabel_TCP_VideoCaptureStatus_Title, 2, 0, 1, 1);

        pCheckBox_TCP_VideoRecording = new QCheckBox(pFrame_TCP_VideoCapture);
        pCheckBox_TCP_VideoRecording->setObjectName(QString::fromUtf8("pCheckBox_TCP_VideoRecording"));
        pCheckBox_TCP_VideoRecording->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pCheckBox_TCP_VideoRecording, 5, 0, 1, 1);

        pLabel_TCP_VideoCaptureStatus = new QLabel(pFrame_TCP_VideoCapture);
        pLabel_TCP_VideoCaptureStatus->setObjectName(QString::fromUtf8("pLabel_TCP_VideoCaptureStatus"));
        pLabel_TCP_VideoCaptureStatus->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pLabel_TCP_VideoCaptureStatus, 2, 1, 1, 1);

        pLineEdit_TCP_VideoRecordFileName = new QLineEdit(pFrame_TCP_VideoCapture);
        pLineEdit_TCP_VideoRecordFileName->setObjectName(QString::fromUtf8("pLineEdit_TCP_VideoRecordFileName"));
        pLineEdit_TCP_VideoRecordFileName->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pLineEdit_TCP_VideoRecordFileName, 5, 1, 1, 1);

        pLabel_TCP_FPS = new QLabel(pFrame_TCP_VideoCapture);
        pLabel_TCP_FPS->setObjectName(QString::fromUtf8("pLabel_TCP_FPS"));
        pLabel_TCP_FPS->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pLabel_TCP_FPS, 4, 1, 1, 1);

        pLabel_TCP_FPS_Title = new QLabel(pFrame_TCP_VideoCapture);
        pLabel_TCP_FPS_Title->setObjectName(QString::fromUtf8("pLabel_TCP_FPS_Title"));
        pLabel_TCP_FPS_Title->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pLabel_TCP_FPS_Title, 4, 0, 1, 1);

        pCheckBox_TCP_VideoCapture = new QCheckBox(pFrame_TCP_VideoCapture);
        pCheckBox_TCP_VideoCapture->setObjectName(QString::fromUtf8("pCheckBox_TCP_VideoCapture"));
        pCheckBox_TCP_VideoCapture->setFont(font);

        pGridLayout_TCP_VideoCapture->addWidget(pCheckBox_TCP_VideoCapture, 1, 0, 1, 1);


        gridLayout_4->addLayout(pGridLayout_TCP_VideoCapture, 0, 0, 1, 1);


        pGridLayout_Base->addWidget(pFrame_TCP_VideoCapture, 1, 0, 1, 1);


        gridLayout_2->addLayout(pGridLayout_Base, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(pAction_File_Open);
        menu->addAction(pAction_File_Quit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pAction_File_Open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pAction_File_Quit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pLabel_FPS->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pLabel_VideoCaptureStatus_Title->setText(QCoreApplication::translate("MainWindow", "\320\236\320\266\320\270\320\264\320\260\320\275\320\270\320\265...", nullptr));
        pLabel_VideoCapture_Title->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\205\320\262\320\260\321\202 \320\262\320\270\320\264\320\265\320\276 (Video Capture)", nullptr));
        pLabel_VideoFrameCounter_Title->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \320\272\320\260\320\264\321\200\320\276\320\262 (\320\261\320\270\321\202\321\213\320\265):", nullptr));
        pLineEdit_VideoRecordFileName->setText(QCoreApplication::translate("MainWindow", "c:\\WorkDir\\OpenCV_Test\\Record_001.avi", nullptr));
        pLabel_FPS_Title->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\272\320\260\320\264\321\200\320\276\320\262, \320\223\321\206:", nullptr));
        pLabel_VideoFrameCounter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pLabel_VideoCaptureStatus->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pCheckBox_VideoRecording->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\262\320\270\320\264\320\265\320\276", nullptr));
        pLabel_TimerCounter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pLabel_TCP_VideoFrameCounter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pLabel_TCP_VideoFrameCounter_Title->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\265\321\202\321\207\320\270\320\272 \320\272\320\260\320\264\321\200\320\276\320\262 (\320\261\320\270\321\202\321\213\320\265):", nullptr));
        pLabel_TCP_VideoCapture_Title->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\205\320\262\320\260\321\202 \320\262\320\270\320\264\320\265\320\276\320\277\320\276\321\202\320\276\320\272\320\260 TCP (TCP Stream Video Capture)", nullptr));
        pLabel_TCP_VideoCaptureStatus_Title->setText(QCoreApplication::translate("MainWindow", "\320\236\320\266\320\270\320\264\320\260\320\275\320\270\320\265...", nullptr));
        pCheckBox_TCP_VideoRecording->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\262\320\270\320\264\320\265\320\276", nullptr));
        pLabel_TCP_VideoCaptureStatus->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pLineEdit_TCP_VideoRecordFileName->setText(QCoreApplication::translate("MainWindow", "c:\\WorkDir\\OpenCV_Test\\Record_001.avi", nullptr));
        pLabel_TCP_FPS->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pLabel_TCP_FPS_Title->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\272\320\260\320\264\321\200\320\276\320\262, \320\223\321\206:", nullptr));
        pCheckBox_TCP_VideoCapture->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\205\320\262\320\260\321\202 \320\277\320\276\321\202\320\276\320\272\320\260 (TCP Stream Capture)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
