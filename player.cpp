#include "player.h"
#include "./ui_player.h"

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
    ,detector(dlib::get_frontal_face_detector())
    ,labelWidth(900), labelHeight(640)
    ,label(nullptr), mediaPlayer(nullptr)
    ,videoWidget(nullptr),audioOutput(nullptr)
    ,positionSlider(nullptr)
    // ,face_predictor("D:/Qt/qtProject/QPlayerWithOpenCV/models/shape_predictor_68_face_landmarks.dat")
{
    ui->setupUi(this);
    dlib::deserialize("D:/Qt/qtProject/QPlayerWithOpenCV/models/shape_predictor_68_face_landmarks.dat") >> face_predictor;


    setupWidget();
    setupToolBar();
    setupMenu();
    setupButton();
    

    // 设置计时器间隔为30毫秒
    timer=new QTimer(this);
    timer->setInterval(30);
    //连接计时器的timeout信号到槽函数processFrame
    connect(timer,&QTimer::timeout,this,&Widget::processFrame);

    signalConnectSlot();
}   

Widget::~Widget()
{
    capture.release();
    delete ui;
}




void Widget::processVedio()
{
    //删除上一次的内容
    delete audioOutput;
    audioOutput=nullptr;

    delete videoWidget;
    videoWidget=nullptr;

    // mediaPlayer=new QMediaPlayer;
    
    delete label;
    label=nullptr;

    videoWidget=new QVideoWidget(this);
    audioOutput=new QAudioOutput(this);

    //设置窗口大小  
    // videoWidget->resize(labelWidth, labelHeight);
    //设置坐标
    videoWidget->setGeometry(10, 60, labelWidth, labelHeight);
    // videoWidget->setAspectRatioMode(Qt::KeepAspectRatio); // 保持视频的宽高比
    videoWidget->show(); // 确保视频小部件是可见的
    // this->setCentralWidget(videoWidget);
    mediaPlayer->setVideoOutput(videoWidget);
    mediaPlayer->setAudioOutput(audioOutput);
    mediaPlayer->setSource(QUrl::fromLocalFile(fileName));

    mediaPlayer->play();
}

