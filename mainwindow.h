#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileDialog>
#include <QTimer>
#include <QTime>

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>
#include <stdio.h>

#include "Form_VideoFrame.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Form_VideoFrame *Form_VideoFrame_Test;

    QImage *Image_Test;


private slots:
    void on_pAction_File_Quit_triggered();
    void on_pAction_File_Open_triggered();
    void Timer_MW_timeout(void);
    void CheckBox_VideoRecording(void);
    void CheckBox_TCP_VideoCapture(void);

private:
    Ui::MainWindow *ui;

    QTimer *pTimer_MW;

    cv::VideoCapture cap, cap_TCP;
    cv::Mat frame, frame_TCP;
    cv::VideoWriter writer, writer_TCP;
    double VideoFrameNumber;

    QTime FPS_Time;
    uint TimerCounter, VideoFrameCount, BlankVideoFrameCount, PreviousVideoFrameCount;
    uint TimerCounter_TCP, VideoFrameCount_TCP, BlankVideoFrameCount_TCP, PreviousVideoFrameCount_TCP;
    bool VideoIsOpened, VideoRecordingFlag;
    bool VideoIsOpened_TCP, VideoRecordingFlag_TCP;
    std::string VideoRecordFileName;

signals:
     void onShowVideoFrame(QImage *);
     void onShowVideoFrame(QImage);
};

#endif // MAINWINDOW_H
