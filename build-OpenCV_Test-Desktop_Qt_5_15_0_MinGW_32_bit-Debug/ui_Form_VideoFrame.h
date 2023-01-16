/********************************************************************************
** Form generated from reading UI file 'Form_VideoFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_VIDEOFRAME_H
#define UI_FORM_VIDEOFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_VideoFrame
{
public:
    QGridLayout *pGridLayout_VideoFrame;
    QGridLayout *pGridLayout;
    QFrame *pFrame_TestMode;
    QGridLayout *gridLayout_5;
    QGridLayout *pGridLayout_TestMode;
    QLabel *pLabel_TestMode_Title;
    QCheckBox *pCheckBox_TestModeOnOff;
    QGridLayout *pGridLayout_Zoom;
    QCheckBox *pCheckBox_VideoRecording;
    QLineEdit *pLineEdit_VideoViewingFPS;
    QLabel *pLabel_StartRecordTime;
    QLineEdit *pLineEdit_HorizontalZoomCenter;
    QLineEdit *pLineEdit_VerticalZoomCenter;
    QLabel *pLabel_Zoom_Title;
    QSpacerItem *verticalSpacer;
    QLabel *pLabel_RecordTime;
    QCheckBox *pCheckBox_VideoViewing;
    QGroupBox *pGroupBox_Compression;
    QGridLayout *gridLayout_6;
    QGridLayout *pGridLayout_GroupBox_Zoom_2;
    QRadioButton *pRadioButton_Compression_No;
    QRadioButton *pRadioButton_Compression_Yes;
    QComboBox *pComboBox_CodecChoice;
    QGroupBox *pGroupBox_ZoomFactor;
    QGridLayout *gridLayout_4;
    QGridLayout *pGridLayout_GroupBox_Zoom;
    QRadioButton *pRadioButton_ZoomFactor_x1;
    QRadioButton *pRadioButton_ZoomFactor_x4;
    QRadioButton *pRadioButton_ZoomFactor_x8;
    QRadioButton *pRadioButton_ZoomFactor_x2;
    QRadioButton *pRadioButton_ZoomFactor_x16;
    QLabel *pLabel_MouseCursorPosition;
    QLabel *pLabel_VideoRecordFileName;
    QLineEdit *pLineEdit_VideoRecordFileName_Manual;
    QGroupBox *pGroupBox_VideoRecordFileName;
    QGridLayout *gridLayout_7;
    QGridLayout *pGridLayout_GroupBox_Zoom_3;
    QRadioButton *pRadioButton_VideoRecordFileName_Manual;
    QRadioButton *pRadioButton_VideoRecordFileName_Auto;
    QLineEdit *pLineEdit_VideoRecordFileName_Auto;
    QLabel *pLabel_VideoViewingFPS_Title;
    QLabel *pLabel_VideoViewingFPS;
    QLabel *pLabel_VideoRecordingFPS;
    QGraphicsView *pGraphicsView;

    void setupUi(QWidget *Form_VideoFrame)
    {
        if (Form_VideoFrame->objectName().isEmpty())
            Form_VideoFrame->setObjectName(QString::fromUtf8("Form_VideoFrame"));
        Form_VideoFrame->resize(1550, 750);
        pGridLayout_VideoFrame = new QGridLayout(Form_VideoFrame);
        pGridLayout_VideoFrame->setSpacing(5);
        pGridLayout_VideoFrame->setObjectName(QString::fromUtf8("pGridLayout_VideoFrame"));
        pGridLayout_VideoFrame->setContentsMargins(5, 5, 5, 5);
        pGridLayout = new QGridLayout();
        pGridLayout->setSpacing(5);
        pGridLayout->setObjectName(QString::fromUtf8("pGridLayout"));
        pFrame_TestMode = new QFrame(Form_VideoFrame);
        pFrame_TestMode->setObjectName(QString::fromUtf8("pFrame_TestMode"));
        pFrame_TestMode->setFrameShape(QFrame::StyledPanel);
        pFrame_TestMode->setFrameShadow(QFrame::Sunken);
        gridLayout_5 = new QGridLayout(pFrame_TestMode);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        pGridLayout_TestMode = new QGridLayout();
        pGridLayout_TestMode->setSpacing(5);
        pGridLayout_TestMode->setObjectName(QString::fromUtf8("pGridLayout_TestMode"));
        pLabel_TestMode_Title = new QLabel(pFrame_TestMode);
        pLabel_TestMode_Title->setObjectName(QString::fromUtf8("pLabel_TestMode_Title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        pLabel_TestMode_Title->setFont(font);
        pLabel_TestMode_Title->setAlignment(Qt::AlignCenter);

        pGridLayout_TestMode->addWidget(pLabel_TestMode_Title, 0, 0, 1, 1);

        pCheckBox_TestModeOnOff = new QCheckBox(pFrame_TestMode);
        pCheckBox_TestModeOnOff->setObjectName(QString::fromUtf8("pCheckBox_TestModeOnOff"));
        pCheckBox_TestModeOnOff->setFont(font);

        pGridLayout_TestMode->addWidget(pCheckBox_TestModeOnOff, 1, 0, 1, 1);


        gridLayout_5->addLayout(pGridLayout_TestMode, 0, 0, 1, 1);


        pGridLayout->addWidget(pFrame_TestMode, 0, 1, 1, 1);

        pGridLayout_Zoom = new QGridLayout();
        pGridLayout_Zoom->setSpacing(5);
        pGridLayout_Zoom->setObjectName(QString::fromUtf8("pGridLayout_Zoom"));
        pCheckBox_VideoRecording = new QCheckBox(Form_VideoFrame);
        pCheckBox_VideoRecording->setObjectName(QString::fromUtf8("pCheckBox_VideoRecording"));
        pCheckBox_VideoRecording->setFont(font);

        pGridLayout_Zoom->addWidget(pCheckBox_VideoRecording, 7, 0, 1, 1);

        pLineEdit_VideoViewingFPS = new QLineEdit(Form_VideoFrame);
        pLineEdit_VideoViewingFPS->setObjectName(QString::fromUtf8("pLineEdit_VideoViewingFPS"));
        pLineEdit_VideoViewingFPS->setFont(font);
        pLineEdit_VideoViewingFPS->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLineEdit_VideoViewingFPS, 6, 1, 1, 1);

        pLabel_StartRecordTime = new QLabel(Form_VideoFrame);
        pLabel_StartRecordTime->setObjectName(QString::fromUtf8("pLabel_StartRecordTime"));
        pLabel_StartRecordTime->setFont(font);
        pLabel_StartRecordTime->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLabel_StartRecordTime, 12, 0, 1, 1);

        pLineEdit_HorizontalZoomCenter = new QLineEdit(Form_VideoFrame);
        pLineEdit_HorizontalZoomCenter->setObjectName(QString::fromUtf8("pLineEdit_HorizontalZoomCenter"));
        pLineEdit_HorizontalZoomCenter->setFont(font);
        pLineEdit_HorizontalZoomCenter->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLineEdit_HorizontalZoomCenter, 1, 0, 1, 1);

        pLineEdit_VerticalZoomCenter = new QLineEdit(Form_VideoFrame);
        pLineEdit_VerticalZoomCenter->setObjectName(QString::fromUtf8("pLineEdit_VerticalZoomCenter"));
        pLineEdit_VerticalZoomCenter->setFont(font);
        pLineEdit_VerticalZoomCenter->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLineEdit_VerticalZoomCenter, 1, 1, 1, 1);

        pLabel_Zoom_Title = new QLabel(Form_VideoFrame);
        pLabel_Zoom_Title->setObjectName(QString::fromUtf8("pLabel_Zoom_Title"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pLabel_Zoom_Title->setFont(font1);
        pLabel_Zoom_Title->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLabel_Zoom_Title, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        pGridLayout_Zoom->addItem(verticalSpacer, 14, 0, 1, 1);

        pLabel_RecordTime = new QLabel(Form_VideoFrame);
        pLabel_RecordTime->setObjectName(QString::fromUtf8("pLabel_RecordTime"));
        pLabel_RecordTime->setFont(font);
        pLabel_RecordTime->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLabel_RecordTime, 12, 1, 1, 1);

        pCheckBox_VideoViewing = new QCheckBox(Form_VideoFrame);
        pCheckBox_VideoViewing->setObjectName(QString::fromUtf8("pCheckBox_VideoViewing"));
        pCheckBox_VideoViewing->setFont(font);
        pCheckBox_VideoViewing->setChecked(true);

        pGridLayout_Zoom->addWidget(pCheckBox_VideoViewing, 5, 0, 1, 1);

        pGroupBox_Compression = new QGroupBox(Form_VideoFrame);
        pGroupBox_Compression->setObjectName(QString::fromUtf8("pGroupBox_Compression"));
        pGroupBox_Compression->setFont(font1);
        gridLayout_6 = new QGridLayout(pGroupBox_Compression);
        gridLayout_6->setSpacing(5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 5, 5, 5);
        pGridLayout_GroupBox_Zoom_2 = new QGridLayout();
        pGridLayout_GroupBox_Zoom_2->setSpacing(5);
        pGridLayout_GroupBox_Zoom_2->setObjectName(QString::fromUtf8("pGridLayout_GroupBox_Zoom_2"));
        pRadioButton_Compression_No = new QRadioButton(pGroupBox_Compression);
        pRadioButton_Compression_No->setObjectName(QString::fromUtf8("pRadioButton_Compression_No"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        pRadioButton_Compression_No->setFont(font2);
        pRadioButton_Compression_No->setChecked(false);

        pGridLayout_GroupBox_Zoom_2->addWidget(pRadioButton_Compression_No, 0, 0, 1, 1);

        pRadioButton_Compression_Yes = new QRadioButton(pGroupBox_Compression);
        pRadioButton_Compression_Yes->setObjectName(QString::fromUtf8("pRadioButton_Compression_Yes"));
        pRadioButton_Compression_Yes->setFont(font2);
        pRadioButton_Compression_Yes->setChecked(true);

        pGridLayout_GroupBox_Zoom_2->addWidget(pRadioButton_Compression_Yes, 1, 0, 1, 1);


        gridLayout_6->addLayout(pGridLayout_GroupBox_Zoom_2, 0, 0, 1, 1);


        pGridLayout_Zoom->addWidget(pGroupBox_Compression, 8, 0, 1, 1);

        pComboBox_CodecChoice = new QComboBox(Form_VideoFrame);
        pComboBox_CodecChoice->setObjectName(QString::fromUtf8("pComboBox_CodecChoice"));
        pComboBox_CodecChoice->setFont(font);

        pGridLayout_Zoom->addWidget(pComboBox_CodecChoice, 8, 1, 1, 1);

        pGroupBox_ZoomFactor = new QGroupBox(Form_VideoFrame);
        pGroupBox_ZoomFactor->setObjectName(QString::fromUtf8("pGroupBox_ZoomFactor"));
        pGroupBox_ZoomFactor->setFont(font1);
        gridLayout_4 = new QGridLayout(pGroupBox_ZoomFactor);
        gridLayout_4->setSpacing(5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(5, 5, 5, 5);
        pGridLayout_GroupBox_Zoom = new QGridLayout();
        pGridLayout_GroupBox_Zoom->setSpacing(5);
        pGridLayout_GroupBox_Zoom->setObjectName(QString::fromUtf8("pGridLayout_GroupBox_Zoom"));
        pRadioButton_ZoomFactor_x1 = new QRadioButton(pGroupBox_ZoomFactor);
        pRadioButton_ZoomFactor_x1->setObjectName(QString::fromUtf8("pRadioButton_ZoomFactor_x1"));
        pRadioButton_ZoomFactor_x1->setFont(font2);
        pRadioButton_ZoomFactor_x1->setChecked(true);

        pGridLayout_GroupBox_Zoom->addWidget(pRadioButton_ZoomFactor_x1, 0, 0, 1, 1);

        pRadioButton_ZoomFactor_x4 = new QRadioButton(pGroupBox_ZoomFactor);
        pRadioButton_ZoomFactor_x4->setObjectName(QString::fromUtf8("pRadioButton_ZoomFactor_x4"));
        pRadioButton_ZoomFactor_x4->setFont(font2);

        pGridLayout_GroupBox_Zoom->addWidget(pRadioButton_ZoomFactor_x4, 2, 0, 1, 1);

        pRadioButton_ZoomFactor_x8 = new QRadioButton(pGroupBox_ZoomFactor);
        pRadioButton_ZoomFactor_x8->setObjectName(QString::fromUtf8("pRadioButton_ZoomFactor_x8"));
        pRadioButton_ZoomFactor_x8->setFont(font2);

        pGridLayout_GroupBox_Zoom->addWidget(pRadioButton_ZoomFactor_x8, 3, 0, 1, 1);

        pRadioButton_ZoomFactor_x2 = new QRadioButton(pGroupBox_ZoomFactor);
        pRadioButton_ZoomFactor_x2->setObjectName(QString::fromUtf8("pRadioButton_ZoomFactor_x2"));
        pRadioButton_ZoomFactor_x2->setFont(font2);

        pGridLayout_GroupBox_Zoom->addWidget(pRadioButton_ZoomFactor_x2, 1, 0, 1, 1);

        pRadioButton_ZoomFactor_x16 = new QRadioButton(pGroupBox_ZoomFactor);
        pRadioButton_ZoomFactor_x16->setObjectName(QString::fromUtf8("pRadioButton_ZoomFactor_x16"));
        pRadioButton_ZoomFactor_x16->setFont(font2);

        pGridLayout_GroupBox_Zoom->addWidget(pRadioButton_ZoomFactor_x16, 4, 0, 1, 1);


        gridLayout_4->addLayout(pGridLayout_GroupBox_Zoom, 0, 0, 1, 1);


        pGridLayout_Zoom->addWidget(pGroupBox_ZoomFactor, 2, 0, 1, 1);

        pLabel_MouseCursorPosition = new QLabel(Form_VideoFrame);
        pLabel_MouseCursorPosition->setObjectName(QString::fromUtf8("pLabel_MouseCursorPosition"));
        pLabel_MouseCursorPosition->setFont(font);
        pLabel_MouseCursorPosition->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLabel_MouseCursorPosition, 2, 1, 1, 1);

        pLabel_VideoRecordFileName = new QLabel(Form_VideoFrame);
        pLabel_VideoRecordFileName->setObjectName(QString::fromUtf8("pLabel_VideoRecordFileName"));
        pLabel_VideoRecordFileName->setFont(font2);
        pLabel_VideoRecordFileName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        pGridLayout_Zoom->addWidget(pLabel_VideoRecordFileName, 13, 0, 1, 2);

        pLineEdit_VideoRecordFileName_Manual = new QLineEdit(Form_VideoFrame);
        pLineEdit_VideoRecordFileName_Manual->setObjectName(QString::fromUtf8("pLineEdit_VideoRecordFileName_Manual"));
        pLineEdit_VideoRecordFileName_Manual->setFont(font);

        pGridLayout_Zoom->addWidget(pLineEdit_VideoRecordFileName_Manual, 10, 0, 1, 2);

        pGroupBox_VideoRecordFileName = new QGroupBox(Form_VideoFrame);
        pGroupBox_VideoRecordFileName->setObjectName(QString::fromUtf8("pGroupBox_VideoRecordFileName"));
        pGroupBox_VideoRecordFileName->setFont(font1);
        gridLayout_7 = new QGridLayout(pGroupBox_VideoRecordFileName);
        gridLayout_7->setSpacing(5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        pGridLayout_GroupBox_Zoom_3 = new QGridLayout();
        pGridLayout_GroupBox_Zoom_3->setSpacing(5);
        pGridLayout_GroupBox_Zoom_3->setObjectName(QString::fromUtf8("pGridLayout_GroupBox_Zoom_3"));
        pRadioButton_VideoRecordFileName_Manual = new QRadioButton(pGroupBox_VideoRecordFileName);
        pRadioButton_VideoRecordFileName_Manual->setObjectName(QString::fromUtf8("pRadioButton_VideoRecordFileName_Manual"));
        pRadioButton_VideoRecordFileName_Manual->setFont(font2);
        pRadioButton_VideoRecordFileName_Manual->setChecked(false);

        pGridLayout_GroupBox_Zoom_3->addWidget(pRadioButton_VideoRecordFileName_Manual, 0, 0, 1, 1);

        pRadioButton_VideoRecordFileName_Auto = new QRadioButton(pGroupBox_VideoRecordFileName);
        pRadioButton_VideoRecordFileName_Auto->setObjectName(QString::fromUtf8("pRadioButton_VideoRecordFileName_Auto"));
        pRadioButton_VideoRecordFileName_Auto->setFont(font2);
        pRadioButton_VideoRecordFileName_Auto->setChecked(true);

        pGridLayout_GroupBox_Zoom_3->addWidget(pRadioButton_VideoRecordFileName_Auto, 1, 0, 1, 1);


        gridLayout_7->addLayout(pGridLayout_GroupBox_Zoom_3, 0, 0, 1, 1);


        pGridLayout_Zoom->addWidget(pGroupBox_VideoRecordFileName, 9, 0, 1, 2);

        pLineEdit_VideoRecordFileName_Auto = new QLineEdit(Form_VideoFrame);
        pLineEdit_VideoRecordFileName_Auto->setObjectName(QString::fromUtf8("pLineEdit_VideoRecordFileName_Auto"));
        pLineEdit_VideoRecordFileName_Auto->setEnabled(true);
        pLineEdit_VideoRecordFileName_Auto->setFont(font);

        pGridLayout_Zoom->addWidget(pLineEdit_VideoRecordFileName_Auto, 11, 0, 1, 2);

        pLabel_VideoViewingFPS_Title = new QLabel(Form_VideoFrame);
        pLabel_VideoViewingFPS_Title->setObjectName(QString::fromUtf8("pLabel_VideoViewingFPS_Title"));
        pLabel_VideoViewingFPS_Title->setFont(font2);
        pLabel_VideoViewingFPS_Title->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLabel_VideoViewingFPS_Title, 6, 0, 1, 1);

        pLabel_VideoViewingFPS = new QLabel(Form_VideoFrame);
        pLabel_VideoViewingFPS->setObjectName(QString::fromUtf8("pLabel_VideoViewingFPS"));
        pLabel_VideoViewingFPS->setFont(font2);
        pLabel_VideoViewingFPS->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLabel_VideoViewingFPS, 5, 1, 1, 1);

        pLabel_VideoRecordingFPS = new QLabel(Form_VideoFrame);
        pLabel_VideoRecordingFPS->setObjectName(QString::fromUtf8("pLabel_VideoRecordingFPS"));
        pLabel_VideoRecordingFPS->setFont(font2);
        pLabel_VideoRecordingFPS->setAlignment(Qt::AlignCenter);

        pGridLayout_Zoom->addWidget(pLabel_VideoRecordingFPS, 7, 1, 1, 1);


        pGridLayout->addLayout(pGridLayout_Zoom, 1, 1, 1, 1);

        pGraphicsView = new QGraphicsView(Form_VideoFrame);
        pGraphicsView->setObjectName(QString::fromUtf8("pGraphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pGraphicsView->sizePolicy().hasHeightForWidth());
        pGraphicsView->setSizePolicy(sizePolicy);
        pGraphicsView->setMinimumSize(QSize(1282, 722));
        pGraphicsView->setMaximumSize(QSize(1282, 722));
        pGraphicsView->setFrameShadow(QFrame::Plain);
        pGraphicsView->setLineWidth(1);

        pGridLayout->addWidget(pGraphicsView, 0, 0, 2, 1);


        pGridLayout_VideoFrame->addLayout(pGridLayout, 0, 0, 1, 1);


        retranslateUi(Form_VideoFrame);

        QMetaObject::connectSlotsByName(Form_VideoFrame);
    } // setupUi

    void retranslateUi(QWidget *Form_VideoFrame)
    {
        Form_VideoFrame->setWindowTitle(QCoreApplication::translate("Form_VideoFrame", "VideoFrame", nullptr));
        pLabel_TestMode_Title->setText(QCoreApplication::translate("Form_VideoFrame", "\320\242\320\265\321\201\321\202\320\276\320\262\321\213\320\271 \321\200\320\265\320\266\320\270\320\274\n"
"(Test Mode)", nullptr));
        pCheckBox_TestModeOnOff->setText(QCoreApplication::translate("Form_VideoFrame", "\320\222\320\272\320\273/\320\222\321\213\320\272\320\273 (On/Off)", nullptr));
        pCheckBox_VideoRecording->setText(QCoreApplication::translate("Form_VideoFrame", "Video Recording", nullptr));
        pLineEdit_VideoViewingFPS->setText(QCoreApplication::translate("Form_VideoFrame", "60", nullptr));
        pLabel_StartRecordTime->setText(QCoreApplication::translate("Form_VideoFrame", "00:00:00", nullptr));
        pLineEdit_HorizontalZoomCenter->setText(QCoreApplication::translate("Form_VideoFrame", "1032", nullptr));
        pLineEdit_VerticalZoomCenter->setText(QCoreApplication::translate("Form_VideoFrame", "772", nullptr));
        pLabel_Zoom_Title->setText(QCoreApplication::translate("Form_VideoFrame", "\320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\265 (Zoom)", nullptr));
        pLabel_RecordTime->setText(QCoreApplication::translate("Form_VideoFrame", "0:00:00", nullptr));
        pCheckBox_VideoViewing->setText(QCoreApplication::translate("Form_VideoFrame", "Video Viewing", nullptr));
        pGroupBox_Compression->setTitle(QCoreApplication::translate("Form_VideoFrame", "\320\241\320\266\320\260\321\202\320\270\320\265 (Compression)", nullptr));
        pRadioButton_Compression_No->setText(QCoreApplication::translate("Form_VideoFrame", "\320\235\320\265\321\202 (No)", nullptr));
        pRadioButton_Compression_Yes->setText(QCoreApplication::translate("Form_VideoFrame", "\320\225\321\201\321\202\321\214 (Yes)", nullptr));
        pGroupBox_ZoomFactor->setTitle(QCoreApplication::translate("Form_VideoFrame", "\320\232\321\200\320\260\321\202\320\275\320\276\321\201\321\202\321\214 (Factor)", nullptr));
        pRadioButton_ZoomFactor_x1->setText(QCoreApplication::translate("Form_VideoFrame", "x1", nullptr));
        pRadioButton_ZoomFactor_x4->setText(QCoreApplication::translate("Form_VideoFrame", "x4", nullptr));
        pRadioButton_ZoomFactor_x8->setText(QCoreApplication::translate("Form_VideoFrame", "x8", nullptr));
        pRadioButton_ZoomFactor_x2->setText(QCoreApplication::translate("Form_VideoFrame", "x2", nullptr));
        pRadioButton_ZoomFactor_x16->setText(QCoreApplication::translate("Form_VideoFrame", "x16", nullptr));
        pLabel_MouseCursorPosition->setText(QCoreApplication::translate("Form_VideoFrame", "X = ; Y = ", nullptr));
        pLabel_VideoRecordFileName->setText(QCoreApplication::translate("Form_VideoFrame", "D:/WorkDir/BrigRecord_001.avi", nullptr));
        pLineEdit_VideoRecordFileName_Manual->setText(QCoreApplication::translate("Form_VideoFrame", "D:/WorkDir/Brig/Record_001.avi", nullptr));
        pGroupBox_VideoRecordFileName->setTitle(QCoreApplication::translate("Form_VideoFrame", "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260 (VideoRecordFileName)", nullptr));
        pRadioButton_VideoRecordFileName_Manual->setText(QCoreApplication::translate("Form_VideoFrame", "\320\240\321\203\321\207\320\275\320\276\320\265 (Manual)", nullptr));
        pRadioButton_VideoRecordFileName_Auto->setText(QCoreApplication::translate("Form_VideoFrame", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 (Auto)", nullptr));
        pLineEdit_VideoRecordFileName_Auto->setText(QCoreApplication::translate("Form_VideoFrame", "D:/WorkDir/Brig/Record_", nullptr));
        pLabel_VideoViewingFPS_Title->setText(QCoreApplication::translate("Form_VideoFrame", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \320\272\320\260\320\264\321\200\320\276\320\262 (FPS)", nullptr));
        pLabel_VideoViewingFPS->setText(QCoreApplication::translate("Form_VideoFrame", "0,0", nullptr));
        pLabel_VideoRecordingFPS->setText(QCoreApplication::translate("Form_VideoFrame", "0,0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_VideoFrame: public Ui_Form_VideoFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_VIDEOFRAME_H
