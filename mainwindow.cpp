#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;
using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Form_VideoFrame_Test = new Form_VideoFrame();

     //read an image
//    cv::Mat image = cv::imread("C://Users//Maxim//Documents//stoly.jpg", 0);
//    cv::Mat image = cv::imread("TestPZO.JPG", 0);
//    cv::Mat image = cv::imread("c://Qt//Projects//OpenCV_Test//build-OpenCV_Test-Desktop_Qt_5_5_0_MinGW_32bit-Debug//debug//TestPZO.JPG", 0);
     //create image window named "My Image"
//    cv::namedWindow("My Image");
     //show the image on window
//    cv::imshow("My Image", image);

//    int i  = 0;
//    i = -1;
    qDebug() << "Start";

//    cv::VideoCapture vc = cv::VideoCapture("C://WorkDir//OpenCV_Test//3_target.avi");
//    cv::VideoCapture vc = cv::VideoCapture("C://WorkDir//OpenCV_Test//MVI_3130.AVI", 0);
//      cv::VideoCapture vc = cv::VideoCapture("3_target.avi", 0);
//      cv::VideoCapture vc = cv::VideoCapture("TestPZO.JPG", 0);


/*    cv::VideoCapture *vc = new cv::VideoCapture();
//    if (!vc->open("c://Qt//Projects//OpenCV_Test//build-OpenCV_Test-Desktop_Qt_5_11_0_MinGW_32bit-Debug//debug//3_target.avi"))
    if (!vc->open("c://Qt//Projects//OpenCV_Test//build-OpenCV_Test-Desktop_Qt_5_5_0_MinGW_32bit-Debug//debug//1.avi"))
    {
        qDebug() << "Video not found";
    }

    if (vc->isOpened())
        i = 1;
    else
        i = 2;
//    cv::namedWindow("Video", 1);
*/
//    i = 3;

//    cv::Mat image;
//    vc.read(image);

//    i = 4;

    //cv::imshow("Video", image);

//    i += 1;
/*
    cv::VideoCapture cap;
//    cap.open("C://Qt//Projects//OpenCV_Test//build-OpenCV_Test-Desktop_Qt_5_11_0_MinGW_32bit-Debug//debug//1.avi");
//    cap.open("C://Qt//Projects//OpenCV_Test//build-OpenCV_Test-Desktop_Qt_5_11_0_MinGW_32bit-Debug//debug//3_target.avi");
//    cap.open("c://WorkDir//OpenCV_Test//GH010007.MP4");
    cap.open("c://WorkDir//OpenCV_Test//GX020049.MP4");
    if (!cap.isOpened())
    {
        qDebug() << "Video not found";
        ui->pLabel->setText("Файл не открывается!");
    }
    else
    {
//        cv::namedWindow("Video", cv::WINDOW_AUTOSIZE);
        cv::namedWindow("Video", cv::WINDOW_NORMAL);
        cv::Mat frame;
        double videoFrameCount = cap.get(cv::CAP_PROP_FRAME_COUNT);
        ui->pLabel->setText("Количество кадров " + QString::number(videoFrameCount, 'f', 1));
        for (int i = 0; i < static_cast<int>(videoFrameCount); i++)
        {
            cap >> frame;
            cv::imshow("Video", frame);
            cv::waitKey(200);
        }
    }
*/

    pTimer_MW = new QTimer();
    pTimer_MW->setInterval(10);
    pTimer_MW->start();
    TimerCounter = 0;

    FPS_Time.start();
    VideoIsOpened = false;
    VideoRecordingFlag = false;

    Image_Test = new QImage(IMAGE_WIDTH, IMAGE_HEIGHT, QImage::Format_RGB32);

    connect(pTimer_MW, SIGNAL(timeout()), this, SLOT(Timer_MW_timeout()));
    connect(ui->pCheckBox_VideoRecording, SIGNAL(clicked()), this, SLOT(CheckBox_VideoRecording()));
    connect(ui->pCheckBox_TCP_VideoCapture, SIGNAL(clicked()), this, SLOT(CheckBox_TCP_VideoCapture()));
    connect(this, SIGNAL(onShowVideoFrame(QImage *)), Form_VideoFrame_Test, SLOT(DrawNewFrame(QImage *)));
    connect(this, SIGNAL(onShowVideoFrame(QImage)), Form_VideoFrame_Test, SLOT(DrawNewFrame(QImage)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Timer_MW_timeout()
{
    TimerCounter++;
    if (VideoIsOpened && VideoFrameCount < static_cast<uint>(VideoFrameNumber))
    {
        cap >> frame;
        if (frame.empty())
           BlankVideoFrameCount++;
        else
        {
            writer.write(frame);
            cv::imshow("Video", frame);
        }
        VideoFrameCount++;
        ui->pLabel_VideoFrameCounter->setText(QString::number(VideoFrameCount) + " (" + QString::number(BlankVideoFrameCount) + ")");
    }
    if (VideoIsOpened_TCP)
    {
        cap_TCP >> frame_TCP;
        if (frame_TCP.empty())
           BlankVideoFrameCount_TCP++;
        else
        {
            int rows_TCP = frame_TCP.rows;
            int cols_TCP = frame_TCP.cols;
            MatSize size_TCP = frame_TCP.size;
            int type_TCP = frame_TCP.type();
            int depth_TCP = frame_TCP.depth();
            int type_CV_8UC3 = CV_8UC3;
//            writer_TCP.write(frame_TCP);
            cv::imshow("TCP Stream Video", frame_TCP);

            ushort row, col;
            uint index;
            int byteCount_TCP = Image_Test->byteCount();
            byteCount_TCP = Image_Test->sizeInBytes();
            uchar *pImageData;
            pImageData = (uchar *)Image_Test->bits();
            QImage dest(cols_TCP, rows_TCP, QImage::Format_RGB32);
            uchar *pImageDataT;
            pImageDataT = (uchar *)dest.bits();
            uchar *pFrameData;
            pFrameData = (uchar *)frame_TCP.data;
//            QImage dest(pFrameData, cols_TCP, rows_TCP, QImage::Format_RGB32);
//            for (int i = 0; i < FRAME_SIZE_4; i++)
//            {
//                *pBufferFrame++ = *pFrameData++;
//            }
//            Image_Test->loadFromData((uchar *)pBufferFrame, QImage::Format_RGB32);

            for (row = 0; row < FRAME_HEIGHT; row++)
            {
                for (col = 0; col < FRAME_WIDTH; col++)
                {
                    index = *pFrameData++;
                    index += *pFrameData++ << 8;
                    index += *pFrameData++ << 16;
                    Image_Test->setPixel(col, row, index);
                }
            }

            emit onShowVideoFrame(Image_Test);
//            emit onShowVideoFrame(dest);
        }
        VideoFrameCount_TCP++;
        ui->pLabel_TCP_VideoFrameCounter->setText(QString::number(VideoFrameCount_TCP) + " (" + QString::number(BlankVideoFrameCount_TCP) + ")");
    }
    if (!(TimerCounter % 50))
    {
        uint t = FPS_Time.elapsed();
        FPS_Time.restart();
        float FPS = 1000.0 * (VideoFrameCount - PreviousVideoFrameCount) / t;
        ui->pLabel_FPS->setText(QLocale().toString(FPS, 'f', 1));
        PreviousVideoFrameCount = VideoFrameCount;
        float FPS_TCP = 1000.0 * (VideoFrameCount_TCP - PreviousVideoFrameCount_TCP) / t;
        ui->pLabel_TCP_FPS->setText(QLocale().toString(FPS_TCP, 'f', 1));
        PreviousVideoFrameCount_TCP = VideoFrameCount_TCP;
        ui->pLabel_TimerCounter->setText(QString::number(TimerCounter));
    }
}

void MainWindow::on_pAction_File_Quit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pAction_File_Open_triggered()
{
//    QString str = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.cpp *.h");
    QString str = QFileDialog::getOpenFileName(0, "Open Dialog", "", "*.mpeg *.mpg *.avi *.mp4");
    ui->statusBar->showMessage(str);
//    cap.open("c://WorkDir//OpenCV_Test//GX020049.MP4");
    cap.open(str.toStdString());
    if (!cap.isOpened())
    {
        qDebug() << "Video not found";
        ui->pLabel_VideoCaptureStatus->setText("Файл не открывается!");
        VideoIsOpened = false;
    }
    else
    {
        qDebug() << "Video found";
        ui->pLabel_VideoCaptureStatus->setText("Файл открыт!");
        VideoFrameCount = 0;
        BlankVideoFrameCount = 0;
        VideoFrameNumber = cap.get(cv::CAP_PROP_FRAME_COUNT);
        ui->pLabel_VideoCaptureStatus->setText("Количество кадров " + QString::number(VideoFrameNumber, 'f', 1));
        cv::namedWindow("Video", cv::WINDOW_NORMAL);
        VideoIsOpened = true;
    }
}

void MainWindow::CheckBox_VideoRecording()
{
    if (ui->pCheckBox_VideoRecording->isChecked())
    {
        VideoRecordFileName = ui->pLineEdit_VideoRecordFileName->text().toStdString();
//        VideoRecordFileName = "./live.avi";
        int codec = VideoWriter::fourcc('H', '2', '6', '4');  // select desired codec (must be available at runtime)
//        codec = VideoWriter::fourcc('M', 'J', 'P', 'G');
        codec = VideoWriter::fourcc('M', 'P', 'G', '4');
//        codec = VideoWriter::fourcc('X', 'V', 'I', 'D');
//        codec = VideoWriter::fourcc('M', 'P', '4', '2');
        codec = VideoWriter::fourcc('M', 'P', '4', '3');
        double fps = 29.97;                          // framerate of the created video stream
        bool isColor = (frame.type() == CV_8UC3);
        writer.open(VideoRecordFileName, codec, fps, frame.size(), isColor);
        // check if we succeeded
        if (!writer.isOpened()) {
            qDebug() << "Could not open the output video file for write\n";
        }
        else
            VideoRecordingFlag = true;
    }
    else
    {
        writer.release();
        VideoRecordingFlag = false;
    }
}

void MainWindow::CheckBox_TCP_VideoCapture()
{
    if (ui->pCheckBox_TCP_VideoCapture->isChecked())
    {
        cap_TCP.open("tcp://localhost:8888");
        if (!cap_TCP.isOpened())
        {
            qDebug() << "TCP Stream not found";
            ui->pLabel_TCP_VideoCaptureStatus->setText("Поток TCP не открывается!");
            VideoIsOpened_TCP = false;
        }
        else
        {
            qDebug() << "TCP Stream found";
            ui->pLabel_TCP_VideoCaptureStatus->setText("Поток TCP открыт!");
            VideoFrameCount_TCP = 0;
            BlankVideoFrameCount_TCP = 0;
//            VideoFrameNumber = cap.get(cv::CAP_PROP_FRAME_COUNT);
//            ui->pLabel_VideoCaptureStatus->setText("Количество кадров " + QString::number(VideoFrameNumber, 'f', 1));
            cv::namedWindow("TCP Stream Video", cv::WINDOW_NORMAL);
            VideoIsOpened_TCP = true;
            Form_VideoFrame_Test->show();
        }
    }
    else
    {
        cap_TCP.release();
        qDebug() << "TCP Stream released";
        ui->pLabel_TCP_VideoCaptureStatus->setText("Поток TCP закрыт!");
        VideoIsOpened_TCP = false;
        if (Form_VideoFrame_Test->isVisible())
            Form_VideoFrame_Test->hide();
    }
}
