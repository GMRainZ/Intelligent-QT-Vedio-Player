#include"player.h"

void Widget::signalConnectSlot()
{
    //信号与槽的连接

    
    //连接打开文件按钮的clicked信号到槽函数openFile
    connect(openFileBtn,&QPushButton::clicked,this,&Widget::openFile);
    
    //连接播放按钮的clicked信号到槽函数playVideo
    connect(playBtn,&QPushButton::clicked,this,&Widget::playVedio);

    //连接关闭按钮的clicked信号到槽函数closePlayer
    connect(closeBtn,&QPushButton::clicked,this,&Widget::closePlayer);


    // connect(mediaPlayer, &QMediaPlayer::durationChanged, this, &Widget::durationChanged);
    // connect(mediaPlayer, &QMediaPlayer::positionChanged, this, &Widget::positionChanged);
    // connect(positionSlider, &QSlider::sliderMoved, this, &Widget::setPosition);

}


