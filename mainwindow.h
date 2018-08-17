#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QTcpServer>
#include <QTcpSocket>
#include <QImage>
#include <QMutex>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void init_layout(void);
    QUdpSocket *udp_receiver;
    QTcpServer *tcp_server;
    QTcpSocket *tcp_socket;

private slots:
    void on_pushButton_bind_clicked();
    void slot_receive();
    void on_comboBox_fbl_currentIndexChanged(const QString &arg1);
    void on_pushButton_link_clicked();
    void new_client();
    void client_dis();

    void on_pushButton_stop_ctu_clicked();

    void on_pushButton_unlink_clicked();

    void on_pushButton_left_pressed();

    void on_pushButton_right_pressed();

    void on_pushButton_front_pressed();

    void on_pushButton_back_pressed();

    void on_pushButton_front_2_pressed();

    void on_pushButton_left_2_pressed();

    void on_pushButton_right_2_pressed();

    void on_pushButton_back_2_pressed();

    void on_pushButton_ledoffon_clicked();

    void on_pushButton_released();

private:
    Ui::MainWindow *ui;
    QImage *recvImage;
    int mWidth = 292;
    int mHeight = 219;
    uchar status = 0x00;    //bit0:绑定 bit1:连接 bit2:N bit3:N bit4:开始1/停止0 bit5:N bit6:开1/关0灯
    bool stop_start_bit = false;
    bool linking_status = false;
    bool ledOnOff_status = false;
};

#endif // MAINWINDOW_H
