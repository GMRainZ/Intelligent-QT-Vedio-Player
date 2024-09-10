#include"player.h"

void Widget::resizeEvent(QResizeEvent *event){
     // 获取窗口的新尺寸
    QSize size = event->size();

    // 计算控件的新尺寸，保持与窗口相同的宽高比
    QSize newSize = QSize(size.width()*labelRate, size.width() *labelRate * 9 / 16);
    if(playerMode == PlayerMode::Vedio){
        // QSize newSize = QSize(size.width(), size.width() * 9 / 16);
        // 设置控件的新尺寸
        videoWidget->resize(newSize);
    }else if(playerMode == PlayerMode::FaceDetect){
        // QSize newSize = QSize(size.width(), size.width() * 9 / 16);
        // 设置控件的新尺寸
        label->resize(newSize);
    }
    // 调整控件的位置，使其居中
    // videoWidget->move((size.width() - newSize.width()) / 2, (size.height() - newSize.height()) / 2);
    // label->move((size.width() - newSize.width()) / 2, (size.height() - newSize.height()) / 2);
    // 调用基类的resizeEvent处理其他事件
    QWidget::resizeEvent(event);
}