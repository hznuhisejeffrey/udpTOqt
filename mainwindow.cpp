#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>
#include <QHostAddress>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{ 
    ui->setupUi(this);
    setWindowTitle("监测窗口");
    init_layout();    //对控件进行布局

    connect(ui->pushButton_bind, SIGNAL(clicked()), this, SLOT(on_pushButton_bind_clicked()), Qt::UniqueConnection);
    connect(ui->pushButton_link, SIGNAL(clicked()), this, SLOT(on_pushButton_link_clicked()), Qt::UniqueConnection);
    connect(ui->pushButton_stop_ctu, SIGNAL(clicked()), this, SLOT(on_pushButton_stop_ctu_clicked()), Qt::UniqueConnection);
    connect(ui->pushButton_unlink, SIGNAL(clicked()), this, SLOT(on_pushButton_unlink_clicked()), Qt::UniqueConnection);
    connect(ui->pushButton_ledoffon, SIGNAL(clicked()), this, SLOT(on_pushButton_ledoffon_clicked()), Qt::UniqueConnection);

    connect(ui->pushButton_front, SIGNAL(pressed()), this, SLOT(on_pushButton_front_pressed()), Qt::UniqueConnection);
    connect(ui->pushButton_back, SIGNAL(pressed()), this, SLOT(on_pushButton_back_pressed()), Qt::UniqueConnection);
    connect(ui->pushButton_left, SIGNAL(pressed()), this, SLOT(on_pushButton_left_pressed()), Qt::UniqueConnection);
    connect(ui->pushButton_right, SIGNAL(pressed()), this, SLOT(on_pushButton_right_pressed()), Qt::UniqueConnection);
    connect(ui->pushButton_front_2, SIGNAL(pressed()), this, SLOT(on_pushButton_front_2_pressed()), Qt::UniqueConnection);
    connect(ui->pushButton_back_2, SIGNAL(pressed()), this, SLOT(on_pushButton_back_2_pressed()), Qt::UniqueConnection);
    connect(ui->pushButton_left_2, SIGNAL(pressed()), this, SLOT(on_pushButton_left_2_pressed()), Qt::UniqueConnection);
    connect(ui->pushButton_right_2, SIGNAL(pressed()), this, SLOT(on_pushButton_right_2_pressed()), Qt::UniqueConnection);

    connect(ui->pushButton_front, SIGNAL(released()), this, SLOT(on_pushButton_released()));
    connect(ui->pushButton_back, SIGNAL(released()), this, SLOT(on_pushButton_released()));
    connect(ui->pushButton_left, SIGNAL(released()), this, SLOT(on_pushButton_released()));
    connect(ui->pushButton_right, SIGNAL(released()), this, SLOT(on_pushButton_released()));
    connect(ui->pushButton_front_2, SIGNAL(released()), this, SLOT(on_pushButton_released()));
    connect(ui->pushButton_back_2, SIGNAL(released()), this, SLOT(on_pushButton_released()));
    connect(ui->pushButton_left_2, SIGNAL(released()), this, SLOT(on_pushButton_released()));
    connect(ui->pushButton_right_2, SIGNAL(released()), this, SLOT(on_pushButton_released()));

    //显示背景图片
    ui->label_displayWindow->setScaledContents(true);
    ui->label_displayWindow->resize(ui->textEdit_display->size());  //根据主窗口的大小设定图像显示窗口
    ui->label_displayWindow->setPixmap(QPixmap("C:/Users/Administrator/Desktop/test_data/raspi.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* 对所有控件进行布局函数 */
void MainWindow::init_layout()
{
    // 定义网格布局管理器
    QGridLayout* layout = new QGridLayout;

    // 定义水平布局管理器
    QHBoxLayout* layout1 = new QHBoxLayout;
    QHBoxLayout* layout2 = new QHBoxLayout;
    QHBoxLayout* layout3 = new QHBoxLayout;
    QHBoxLayout* layout4 = new QHBoxLayout;
    QHBoxLayout* layout5 = new QHBoxLayout;
    QHBoxLayout* layout6 = new QHBoxLayout;
    QHBoxLayout* layout7 = new QHBoxLayout;
    QHBoxLayout* layout8 = new QHBoxLayout;
    QHBoxLayout* layout9 = new QHBoxLayout;

    layout1->addWidget(ui->label_display);
    layout2->addWidget(ui->textEdit_display);
    layout6->addWidget(ui->label_displayWindow);

    layout3->addWidget(ui->label_udpport);
    layout3->addWidget(ui->lineEdit_udpport);
    layout3->addWidget(ui->label_tcpport);
    layout3->addWidget(ui->lineEdit_tcpport);
    layout3->addWidget(ui->pushButton_bind);
    layout3->addWidget(ui->pushButton_stop_ctu);

    layout4->addWidget(ui->label_fbl);
    layout4->addWidget(ui->comboBox_fbl);
    layout4->addWidget(ui->label_IpAddr);
    layout4->addWidget(ui->lineEdit_IpAddr);
    layout4->addWidget(ui->pushButton_link);
    layout4->addWidget(ui->pushButton_unlink);

    layout5->addWidget(ui->label_status_2);
    layout5->addWidget(ui->label_status);
    layout5->addWidget(ui->label_info);

    layout7->addWidget(ui->label_move);
    layout7->addWidget(ui->pushButton_front);
    layout7->addWidget(ui->pushButton_back);
    layout7->addWidget(ui->pushButton_left);
    layout7->addWidget(ui->pushButton_right);
    layout7->addStretch();

    layout8->addWidget(ui->label_move_2);
    layout8->addWidget(ui->pushButton_front_2);
    layout8->addWidget(ui->pushButton_back_2);
    layout8->addWidget(ui->pushButton_left_2);
    layout8->addWidget(ui->pushButton_right_2);
    layout8->addStretch();
    layout8->addWidget(ui->pushButton_ledoffon);

    layout9->addWidget(ui->label_camera);
    layout9->addWidget(ui->label_camera_2);
    layout9->addWidget(ui->label_move_status);
    layout9->addWidget(ui->label_move_status2);
    layout9->addWidget(ui->label_led);
    layout9->addWidget(ui->label_led_2);

    layout->addLayout(layout1, 0, 0);
    layout->addLayout(layout2, 1, 0);
    layout->addLayout(layout6, 1, 0);
    layout->addLayout(layout3, 2, 0);
    layout->addLayout(layout4, 3, 0);
    layout->addLayout(layout5, 7, 0);
    layout->addLayout(layout7, 5, 0);
    layout->addLayout(layout8, 4, 0);
    layout->addLayout(layout9, 6, 0);

    layout->setSpacing(10); //设置间隔为5

    ui->centralWidget->setLayout(layout);
}

/* 绑定 */
void MainWindow::on_pushButton_bind_clicked()
{
    //检测是否输入ip与端口号
    if (ui->lineEdit_udpport->text() == NULL)
    {
        ui->label_status->setText("未设定端口号！");
        return;
    }

    if (ui->lineEdit_IpAddr->text() == NULL)
    {
        ui->label_status->setText("未设定IP地址！");
        return;
    }

    //提取端口号和ip
    int port = ui->lineEdit_udpport->text().toInt();
    QHostAddress address = QHostAddress( ui->lineEdit_IpAddr->text() );

    //进行绑定
    udp_receiver = new QUdpSocket(this);   //创建UDP套接字
    bool bindOK = udp_receiver->bind(address, port);
    if (bindOK)
    {
        ui->label_status->setText("绑定成功！");
        connect( udp_receiver, SIGNAL(readyRead()), this, SLOT(slot_receive()) );

        //将相应的控件锁定
        ui->pushButton_bind->setEnabled(false);
        ui->comboBox_fbl->setEnabled(false);
        ui->lineEdit_udpport->setEnabled(false);
        ui->lineEdit_IpAddr->setEnabled(false);
        status |= 0x01;  //已绑定
    }
    else
    {
        ui->label_status->setText("绑定失败！");
        delete udp_receiver;    //绑定失败，将新建的udp套接字指针释放
    }
}

/* udp接收函数 */
void MainWindow::slot_receive()
{
    static int i = 1;
    char buf[100];
    QByteArray array;
    QHostAddress address;
    quint16 port;

    array.resize(udp_receiver->bytesAvailable());  //根据可读数据来设置空间大小
    udp_receiver->readDatagram(array.data(), array.size(), &address, &port); //读取数据包, 注：udp一次最多发送65507个字节的数据

    //显示数据信息
    sprintf(buf, "收到数据 编号:%d 来自:%s 端口号:%d %dbytes", i, address.toString().toLatin1().data(), port, array.size());
    ui->label_info->setText(buf);
    i++;

    char* bufP = array.data();
    recvImage = new QImage((uchar*)bufP, mWidth, mHeight, QImage::Format_Grayscale8); //将数据还原成灰度图
    ui->label_displayWindow->resize(ui->textEdit_display->size());    //根据主窗口的大小设定图像显示窗口
    ui->label_displayWindow->setPixmap(QPixmap::fromImage(*recvImage));  //显示采集到的图像
    delete recvImage;
}

/* 选择分辨率 */
void MainWindow::on_comboBox_fbl_currentIndexChanged(const QString &arg1)
{
    if (ui->comboBox_fbl->currentText() == "292x219")
    {
        mWidth = 292;
        mHeight = 219;
    }
    if (ui->comboBox_fbl->currentText() == "176x144")
    {
        mWidth = 176;
        mHeight = 144;
    }
    else if(ui->comboBox_fbl->currentText() == "320x240")
    {
        mWidth = 320;
        mHeight = 240;
    }
    else if(ui->comboBox_fbl->currentText() == "640x480")
    {
        mWidth = 640;
        mHeight = 480;
    }
}

/* 连接 */
void MainWindow::on_pushButton_link_clicked()
{ 
    //检测是否输入ip与端口号
    if (ui->lineEdit_tcpport->text() == NULL)
    {
        ui->label_status->setText("未设定端口号！");
        return;
    }

    if (ui->lineEdit_IpAddr->text() == NULL)
    {
        ui->label_status->setText("未设定IP地址！");
        return;
    }

    ui->label_status->setText("正在连接...");
    if (!linking_status)
    {
        int port = ui->lineEdit_tcpport->text().toInt(); //提取端口号

        tcp_server = new QTcpServer(this);     //创建TCP套接字
        tcp_server->listen(QHostAddress::Any, port);  //启动监听服务器
        linking_status = true;
        connect(tcp_server, SIGNAL(newConnection()), this, SLOT(new_client())); //当有客户端链接时候会发送newConnection信号，触发槽函数接受链接
        ui->lineEdit_tcpport->setEnabled(false);
    }
}

/* 与客户端连接 */
void MainWindow::new_client()
{
    tcp_socket = tcp_server->nextPendingConnection();  //获取客户端连接
    ui->label_status->setText("连接成功！");             //表明连接成功
    ui->pushButton_link->setEnabled(false);
    status |= 0x02;
    connect(tcp_socket, SIGNAL(disconnected()), this, SLOT(client_dis()));  //时刻检测是否掉线
}

/* 连接断开 */
void MainWindow::client_dis()
{
    ui->label_status->setText("TCP连接已断开！");
    ui->label_info->setText("");
}

/* 开始/停止 */
void MainWindow::on_pushButton_stop_ctu_clicked()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }

    stop_start_bit = !stop_start_bit;
    if (stop_start_bit)
    {
        ui->label_status->setText("开始传输");
        status |= 0x10;        //开始传输状态
        tcp_socket->write("开始传输");
    }
    else
    {
        ui->label_status->setText("停止传输");
        status &= 0xEF;
        tcp_socket->write("停止传输");
    }

}

/* 断开连接（复位） */
void MainWindow::on_pushButton_unlink_clicked()
{
    if ( (status & 0x03) != 0x03 )
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }

    tcp_socket->write("断开连接");  //发送断开连接指令
    tcp_socket->flush();
    udp_receiver->abort(); //取消已有的连接

    //释放套接字指针
    delete tcp_socket;
    delete tcp_server;
    delete udp_receiver;

    //端口解锁
    ui->pushButton_link->setEnabled(true);
    ui->pushButton_bind->setEnabled(true);
    ui->pushButton_link->setEnabled(true);
    ui->pushButton_bind->setEnabled(true);
    ui->comboBox_fbl->setEnabled(true);
    ui->lineEdit_udpport->setEnabled(true);
    ui->lineEdit_tcpport->setEnabled(true);
    ui->lineEdit_IpAddr->setEnabled(true);

    status = 0x00;   //状态量复位
    stop_start_bit = false;
    linking_status = false;
    ledOnOff_status = false;
}

/* 向左行使 */
void MainWindow::on_pushButton_left_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("向左行驶");
    ui->label_move_status2->setText("向左行驶");
}

/* 向右行使 */
void MainWindow::on_pushButton_right_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("向右行驶");
    ui->label_move_status2->setText("向右行驶");
}

/* 向前行使 */
void MainWindow::on_pushButton_front_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("向前行驶");
    ui->label_move_status2->setText("向前行驶");
}

/* 向后行使 */
void MainWindow::on_pushButton_back_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("向后行驶");
    ui->label_move_status2->setText("向后行驶");
}

/* 舵机向上 */
void MainWindow::on_pushButton_front_2_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("舵机向上");
    ui->label_camera_2->setText("舵机向上");
}

/* 舵机向左 */
void MainWindow::on_pushButton_left_2_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("舵机向左");
    ui->label_camera_2->setText("舵机向左");
}

/* 舵机向右 */
void MainWindow::on_pushButton_right_2_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("舵机向右");
    ui->label_camera_2->setText("舵机向右");
}

/* 舵机向下 */
void MainWindow::on_pushButton_back_2_pressed()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    tcp_socket->write("舵机向下");
    ui->label_camera_2->setText("舵机向下");
}

/* 开关灯 */
void MainWindow::on_pushButton_ledoffon_clicked()
{
    if ((status & 0x03) != 0x03)
    {
        ui->label_status->setText("请先连接和绑定");
        return;
    }
    ledOnOff_status = !ledOnOff_status;
    if (ledOnOff_status)
    {
        ui->label_led_2->setText("ON");
        status |= 0x40;   //开灯状态
        tcp_socket->write("开灯");
    }
    else
    {
        ui->label_led_2->setText("OFF");
        status &= 0xBF;  //关灯状态
        tcp_socket->write("关灯");
    }
}

/* 控制按键释放 */
void MainWindow::on_pushButton_released()
{
    if ((status & 0x03) != 0x03)
    {
        return;
    }
    ui->label_camera_2->setText("停止");
    ui->label_move_status2->setText("停止");
    tcp_socket->write("停止");
}

