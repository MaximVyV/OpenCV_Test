#include "Form_VideoFrame.h"
#include "ui_Form_VideoFrame.h"

using namespace std;
//using namespace cv;

bool Form_VideoFrame::VideoViewingFlag, Form_VideoFrame::VideoRecordingFlag, Form_VideoFrame::VideoIsOpened;
cv::VideoWriter Form_VideoFrame::writer;
uint Form_VideoFrame::PreviousVideoViewingFrameCounter, Form_VideoFrame::CurrentVideoViewingFrameCounter;
uint Form_VideoFrame::PreviousVideoRecordingFrameCounter, Form_VideoFrame::CurrentVideoRecordingFrameCounter;
//uint Form_VideoFrame::TimerCounter;
//QTime Form_VideoFrame::RecordTime, Form_VideoFrame::StartRecordTime;

Form_VideoFrame::Form_VideoFrame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_VideoFrame)
{
    ui->setupUi(this);

    pGraphicsScene_VF = new QGraphicsScene();
    ui->pGraphicsView->setScene(pGraphicsScene_VF);
//    this->setLayout(ui->pGridLayout);
    ui->pGraphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->pGraphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->pGraphicsView->viewport()->setMouseTracking(true);
    ui->pGraphicsView->viewport()->installEventFilter(this);

    pTimer_VF = new QTimer();
    pTimer_VF->setInterval(50);
    pTimer_VF->start();
    TimerCounter = 0;

//    connect(this, SIGNAL(onSendUDP_Packet(QByteArray)), UDP_Sender_BVR, SLOT(SendData(QByteArray)));
    connect(ui->pCheckBox_TestModeOnOff, SIGNAL(clicked()), this, SLOT(CheckBox_TestModeOnOff()));
    connect(ui->pRadioButton_ZoomFactor_x1, SIGNAL(clicked()), this, SLOT(RadioButton_ZoomFactor_x1_Click()));
    connect(ui->pRadioButton_ZoomFactor_x2, SIGNAL(clicked()), this, SLOT(RadioButton_ZoomFactor_x2_Click()));
    connect(ui->pRadioButton_ZoomFactor_x4, SIGNAL(clicked()), this, SLOT(RadioButton_ZoomFactor_x4_Click()));
    connect(ui->pRadioButton_ZoomFactor_x8, SIGNAL(clicked()), this, SLOT(RadioButton_ZoomFactor_x8_Click()));
    connect(ui->pRadioButton_ZoomFactor_x16, SIGNAL(clicked()), this, SLOT(RadioButton_ZoomFactor_x16_Click()));
    connect(pTimer_VF, SIGNAL(timeout()), this, SLOT(Timer_VF_timeout()));
    connect(ui->pCheckBox_VideoViewing, SIGNAL(clicked()), this, SLOT(CheckBox_VideoViewing()));
    connect(ui->pCheckBox_VideoRecording, SIGNAL(clicked()), this, SLOT(CheckBox_VideoRecording()));
    connect(ui->pRadioButton_VideoRecordFileName_Manual, SIGNAL(clicked()), this, SLOT(RadioButton_VideoRecordFileName_Manual_Click()));
    connect(ui->pRadioButton_VideoRecordFileName_Auto, SIGNAL(clicked()), this, SLOT(RadioButton_VideoRecordFileName_Auto_Click()));

    VideoRecordingFlag = false;

    frame = cv::Mat(FRAME_HEIGHT, FRAME_WIDTH, CV_8UC1);
    int codec = -1;

    writer.open("test.avi", codec, 60.0, frame.size(), false);

    QByteArray a;
    a.resize(4);
    char *pa;
    pa = a.data();

    for (int i = 0; i < supportedCodec.size(); i++)
    {
        a = supportedCodec[i].toUtf8();
        pa = a.data();
        qDebug() << i << ": " << supportedCodec[i];
        codec = cv::VideoWriter::fourcc(pa[0], pa[1], pa[2], pa[3]);
        writer.open("test.avi", codec, 60.0, frame.size(), false);
        if (writer.isOpened())
        {
            availableCodecs.push_back(supportedCodec[i]);
            availableCodecsInt.push_back(codec);
            ui->pComboBox_CodecChoice->addItem(supportedCodec[i]);
        }
    }
    VideoViewingFlag = true;
    IsCompression = false;
    FPS_Time.start();
}


Form_VideoFrame::~Form_VideoFrame()
{
    delete ui;
}

void Form_VideoFrame::CheckBox_TestModeOnOff()
{
    if (ui->pCheckBox_TestModeOnOff->isChecked())
    {

    }
    else
    {

    }
}

void Form_VideoFrame::Timer_VF_timeout()
{
    float FPS = 0;
    TimerCounter++;
    if (!(TimerCounter % 20))
    {
        uint t = FPS_Time.elapsed();
        FPS_Time.restart();
        if (VideoViewingFlag)
        {
            FPS = 1000.0 * (CurrentVideoViewingFrameCounter - PreviousVideoViewingFrameCounter) / t;
            ui->pLabel_VideoViewingFPS->setText(QLocale().toString(FPS, 'f', 1) + " (" + QString::number(CurrentVideoViewingFrameCounter - PreviousVideoViewingFrameCounter) + ")");
            PreviousVideoViewingFrameCounter = CurrentVideoViewingFrameCounter;
        }
        if (VideoRecordingFlag)
        {
    //        RecordTime.elapsed();
    //        ui->pLabel_RecordTime->setText(RecordTime.toString("hh:mm:ss.zzz") + " (" +  QString::number(RecordTime.elapsed()) + ")");
    //        ui->pLabel_RecordTime->setText(RecordTime.elapsed().toString("hh:mm:ss.zzz"));
    //        RecordTime = StartRecordTime.addMSecs(StartRecordTime.elapsed());
            ui->pLabel_RecordTime->setText(RecordTime.addMSecs(StartRecordTime.elapsed()).toString("hh:mm:ss.zzz"));
    //        ui->pLabel_RecordTime->setText(RecordTime.toString("hh:mm:ss.zzz") + " (" +  QString::number(StartRecordTime.elapsed()) + ")");
            FPS = 1000.0 * (CurrentVideoRecordingFrameCounter - PreviousVideoRecordingFrameCounter) / t;
            ui->pLabel_VideoRecordingFPS->setText(QLocale().toString(FPS, 'f', 1) + " (" + QString::number(CurrentVideoRecordingFrameCounter - PreviousVideoRecordingFrameCounter) + ")");
            PreviousVideoRecordingFrameCounter = CurrentVideoRecordingFrameCounter;
        }
    }
}

void Form_VideoFrame::DrawNewFrame(QImage *img)
{
//    QImage Image(this->size(),QImage::Format_RGB32);
//    QImage Image(FRAME_WIDTH, FRAME_HEIGHT, QImage::Format_RGB32);
//    Image = img.scaled(ui->pGraphicsView->size(), Qt::KeepAspectRatio);
    if (VideoViewingFlag)
    {
        pGraphicsScene_VF->clear();
        pGraphicsScene_VF->addPixmap(QPixmap::fromImage(*img));
        CurrentVideoViewingFrameCounter++;
    }
}

void Form_VideoFrame::DrawNewFrame(QImage img)
{
//    QImage Image(this->size(),QImage::Format_RGB32);
//    QImage Image(FRAME_WIDTH, FRAME_HEIGHT, QImage::Format_RGB32);
//    Image = img.scaled(ui->pGraphicsView->size(), Qt::KeepAspectRatio);
    if (VideoViewingFlag)
    {
        pGraphicsScene_VF->clear();
        pGraphicsScene_VF->addPixmap(QPixmap::fromImage(img));
        CurrentVideoViewingFrameCounter++;
    }
}

void Form_VideoFrame::WriteNewFrame(uchar *pFrame)
{
    if (VideoRecordingFlag && VideoIsOpened)
    {
        cv::Mat frm = cv::Mat(FRAME_HEIGHT, FRAME_WIDTH, CV_8UC1, pFrame);
        writer.write(frm);
        CurrentVideoRecordingFrameCounter++;
    }
}

//void Form_VideoFrame::mouseMoveEvent(QMouseEvent *event)
//{
//    QPoint p = event->pos();
////    QPoint p = QCursor::pos();
//    ui->pLabel_MouseCursorPosition->setText(QString("Mouse: X = %1").arg(p.x()) + QString("; Y = %1").arg(p.y()));
//}

//void Form_VideoFrame::hoverMoveEvent(QMouseEvent *event)
//{
//    QPoint p = event->pos();
////    QPoint p = QCursor::pos();
//    ui->pLabel_MouseCursorPosition->setText(QString("Hover: X = %1").arg(p.x()) + QString("; Y = %1").arg(p.y()));
//}

bool Form_VideoFrame::eventFilter(QObject *, QEvent *event)
{
    if (event->type() == QEvent::MouseMove || event->type() == QEvent::MouseButtonPress)
    {
        if (event->type() == QEvent::MouseMove)
        {
//          qDebug() << event;
//          QMouseEvent *pMouseEvent = static_castevent;
            QMouseEvent *pMouseEvent = static_cast<QMouseEvent *>(event);
//          QPoint p = pMouseEvent->pos();
            QPointF p = pMouseEvent->localPos();
//          QPoint p = (QMouseEvent)event->localPos();
            ushort col = p.x(), row = p.y();
            uchar *pBuffer;
            uchar zf = ZoomFactor;
            ushort hzc = HorizontalZoomCenter;
            ushort vzc = VerticalZoomCenter;
//            if (ImageProcessing::GetModeFlag())
//            {
//                if (zf == 1)
//                    pBuffer = ImageProcessing::GetTestOutputBuffer() + DOUBLE_FRAME_HEIGHT + row * FRAME_WIDTH + col;
//                else
//                {
//                    ushort ZoomFrameWidth = FRAME_WIDTH / zf;
//                    ushort ZoomFrameHeight = FRAME_HEIGHT / zf;
//                    pBuffer = ImageProcessing::GetTestOutputBuffer() + DOUBLE_FRAME_HEIGHT + (vzc - ZoomFrameHeight / 2) * FRAME_WIDTH + hzc - ZoomFrameWidth / 2 + (row / zf) * FRAME_WIDTH + col / zf;
//                }
//            }
//            else
//            {
//                if (zf > 1)
//                {
//                    ushort ZoomFrameWidth = FRAME_WIDTH / zf;
//                    ushort ZoomFrameHeight = FRAME_HEIGHT / zf;
//                    col = hzc - ZoomFrameWidth / 2 + col / zf;
//                    row = vzc - ZoomFrameHeight / 2 + row / zf;
//                }
//                pBuffer = ImageProcessing::GetOutputBufferS() + DOUBLE_FRAME_HEIGHT + row * FRAME_WIDTH * FRAME_TO_IMAGE_SCALE + col * FRAME_TO_IMAGE_SCALE;
//            }
            uchar Exposition = *pBuffer;
//            ui->pLabel_MouseCursorPosition->setText(QString("X = %1").arg(col) + QString("; Y = %1").arg(row) + "; E = " + QString::number(Exposition));
            ui->pLabel_MouseCursorPosition->setText(QString("X = %1").arg(col) + QString("; Y = %1").arg(row) + "; E = " + QString::number(Exposition));
        }
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent *pMouseEvent = static_cast<QMouseEvent *>(event);
            QPointF p = pMouseEvent->localPos();
            ui->pLineEdit_HorizontalZoomCenter->setText(QString::number(p.x(), 'f', 0));
            ui->pLineEdit_VerticalZoomCenter->setText(QString::number(p.y(), 'f', 0));
        }
        return true;
    }
    return false;
}

void Form_VideoFrame::RadioButton_ZoomFactor_x1_Click()
{
    GroupBox_ZoomFactor_Click(1);
}
void Form_VideoFrame::RadioButton_ZoomFactor_x2_Click()
{
    GroupBox_ZoomFactor_Click(2);
}
void Form_VideoFrame::RadioButton_ZoomFactor_x4_Click()
{
    GroupBox_ZoomFactor_Click(4);
}
void Form_VideoFrame::RadioButton_ZoomFactor_x8_Click()
{
    GroupBox_ZoomFactor_Click(8);
}
void Form_VideoFrame::RadioButton_ZoomFactor_x16_Click()
{
    GroupBox_ZoomFactor_Click(16);
}
void Form_VideoFrame::GroupBox_ZoomFactor_Click(uchar zf)
{
    HorizontalZoomCenter = ui->pLineEdit_HorizontalZoomCenter->text().toUShort();
    VerticalZoomCenter = ui->pLineEdit_VerticalZoomCenter->text().toUShort();
    ZoomFactor = zf;
    ui->pLineEdit_HorizontalZoomCenter->setText(QString::number(HorizontalZoomCenter));
    ui->pLineEdit_VerticalZoomCenter->setText(QString::number(VerticalZoomCenter));
}

void Form_VideoFrame::CheckBox_VideoViewing()
{
    if (ui->pCheckBox_VideoViewing->isChecked())
    {
        VideoViewingFPS = ui->pLineEdit_VideoViewingFPS->text().toInt();
        VideoViewingFlag = true;
    }
    else
    {
        VideoViewingFlag = false;
    }
}

void Form_VideoFrame::CheckBox_VideoRecording()
{
    if (ui->pCheckBox_VideoRecording->isChecked())
    {
        QString VideoRecordFileNameQString;
        VideoRecordingFlag = true;
        StartRecordTime = QTime::currentTime();
        ui->pLabel_StartRecordTime->setText(StartRecordTime.toString("hh:mm:ss"));
        StartRecordTime.start();
        RecordTime.setHMS(0, 0, 0);
        ui->pLabel_RecordTime->setText(RecordTime.toString("hh:mm:ss.zzz"));
        ui->pLabel_RecordTime->setStyleSheet("color : red");
        if (ui->pRadioButton_VideoRecordFileName_Manual->isChecked())
            VideoRecordFileNameQString = ui->pLineEdit_VideoRecordFileName_Manual->text();
        else
            VideoRecordFileNameQString = ui->pLineEdit_VideoRecordFileName_Auto->text() +
                                         (QString::number(Data.currentDateTime().date().day())).rightJustified(2, '0', true) +
                                         (QString::number(Data.currentDateTime().date().month())).rightJustified(2, '0', true) +
                                         (QString::number(Data.currentDateTime().date().year())).rightJustified(2, '0', true) + "_" +
                                         StartRecordTime.toString("hhmmss") + ".avi";
//            VideoRecordFileName = ui->pLineEdit_VideoRecordFileName_Auto->text().toStdString() +
//                                  (QString::number(Data.currentDateTime().date().day())).rightJustified(2, '0', true).toStdString() +
//                                  (QString::number(Data.currentDateTime().date().month())).rightJustified(2, '0', true).toStdString() +
//                                  (QString::number(Data.currentDateTime().date().year())).rightJustified(2, '0', true).toStdString() + "_" +
//                                  StartRecordTime.toString("hhmmss").toStdString() + ".avi";
        VideoRecordFileName = VideoRecordFileNameQString.toStdString();
//            VideoRecordFileName = ui->pLineEdit_VideoRecordFileName_Auto->text().toStdString() +
//                                  Data.currentDateTime().toString(Qt::SystemLocaleShortDate).toStdString() + "_" +
//                                  StartRecordTime.toString("hhmmss").toStdString() + ".avi";
//        int codec = cv::VideoWriter::fourcc('H', '2', '6', '4');  // select desired codec (must be available at runtime)
////        codec = VideoWriter::fourcc('M', 'J', 'P', 'G');
//        codec = cv::VideoWriter::fourcc('M', 'P', 'G', '4');
////        codec = VideoWriter::fourcc('X', 'V', 'I', 'D');
////        codec = VideoWriter::fourcc('M', 'P', '4', '2');
//        codec = cv::VideoWriter::fourcc('M', 'P', '4', '3');
        int codec = 0;
        double fps = 60;                          // framerate of the created video stream
        if (ui->pRadioButton_Compression_Yes->isChecked())
        {
            int index = ui->pComboBox_CodecChoice->currentIndex();
            codec = availableCodecsInt[index];
        }
        bool isColor = false;
        writer.open(VideoRecordFileName, codec, fps, frame.size(), isColor);
        emit onCreateNewVideoFile(VideoRecordFileNameQString + "1", codec, fps);
        ui->pLabel_VideoRecordFileName->setText(QString::fromStdString(VideoRecordFileName));
        if (!writer.isOpened())
        {
            qDebug() << "Could not open the output video file for write\n";
        }
        CurrentVideoViewingFrameCounter = 0;
        PreviousVideoViewingFrameCounter = CurrentVideoViewingFrameCounter;
        CurrentVideoRecordingFrameCounter = 0;
        PreviousVideoRecordingFrameCounter = CurrentVideoRecordingFrameCounter;
        FPS_Time.restart();
    }
    else
    {
        writer.release();
        emit onCloseVideoFile();
        VideoRecordingFlag = false;
        ui->pLabel_RecordTime->setStyleSheet("color : black");
    }
}

void Form_VideoFrame::RadioButton_VideoRecordFileName_Manual_Click()
{
//        ui->pLineEdit_VideoRecordFileName_Manual->isEnabled();
}

void Form_VideoFrame::RadioButton_VideoRecordFileName_Auto_Click()
{
//        ui->pLineEdit_VideoRecordFileName_Auto->isEnabled();
}
