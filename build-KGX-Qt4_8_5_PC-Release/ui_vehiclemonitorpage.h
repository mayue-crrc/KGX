/********************************************************************************
** Form generated from reading UI file 'vehiclemonitorpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEMONITORPAGE_H
#define UI_VEHICLEMONITORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleMonitorPage
{
public:
    QLabel *background;
    QPushButton *btn_mc1;
    QPushButton *btn_t1;
    QPushButton *btn_t2;
    QPushButton *btn_mc2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lbl_curStation;
    QLabel *lbl_nextStation;
    QLabel *lbl_desStation;
    QPushButton *btn_poll;
    QLabel *background_2;
    QLabel *background_3;
    QLabel *background_4;
    QLabel *lbl_horion;
    QLabel *lbl_verticle;

    void setupUi(QWidget *VehicleMonitorPage)
    {
        if (VehicleMonitorPage->objectName().isEmpty())
            VehicleMonitorPage->setObjectName(QString::fromUtf8("VehicleMonitorPage"));
        VehicleMonitorPage->resize(800, 441);
        VehicleMonitorPage->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        background = new QLabel(VehicleMonitorPage);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 161, 441));
        background->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        btn_mc1 = new QPushButton(VehicleMonitorPage);
        btn_mc1->setObjectName(QString::fromUtf8("btn_mc1"));
        btn_mc1->setGeometry(QRect(30, 100, 91, 35));
        btn_mc1->setFocusPolicy(Qt::NoFocus);
        btn_mc1->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        btn_t1 = new QPushButton(VehicleMonitorPage);
        btn_t1->setObjectName(QString::fromUtf8("btn_t1"));
        btn_t1->setGeometry(QRect(30, 170, 91, 35));
        btn_t1->setFocusPolicy(Qt::NoFocus);
        btn_t1->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        btn_t2 = new QPushButton(VehicleMonitorPage);
        btn_t2->setObjectName(QString::fromUtf8("btn_t2"));
        btn_t2->setGeometry(QRect(30, 240, 91, 35));
        btn_t2->setFocusPolicy(Qt::NoFocus);
        btn_t2->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        btn_mc2 = new QPushButton(VehicleMonitorPage);
        btn_mc2->setObjectName(QString::fromUtf8("btn_mc2"));
        btn_mc2->setGeometry(QRect(30, 310, 91, 35));
        btn_mc2->setFocusPolicy(Qt::NoFocus);
        btn_mc2->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        label = new QLabel(VehicleMonitorPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 380, 800, 60));
        label->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:1px solid;\n"
"border-color:rgb(0, 0,0);"));
        label_2 = new QLabel(VehicleMonitorPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 395, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        label_3 = new QLabel(VehicleMonitorPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 395, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        label_4 = new QLabel(VehicleMonitorPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(600, 395, 71, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        lbl_curStation = new QLabel(VehicleMonitorPage);
        lbl_curStation->setObjectName(QString::fromUtf8("lbl_curStation"));
        lbl_curStation->setGeometry(QRect(100, 395, 71, 31));
        lbl_curStation->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        lbl_nextStation = new QLabel(VehicleMonitorPage);
        lbl_nextStation->setObjectName(QString::fromUtf8("lbl_nextStation"));
        lbl_nextStation->setGeometry(QRect(390, 395, 71, 31));
        lbl_nextStation->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        lbl_desStation = new QLabel(VehicleMonitorPage);
        lbl_desStation->setObjectName(QString::fromUtf8("lbl_desStation"));
        lbl_desStation->setGeometry(QRect(670, 395, 71, 31));
        lbl_desStation->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        btn_poll = new QPushButton(VehicleMonitorPage);
        btn_poll->setObjectName(QString::fromUtf8("btn_poll"));
        btn_poll->setGeometry(QRect(30, 30, 91, 35));
        btn_poll->setFocusPolicy(Qt::NoFocus);
        btn_poll->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        background_2 = new QLabel(VehicleMonitorPage);
        background_2->setObjectName(QString::fromUtf8("background_2"));
        background_2->setGeometry(QRect(160, 0, 641, 10));
        background_2->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        background_3 = new QLabel(VehicleMonitorPage);
        background_3->setObjectName(QString::fromUtf8("background_3"));
        background_3->setGeometry(QRect(160, 371, 641, 9));
        background_3->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        background_4 = new QLabel(VehicleMonitorPage);
        background_4->setObjectName(QString::fromUtf8("background_4"));
        background_4->setGeometry(QRect(760, 10, 41, 361));
        background_4->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        lbl_horion = new QLabel(VehicleMonitorPage);
        lbl_horion->setObjectName(QString::fromUtf8("lbl_horion"));
        lbl_horion->setGeometry(QRect(440, 10, 41, 361));
        lbl_horion->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        lbl_verticle = new QLabel(VehicleMonitorPage);
        lbl_verticle->setObjectName(QString::fromUtf8("lbl_verticle"));
        lbl_verticle->setGeometry(QRect(160, 180, 641, 21));
        lbl_verticle->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));

        retranslateUi(VehicleMonitorPage);

        QMetaObject::connectSlotsByName(VehicleMonitorPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleMonitorPage)
    {
        VehicleMonitorPage->setWindowTitle(QApplication::translate("VehicleMonitorPage", "Form", 0, QApplication::UnicodeUTF8));
        background->setText(QString());
        btn_mc1->setText(QApplication::translate("VehicleMonitorPage", "MC1", 0, QApplication::UnicodeUTF8));
        btn_t1->setText(QApplication::translate("VehicleMonitorPage", "T_1", 0, QApplication::UnicodeUTF8));
        btn_t2->setText(QApplication::translate("VehicleMonitorPage", "T_2", 0, QApplication::UnicodeUTF8));
        btn_mc2->setText(QApplication::translate("VehicleMonitorPage", "MC2", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("VehicleMonitorPage", "\345\275\223\345\211\215\347\253\231\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("VehicleMonitorPage", "\344\270\213\344\270\200\347\253\231\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("VehicleMonitorPage", "\347\273\210\347\202\271\347\253\231\357\274\232", 0, QApplication::UnicodeUTF8));
        lbl_curStation->setText(QApplication::translate("VehicleMonitorPage", "XXX\347\253\231", 0, QApplication::UnicodeUTF8));
        lbl_nextStation->setText(QApplication::translate("VehicleMonitorPage", "XXX\347\253\231", 0, QApplication::UnicodeUTF8));
        lbl_desStation->setText(QApplication::translate("VehicleMonitorPage", "XXX\347\253\231", 0, QApplication::UnicodeUTF8));
        btn_poll->setText(QApplication::translate("VehicleMonitorPage", "\350\275\256\350\257\242", 0, QApplication::UnicodeUTF8));
        background_2->setText(QString());
        background_3->setText(QString());
        background_4->setText(QString());
        lbl_horion->setText(QString());
        lbl_verticle->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleMonitorPage: public Ui_VehicleMonitorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMONITORPAGE_H
