#ifndef FORM_VIDEOFRAME_H
#define FORM_VIDEOFRAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QDebug>
#include <QTimer>
#include <QTime>

#include <iostream>
#include <stdio.h>

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

//#include "MainWindow.h"

#define FRAME_WIDTH 1920
#define FRAME_HEIGHT 1080
#define FRAME_SIZE FRAME_WIDTH * FRAME_HEIGHT
#define FRAME_SIZE_4 4 * FRAME_SIZE
#define IMAGE_WIDTH FRAME_WIDTH
#define IMAGE_HEIGHT FRAME_HEIGHT

namespace Ui {
class Form_VideoFrame;
}

class Form_VideoFrame : public QWidget
{
    Q_OBJECT

public:
    explicit Form_VideoFrame(QWidget *parent = 0);
    ~Form_VideoFrame();
    static bool GetVideoViewingFlag(void) {return VideoViewingFlag;}
    static bool GetVideoRecordingFlag(void) {return VideoRecordingFlag;}
    static cv::VideoWriter GetVideoWriter(void) {return writer;}
    static void IncCurrentVideoRecordingFrameCounter(void) {CurrentVideoRecordingFrameCounter++;}

private:
    Ui::Form_VideoFrame *ui;
    QTimer *pTimer_VF;
    QGraphicsScene *pGraphicsScene_VF;
    virtual bool eventFilter(QObject *, QEvent *);
    void GroupBox_ZoomFactor_Click(uchar);

    static bool VideoViewingFlag, VideoIsOpened, VideoRecordingFlag;
    uint TimerCounter;
    QDateTime Data;
    QTime RecordTime, StartRecordTime;

    static uint PreviousVideoViewingFrameCounter, CurrentVideoViewingFrameCounter;
    static uint PreviousVideoRecordingFrameCounter, CurrentVideoRecordingFrameCounter;
    QTime FPS_Time;

    cv::VideoCapture cap;
    cv::Mat frame;
    static cv::VideoWriter writer;
    std::string VideoRecordFileName;
    double VideoFrameNumber;

    QStringList availableCodecs;
    QVector<int> availableCodecsInt;
    QStringList supportedCodec = {"MJPG", "MRLE", "H264", "MPG4", "XVID", "MP42", "MP43"};
    bool IsCompression;
    int CodecChoiceIndex, VideoViewingFPS;

    ushort HorizontalZoomCenter, VerticalZoomCenter;
    uchar ZoomFactor;

protected:
//    virtual void mouseMoveEvent(QMouseEvent *);
//    virtual void hoverMoveEvent(QMouseEvent *);

public slots:
    void CheckBox_TestModeOnOff(void);
    void DrawNewFrame(QImage *);
    void DrawNewFrame(QImage);
    void WriteNewFrame(uchar *pFrame);
    void RadioButton_ZoomFactor_x1_Click(void);
    void RadioButton_ZoomFactor_x2_Click(void);
    void RadioButton_ZoomFactor_x4_Click(void);
    void RadioButton_ZoomFactor_x8_Click(void);
    void RadioButton_ZoomFactor_x16_Click(void);
    void Timer_VF_timeout(void);
    void CheckBox_VideoViewing(void);
    void CheckBox_VideoRecording(void);
    void RadioButton_VideoRecordFileName_Manual_Click(void);
    void RadioButton_VideoRecordFileName_Auto_Click(void);
signals:
    void onCreateNewVideoFile(QString , int , double );
    void onCloseVideoFile(void);
};

#endif // FORM_VIDEOFRAME_H
