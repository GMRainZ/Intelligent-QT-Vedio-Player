#ifndef PLAYER_H
#define PLAYER_H


// OpenCV
#include <opencv2/opencv.hpp>


//Qt
#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QTimer>
#include <QPushButton>
#include <QFileDialog>
#include <QMenuBar>
#include <QToolBar>
#include <QMediaPlayer>




//dlib
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing/render_face_detections.h>
#include <dlib/image_processing.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_io.h>
#include <dlib/image_transforms/draw.h>



QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    //0:正常视频播放模式 1:音频播放模式
    //2:人脸检测模式（使用opencv）
    //3:目标检测模式
    //4:编解码模式
    enum class PlayerMode{
        Vedio,
        Audio,
        FaceDetect,
        TargetDetect,
        EncodeDecode
    };
    PlayerMode playerMode = PlayerMode::Vedio;

private:
    Ui::Widget *ui;
    int labelWidth,labelHeight;
    int playerWidth,playerHeight;//播放器窗口大小
    double labelRate=0.8;//播放速率
    QLabel *label;
    cv::VideoCapture capture;
    QTimer* timer;


    //按钮
    QPushButton* openFileBtn;//打开文件
    QPushButton* playBtn;//播放
    QPushButton* closeBtn;//暂停


    //菜单栏    
    QMenuBar* menuBar;//菜单栏
    QToolBar* toolBar;//工具栏


    dlib::frontal_face_detector detector;
    dlib::shape_predictor face_predictor;



private:
    void setupWidget();
    void setupMenu();
    void setupToolBar();
    void setupButton();
    void setupLabel();


    void signalConnectSlot();

private:
    QString fileName;
    QMediaPlayer* mediaPlayer;
    // QVideoWidget* videoWidget;
    QAudioOutput* audioOutput;
private slots:

    //播放按钮的槽函数
    void playVedio();

    void setVedioMode();
    void setAudioMode();
    void setFaceDetectMode();

    void faceDetection();
    void faceRecognition();
    void rgb2gray();
    void edgeDetection();
    void targetDetection();
    void imageRecognition();
    void captchaRecognition();
    void ocr();

    //决定是使用processFrame还是processVedio
    
    void determinProcess();
    
    void pauseVedio();
    void processFrame();
    void processVedio();
    void openFile();
    void closePlayer(){
        capture.release();
        label->clear();
        this->close();
    }


    void saveFile();
};
#endif // PLAYER_H
