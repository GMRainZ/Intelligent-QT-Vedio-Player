// #include <QApplication>
// #include <QMainWindow>
// #include <QMediaPlayer>
// #include <QVideoWidget>
// #include <QVBoxLayout>
// #include <QAudioOutput>
// int main(int argc, char *argv[])
// {
//     QApplication a(argc, argv);

//     // 创建主窗口
//     QMainWindow mainWindow;

//     // 设置视频播放区域
//     QVideoWidget *videoWidget = new QVideoWidget(&mainWindow);
//     mainWindow.setCentralWidget(videoWidget);
//     QAudioOutput *audioOutput = new QAudioOutput();


//     // 创建 QMediaPlayer 实例
//     QMediaPlayer *player = new QMediaPlayer(&mainWindow);
//     player->setVideoOutput(videoWidget); // 设置视频输出

//     // 设置要播放的视频文件
//     player->setSource(QUrl::fromLocalFile("D:/Qt/qtProject/QPlayerWithOpenCV/afraid_to_make_mistake.mp4"));
//     player->setAudioOutput(audioOutput);
//     // 播放视频
//     player->play();

//     // 显示主窗口
//     mainWindow.resize(640, 480); // 设置窗口大小
//     mainWindow.show();

//     return a.exec();
// }
