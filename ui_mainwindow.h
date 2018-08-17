/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_display;
    QTextEdit *textEdit_display;
    QLabel *label_displayWindow;
    QPushButton *pushButton_front;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;
    QPushButton *pushButton_back;
    QLabel *label_move;
    QLabel *label_move_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_udpport;
    QLineEdit *lineEdit_udpport;
    QLabel *label_tcpport;
    QLineEdit *lineEdit_tcpport;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_fbl;
    QComboBox *comboBox_fbl;
    QLabel *label_IpAddr;
    QLineEdit *lineEdit_IpAddr;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_bind;
    QPushButton *pushButton_stop_ctu;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_link;
    QPushButton *pushButton_unlink;
    QPushButton *pushButton_ledoffon;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_camera;
    QLabel *label_camera_2;
    QLabel *label_move_status;
    QLabel *label_move_status2;
    QLabel *label_led;
    QLabel *label_led_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_status_2;
    QLabel *label_status;
    QLabel *label_info;
    QPushButton *pushButton_back_2;
    QPushButton *pushButton_front_2;
    QPushButton *pushButton_left_2;
    QPushButton *pushButton_right_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(716, 588);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_display = new QLabel(centralWidget);
        label_display->setObjectName(QStringLiteral("label_display"));
        label_display->setGeometry(QRect(460, 0, 54, 12));
        textEdit_display = new QTextEdit(centralWidget);
        textEdit_display->setObjectName(QStringLiteral("textEdit_display"));
        textEdit_display->setGeometry(QRect(80, 10, 421, 251));
        label_displayWindow = new QLabel(centralWidget);
        label_displayWindow->setObjectName(QStringLiteral("label_displayWindow"));
        label_displayWindow->setGeometry(QRect(310, 40, 361, 211));
        pushButton_front = new QPushButton(centralWidget);
        pushButton_front->setObjectName(QStringLiteral("pushButton_front"));
        pushButton_front->setGeometry(QRect(280, 350, 45, 35));
        pushButton_front->setAutoRepeat(true);
        pushButton_front->setAutoRepeatDelay(500);
        pushButton_front->setAutoRepeatInterval(500);
        pushButton_left = new QPushButton(centralWidget);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setGeometry(QRect(220, 360, 45, 35));
        pushButton_left->setAutoRepeat(true);
        pushButton_left->setAutoRepeatDelay(500);
        pushButton_left->setAutoRepeatInterval(500);
        pushButton_right = new QPushButton(centralWidget);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setGeometry(QRect(330, 350, 45, 35));
        pushButton_right->setAutoRepeat(true);
        pushButton_right->setAutoRepeatDelay(500);
        pushButton_right->setAutoRepeatInterval(500);
        pushButton_back = new QPushButton(centralWidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(280, 410, 45, 35));
        pushButton_back->setAutoRepeat(true);
        pushButton_back->setAutoRepeatDelay(500);
        pushButton_back->setAutoRepeatInterval(500);
        label_move = new QLabel(centralWidget);
        label_move->setObjectName(QStringLiteral("label_move"));
        label_move->setGeometry(QRect(80, 370, 54, 12));
        label_move_2 = new QLabel(centralWidget);
        label_move_2->setObjectName(QStringLiteral("label_move_2"));
        label_move_2->setGeometry(QRect(380, 440, 54, 12));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 260, 564, 89));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_udpport = new QLabel(layoutWidget);
        label_udpport->setObjectName(QStringLiteral("label_udpport"));

        horizontalLayout_3->addWidget(label_udpport);

        lineEdit_udpport = new QLineEdit(layoutWidget);
        lineEdit_udpport->setObjectName(QStringLiteral("lineEdit_udpport"));

        horizontalLayout_3->addWidget(lineEdit_udpport);

        label_tcpport = new QLabel(layoutWidget);
        label_tcpport->setObjectName(QStringLiteral("label_tcpport"));

        horizontalLayout_3->addWidget(label_tcpport);

        lineEdit_tcpport = new QLineEdit(layoutWidget);
        lineEdit_tcpport->setObjectName(QStringLiteral("lineEdit_tcpport"));

        horizontalLayout_3->addWidget(lineEdit_tcpport);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_fbl = new QLabel(layoutWidget);
        label_fbl->setObjectName(QStringLiteral("label_fbl"));

        horizontalLayout_4->addWidget(label_fbl);

        comboBox_fbl = new QComboBox(layoutWidget);
        comboBox_fbl->setObjectName(QStringLiteral("comboBox_fbl"));

        horizontalLayout_4->addWidget(comboBox_fbl);

        label_IpAddr = new QLabel(layoutWidget);
        label_IpAddr->setObjectName(QStringLiteral("label_IpAddr"));

        horizontalLayout_4->addWidget(label_IpAddr);

        lineEdit_IpAddr = new QLineEdit(layoutWidget);
        lineEdit_IpAddr->setObjectName(QStringLiteral("lineEdit_IpAddr"));

        horizontalLayout_4->addWidget(lineEdit_IpAddr);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_bind = new QPushButton(layoutWidget);
        pushButton_bind->setObjectName(QStringLiteral("pushButton_bind"));

        horizontalLayout_5->addWidget(pushButton_bind);

        pushButton_stop_ctu = new QPushButton(layoutWidget);
        pushButton_stop_ctu->setObjectName(QStringLiteral("pushButton_stop_ctu"));

        horizontalLayout_5->addWidget(pushButton_stop_ctu);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_link = new QPushButton(layoutWidget);
        pushButton_link->setObjectName(QStringLiteral("pushButton_link"));

        horizontalLayout_6->addWidget(pushButton_link);

        pushButton_unlink = new QPushButton(layoutWidget);
        pushButton_unlink->setObjectName(QStringLiteral("pushButton_unlink"));

        horizontalLayout_6->addWidget(pushButton_unlink);


        verticalLayout_2->addLayout(horizontalLayout_6);

        pushButton_ledoffon = new QPushButton(layoutWidget);
        pushButton_ledoffon->setObjectName(QStringLiteral("pushButton_ledoffon"));
        pushButton_ledoffon->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_ledoffon);


        horizontalLayout_7->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 500, 268, 38));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_camera = new QLabel(layoutWidget1);
        label_camera->setObjectName(QStringLiteral("label_camera"));

        horizontalLayout_2->addWidget(label_camera);

        label_camera_2 = new QLabel(layoutWidget1);
        label_camera_2->setObjectName(QStringLiteral("label_camera_2"));

        horizontalLayout_2->addWidget(label_camera_2);

        label_move_status = new QLabel(layoutWidget1);
        label_move_status->setObjectName(QStringLiteral("label_move_status"));

        horizontalLayout_2->addWidget(label_move_status);

        label_move_status2 = new QLabel(layoutWidget1);
        label_move_status2->setObjectName(QStringLiteral("label_move_status2"));

        horizontalLayout_2->addWidget(label_move_status2);

        label_led = new QLabel(layoutWidget1);
        label_led->setObjectName(QStringLiteral("label_led"));

        horizontalLayout_2->addWidget(label_led);

        label_led_2 = new QLabel(layoutWidget1);
        label_led_2->setObjectName(QStringLiteral("label_led_2"));

        horizontalLayout_2->addWidget(label_led_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_status_2 = new QLabel(layoutWidget1);
        label_status_2->setObjectName(QStringLiteral("label_status_2"));

        horizontalLayout->addWidget(label_status_2);

        label_status = new QLabel(layoutWidget1);
        label_status->setObjectName(QStringLiteral("label_status"));

        horizontalLayout->addWidget(label_status);

        label_info = new QLabel(layoutWidget1);
        label_info->setObjectName(QStringLiteral("label_info"));

        horizontalLayout->addWidget(label_info);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_back_2 = new QPushButton(centralWidget);
        pushButton_back_2->setObjectName(QStringLiteral("pushButton_back_2"));
        pushButton_back_2->setGeometry(QRect(500, 110, 75, 23));
        pushButton_back_2->setAutoRepeat(true);
        pushButton_back_2->setAutoRepeatDelay(500);
        pushButton_back_2->setAutoRepeatInterval(500);
        pushButton_front_2 = new QPushButton(centralWidget);
        pushButton_front_2->setObjectName(QStringLiteral("pushButton_front_2"));
        pushButton_front_2->setGeometry(QRect(490, 60, 75, 23));
        pushButton_front_2->setAutoRepeat(true);
        pushButton_front_2->setAutoRepeatDelay(500);
        pushButton_front_2->setAutoRepeatInterval(500);
        pushButton_left_2 = new QPushButton(centralWidget);
        pushButton_left_2->setObjectName(QStringLiteral("pushButton_left_2"));
        pushButton_left_2->setGeometry(QRect(490, 140, 75, 23));
        pushButton_left_2->setAutoRepeat(true);
        pushButton_left_2->setAutoRepeatDelay(500);
        pushButton_left_2->setAutoRepeatInterval(500);
        pushButton_right_2 = new QPushButton(centralWidget);
        pushButton_right_2->setObjectName(QStringLiteral("pushButton_right_2"));
        pushButton_right_2->setGeometry(QRect(510, 190, 75, 23));
        pushButton_right_2->setAutoRepeat(true);
        pushButton_right_2->setAutoRepeatDelay(500);
        pushButton_right_2->setAutoRepeatInterval(500);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 716, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_udpport->setBuddy(lineEdit_udpport);
        label_tcpport->setBuddy(lineEdit_tcpport);
        label_IpAddr->setBuddy(lineEdit_IpAddr);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_display->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\347\252\227\345\217\243", 0));
        label_displayWindow->setText(QString());
        pushButton_front->setText(QApplication::translate("MainWindow", "\345\220\221\345\211\215", 0));
        pushButton_left->setText(QApplication::translate("MainWindow", "\345\220\221\345\267\246", 0));
        pushButton_right->setText(QApplication::translate("MainWindow", "\345\220\221\345\217\263", 0));
        pushButton_back->setText(QApplication::translate("MainWindow", "\345\220\221\345\220\216", 0));
        label_move->setText(QApplication::translate("MainWindow", "\350\241\214\344\275\277\346\226\271\345\220\221", 0));
        label_move_2->setText(QApplication::translate("MainWindow", "\350\210\265\346\234\272\346\226\271\345\220\221", 0));
        label_udpport->setText(QApplication::translate("MainWindow", "udp\347\253\257\345\217\243\357\274\232", 0));
        lineEdit_udpport->setText(QApplication::translate("MainWindow", "8887", 0));
        label_tcpport->setText(QApplication::translate("MainWindow", "tcp\347\253\257\345\217\243\357\274\232", 0));
        lineEdit_tcpport->setText(QApplication::translate("MainWindow", "8883", 0));
        label_fbl->setText(QApplication::translate("MainWindow", "\345\210\206\350\276\250\347\216\207\357\274\232", 0));
        comboBox_fbl->clear();
        comboBox_fbl->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "292x219", 0)
         << QApplication::translate("MainWindow", "176x144", 0)
         << QApplication::translate("MainWindow", "320x240", 0)
         << QApplication::translate("MainWindow", "640x480", 0)
        );
        label_IpAddr->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", 0));
        lineEdit_IpAddr->setText(QApplication::translate("MainWindow", "192.168.1.4", 0));
        pushButton_bind->setText(QApplication::translate("MainWindow", "\347\273\221\345\256\232", 0));
        pushButton_stop_ctu->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234/\347\273\247\347\273\255", 0));
        pushButton_link->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0));
        pushButton_unlink->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", 0));
        pushButton_ledoffon->setText(QApplication::translate("MainWindow", "\345\274\200\347\201\257/\345\205\263\347\201\257", 0));
        label_camera->setText(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\347\212\266\346\200\201\357\274\232", 0));
        label_camera_2->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0));
        label_move_status->setText(QApplication::translate("MainWindow", "\350\241\214\351\251\266\347\212\266\346\200\201\357\274\232", 0));
        label_move_status2->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0));
        label_led->setText(QApplication::translate("MainWindow", "\347\205\247\346\230\216\357\274\232", 0));
        label_led_2->setText(QApplication::translate("MainWindow", "OFF", 0));
        label_status_2->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214\347\212\266\346\200\201\357\274\232", 0));
        label_status->setText(QApplication::translate("MainWindow", "\346\234\252\350\277\236\346\216\245", 0));
        label_info->setText(QString());
        pushButton_back_2->setText(QApplication::translate("MainWindow", "\345\220\221\344\270\213", 0));
        pushButton_front_2->setText(QApplication::translate("MainWindow", "\345\220\221\344\270\212", 0));
        pushButton_left_2->setText(QApplication::translate("MainWindow", "\345\220\221\345\267\246", 0));
        pushButton_right_2->setText(QApplication::translate("MainWindow", "\345\220\221\345\217\263", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
