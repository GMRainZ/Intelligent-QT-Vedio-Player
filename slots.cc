#include"player.h"


void Widget::openFile()
{
    timer->stop();
    playBtn->setText("暂停");

    fileName = QFileDialog::getOpenFileName(this, "打开视频文件", ".", "*.mp4");
    if (fileName.isEmpty()){
        return;
    }
    if(playerMode==PlayerMode::FaceDetect){
        capture.open(fileName.toStdString());
        if (!capture.isOpened()){
            QMessageBox::information(this, "提示", "打开视频失败");
            return;
        }        // setupLabel();
    }else if(playerMode==PlayerMode::Vedio){
        processVedio();
    }else if(playerMode==PlayerMode::Audio){
        mediaPlayer=new QMediaPlayer(this);
    }
    // playBtn->setText("播放");

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

void Widget::durationChanged(qint64 duration){
    positionSlider->setRange(0,duration);
}

void Widget::positionChanged(qint64 position){
    positionSlider->setValue(position);
}

void Widget::setPosition(qint64 position){
    mediaPlayer->setPosition(position);
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
