#include"player.h"




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


void Widget::setupSlider(){
    /********************滑动条操作************************/
    //设置滑动条
    positionSlider=new QSlider(Qt::Horizontal,this);
    positionSlider->setGeometry(10,790,780,30);
    positionSlider->setRange(0,100);
    positionSlider->setValue(0);
}