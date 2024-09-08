#include "player.h"
#include "./ui_player.h"

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
    ,detector(dlib::get_frontal_face_detector())
    ,labelWidth(900), labelHeight(640)
    // ,face_predictor("D:/Qt/qtProject/QPlayerWithOpenCV/models/shape_predictor_68_face_landmarks.dat")
{
    ui->setupUi(this);
    dlib::deserialize("D:/Qt/qtProject/QPlayerWithOpenCV/models/shape_predictor_68_face_landmarks.dat") >> face_predictor;


    setupWidget();
    setupToolBar();
    setupMenu();
    setupButton();
    setupLabel();

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

void Widget::setupWidget()
{   
    // 设置窗口大小
    playerWidth=1000, playerHeight=800;
    labelWidth=playerWidth*labelRate, labelHeight=playerHeight*labelRate;
    resize(playerWidth,playerHeight);

    // 设置窗口标题
    setWindowTitle("QPlayerWithOpenCV");
    // 设置窗口图标
    // setWindowIcon(QIcon(":/icon.png"));

    // 设置窗口背景色
    // setStyleSheet("background-color: rgb(0,0,0);");


    // 设置窗口无边框
    // setWindowFlags(Qt::FramelessWindowHint);


    // 设置窗口透明度
    // setWindowOpacity(1.0);

    // 设置窗口圆角
    setAttribute(Qt::WA_TranslucentBackground);

    // 设置窗口阴影
    // setAttribute(Qt::WA_TranslucentBackground);
}
void Widget::setupLabel(){
    // 播放器初始化
    label=new QLabel(this);
    
    // label->setStyleSheet("background-color: rgb(255, 255, 255);");//设置背景颜色为黑色
    label->setAlignment(Qt::AlignCenter);

    // labelWidth=800, labelHeight=540;
    label->setGeometry(10,60,labelWidth,labelHeight);

    // QVBoxLayout *layout=new QVBoxLayout(this);
    // layout->addWidget(label);

    // capture.open("D:\\Qt\\qtProject\\QPlayerWithOpenCV\\afraid_to_make_mistake.mp4");

    // if(!capture.isOpened()){
    //     QMessageBox::information(this,"提示","打开视频失败");
    //     return;
    // }
}

void Widget::setupToolBar()
{

    /****************************工具栏****************************************/
    toolBar=new QToolBar(this);
    toolBar->setStyleSheet("background-color: rgb(0, 0, 0); color: rgb(255, 255, 255);");
    // toolBar->setGeometry(0,30,1000,30);
    
    this->addToolBar(toolBar);
    toolBar->setAllowedAreas(Qt::RightToolBarArea);
    toolBar->setFloatable(false);
    //添加工具栏按钮

    // toolBar->addAction(openFileBtn);
}
void Widget::setupMenu()
{
    /********************************菜单栏***********************************/
    menuBar=new QMenuBar(this);

    this->setMenuBar(menuBar);
    //设置菜单栏样式
    menuBar->setStyleSheet("background-color: rgb(0, 0, 0); color: rgb(255, 255, 255);");
    menuBar->setGeometry(0,0,1000,30);

    //添加菜单项
    QMenu *fileMenu=menuBar->addMenu("文件");
    
    //添加打开文件菜单项
    QAction *openFileAction=new QAction("打开文件",this);
    openFileAction->setShortcut(QKeySequence::Open);
    fileMenu->addAction(openFileAction);
    connect(openFileAction,&QAction::triggered,this,&Widget::openFile);
    fileMenu->addSeparator();
    
    //添加保存菜单项
    QAction *saveAction=new QAction("保存",this);
    saveAction->setShortcut(QKeySequence::Save);
    connect(saveAction,&QAction::triggered,this,&Widget::saveFile);
    fileMenu->addSeparator();

    //添加退出菜单项
    QAction *exitAction=new QAction("退出",this);
    exitAction->setShortcut(QKeySequence::Quit);
    connect(exitAction,&QAction::triggered,this,&Widget::close);


    QMenu *vedioMenu=menuBar->addMenu("播放设置");

    //添加播放菜单项
    QAction *playAction=new QAction("播放",this);
    connect(playAction,&QAction::triggered,this,&Widget::playVedio);
    vedioMenu->addAction(playAction);
    vedioMenu->addSeparator();

    //添加暂停菜单项
    QAction *pauseAction=new QAction("暂停",this);
    connect(pauseAction,&QAction::triggered,this,&Widget::pauseVedio);
    vedioMenu->addAction(pauseAction);
    vedioMenu->addSeparator();

    //添加设置菜单项
    QAction *setAction=new QAction("设置为视频模式",this);
    connect(setAction,&QAction::triggered,this,&Widget::setVedioMode);
    vedioMenu->addAction(setAction);
    vedioMenu->addSeparator();

    //添加设置为音频模式菜单项
    QAction *setAudioAction=new QAction("设置为音频模式",this);
    connect(setAudioAction,&QAction::triggered,this,&Widget::setAudioMode);
    vedioMenu->addAction(setAudioAction);
    vedioMenu->addSeparator();



    QMenu *faceRecognitionMenu=menuBar->addMenu("高级设置");

    //添加人脸检测菜单项
    QAction *faceDetectionAction=new QAction("人脸检测",this);
    connect(faceDetectionAction,&QAction::triggered,this,&Widget::faceDetection);
    faceRecognitionMenu->addAction(faceDetectionAction);
    faceRecognitionMenu->addSeparator();


    //添加人脸识别菜单项
    QAction *faceRecognitionAction=new QAction("人脸识别",this);
    connect(faceRecognitionAction,&QAction::triggered,this,&Widget::faceRecognition);
    faceRecognitionMenu->addAction(faceRecognitionAction);
    faceRecognitionMenu->addSeparator();

    //添加灰度化菜单项
    QAction *grayAction=new QAction("灰度化",this);
    connect(grayAction,&QAction::triggered,this,&Widget::rgb2gray);
    faceRecognitionMenu->addAction(grayAction);
    faceRecognitionMenu->addSeparator();

    //添加边缘检测菜单项
    QAction *edgeAction=new QAction("边缘检测",this);
    connect(edgeAction,&QAction::triggered,this,&Widget::edgeDetection);
    faceRecognitionMenu->addAction(edgeAction);
    faceRecognitionMenu->addSeparator();


    //添加目标检测菜单项
    QAction *targetDetectionAction=new QAction("目标检测",this);
    connect(targetDetectionAction,&QAction::triggered,this,&Widget::targetDetection);
    faceRecognitionMenu->addAction(targetDetectionAction);
    faceRecognitionMenu->addSeparator();

    //添加图像识别菜单项
    QAction *imageRecognitionAction=new QAction("图像识别",this);
    connect(imageRecognitionAction,&QAction::triggered,this,&Widget::imageRecognition);
    faceRecognitionMenu->addAction(imageRecognitionAction);
    faceRecognitionMenu->addSeparator();

    //添加验证码识别菜单项
    QAction *captchaRecognitionAction=new QAction("验证码识别",this);
    connect(captchaRecognitionAction,&QAction::triggered,this,&Widget::captchaRecognition);
    faceRecognitionMenu->addAction(captchaRecognitionAction);
    faceRecognitionMenu->addSeparator();


    //添加OCR菜单项
    QAction *ocrAction=new QAction("OCR",this);
    connect(ocrAction,&QAction::triggered,this,&Widget::ocr);
    faceRecognitionMenu->addAction(ocrAction);
    faceRecognitionMenu->addSeparator();


    QMenu *encodeMenu=menuBar->addMenu("编解码");
    encodeMenu->addAction("编码");

}






void Widget::setupButton()
{
    /********************按钮操作************************/
    //打开视频文件按钮
    openFileBtn=new QPushButton("打开视频文件",this);
    openFileBtn->setGeometry(10,760,100,30);

    //设置按钮颜色
    openFileBtn->setStyleSheet("background-color: rgb(255, 255, 255); color: rgb(0, 0, 0);");

    // 播放按钮
    playBtn=new QPushButton("播放",this);
    playBtn->setGeometry(120,760,100,30);


    //关闭按钮
    closeBtn=new QPushButton("关闭",this);
    closeBtn->setGeometry(790,0,100,30);
}

void Widget::signalConnectSlot()
{
    //信号与槽的连接

    
    //连接打开文件按钮的clicked信号到槽函数openFile
    connect(openFileBtn,&QPushButton::clicked,this,&Widget::openFile);
    
    //连接播放按钮的clicked信号到槽函数playVideo
    connect(playBtn,&QPushButton::clicked,this,&Widget::playVedio);

    //连接关闭按钮的clicked信号到槽函数closePlayer
    connect(closeBtn,&QPushButton::clicked,this,&Widget::closePlayer);
}

void Widget::processVedio()
{
    mediaPlayer=new QMediaPlayer(this);


    mediaPlayer->setVideoOutput(label);
}

void Widget::openFile()
{
    timer->stop();
    playBtn->setText("播放");

    fileName = QFileDialog::getOpenFileName(this, "打开视频文件", ".", "*.mp4");
    if (fileName.isEmpty())
    {
        return;
    }

    if(playerMode==PlayerMode::FaceDetect){
        capture.open(fileName.toStdString());
        if (!capture.isOpened())
        {
            QMessageBox::information(this, "提示", "打开视频失败");
            return;
        }
        setupLabel();
    }else if(playerMode==PlayerMode::Vedio){
        
        mediaPlayer=new QMediaPlayer;
        mediaPlayer->setVideoOutput(label);
        mediaPlayer->setSource(QUrl::fromLocalFile(fileName));

    }else if(playerMode==PlayerMode::Audio){
        mediaPlayer=new QMediaPlayer(this);

    }
    playBtn->setText("播放");

    // cv::Mat frame;
    // if (!capture.read(frame))
    // {
    //     return;
    // }
    // cv::resize(frame, frame, cv::Size(labelWidth, labelHeight));
    // QImage img = QImage((const unsigned char *)(frame.data), frame.cols, frame.rows, QImage::Format_BGR888);
    // // 将QImage格式转换为QPixmap格式
    // label->setPixmap(QPixmap::fromImage(img));
}

void Widget::playVedio(){
    if(playerMode==PlayerMode::FaceDetect){
        if(playBtn->text()=="播放"){
            playBtn->setText("暂停");
            timer->start(30);
        }else{
            playBtn->setText("播放");
            timer->stop();
        }
    }else if(playerMode==PlayerMode::Vedio){
        if(playBtn->text()=="播放"){
            playBtn->setText("暂停");

            mediaPlayer->play();
        }else{
            playBtn->setText("播放");
            mediaPlayer->pause();
        }
    }
}
void Widget::determinProcess(){
    if(playerMode==PlayerMode::FaceDetect){
        processFrame();
    }else if(playerMode==PlayerMode::Vedio){
        processVedio();
    }else if(playerMode==PlayerMode::Audio){
        // processAudio();
    }
}
void Widget::pauseVedio()
{
}
void Widget::processFrame()
{
    cv::Mat frame;
    
    if(!capture.read(frame)){
        return;
    }
    //将opencv的图像frame转换为QImage格式
    cv::resize(frame,frame,cv::Size(labelWidth,labelHeight));


    // dlib::array2d<dlib::bgr_pixel> dlib_image;
    // const int height = frame.rows, width = frame.cols;
    // dlib_image.set_size(height, width);
    // for (int y = 0; y < height; ++y) {
    //     for (int x = 0; x < width; ++x) {
    //         dlib_image[y][x] = dlib::bgr_pixel(frame.at<cv::Vec3b>(y, x)[2], frame.at<cv::Vec3b>(y, x)[1], frame.at<cv::Vec3b>(y, x)[0]);
    //     }
    // }
    // //进行人脸检测
    // std::vector<dlib::rectangle> faces = detector(dlib_image);

    // for (const auto& face : faces) {
    //     //进行人脸关键点检测
    //     dlib::full_object_detection shape = face_predictor(dlib_image, face);

    //     //绘制人脸关键点
    //     for (int i = 0; i < shape.num_parts(); i++) {
    //         cv::circle(frame, cv::Point(shape.part(i).x(), shape.part(i).y()), 2, cv::Scalar(0, 255, 0), -1);
    //     }
    // }

    QImage img=QImage((const unsigned char*)(frame.data),frame.cols,frame.rows,QImage::Format_BGR888);
    //将QImage格式转换为QPixmap格式
    label->setPixmap(QPixmap::fromImage(img));
}


void Widget::saveFile(){
    if(playerMode==PlayerMode::FaceDetect){

    }else if(playerMode==PlayerMode::Vedio){

    }else if(playerMode==PlayerMode::Audio){

    }
}

void Widget::setVedioMode()
{
}

void Widget::setAudioMode()
{
}

void Widget::faceRecognition()
{
}

void Widget::rgb2gray()
{
}

void Widget::edgeDetection()
{
}

void Widget::targetDetection()
{
}

void Widget::ocr()
{
}

void Widget::captchaRecognition()
{
}

void Widget::imageRecognition()
{
}

void Widget::faceDetection()
{
}

void Widget::setFaceDetectMode()
{
}
