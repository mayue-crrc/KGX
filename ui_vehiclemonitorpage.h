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
    QPushButton *btn_mc1cab;
    QPushButton *btnpasserager;
    QLabel *label;
    QLabel *lbl_curStation;
    QLabel *lbl_nextStation;
    QLabel *lbl_desStation;
    QPushButton *btn_poll;
    QLabel *lblbackground_top;
    QLabel *lblbackground_bottom;
    QLabel *background_4;
    QPushButton *btn_mc2cab;
    QLabel *lblbackground_spare;

    void setupUi(QWidget *VehicleMonitorPage)
    {
        if (VehicleMonitorPage->objectName().isEmpty())
            VehicleMonitorPage->setObjectName(QString::fromUtf8("VehicleMonitorPage"));
        VehicleMonitorPage->resize(1024, 568);
        VehicleMonitorPage->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        background = new QLabel(VehicleMonitorPage);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 161, 501));
        background->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        btn_mc1cab = new QPushButton(VehicleMonitorPage);
        btn_mc1cab->setObjectName(QString::fromUtf8("btn_mc1cab"));
        btn_mc1cab->setGeometry(QRect(20, 190, 121, 35));
        btn_mc1cab->setFocusPolicy(Qt::NoFocus);
        btn_mc1cab->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        btnpasserager = new QPushButton(VehicleMonitorPage);
        btnpasserager->setObjectName(QString::fromUtf8("btnpasserager"));
        btnpasserager->setGeometry(QRect(20, 300, 121, 35));
        btnpasserager->setFocusPolicy(Qt::NoFocus);
        btnpasserager->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        label = new QLabel(VehicleMonitorPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 500, 1022, 68));
        label->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:1px solid;\n"
"border-color:rgb(0, 0,0);"));
        lbl_curStation = new QLabel(VehicleMonitorPage);
        lbl_curStation->setObjectName(QString::fromUtf8("lbl_curStation"));
        lbl_curStation->setGeometry(QRect(40, 520, 181, 31));
        lbl_curStation->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        lbl_nextStation = new QLabel(VehicleMonitorPage);
        lbl_nextStation->setObjectName(QString::fromUtf8("lbl_nextStation"));
        lbl_nextStation->setGeometry(QRect(430, 520, 181, 31));
        lbl_nextStation->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        lbl_desStation = new QLabel(VehicleMonitorPage);
        lbl_desStation->setObjectName(QString::fromUtf8("lbl_desStation"));
        lbl_desStation->setGeometry(QRect(790, 520, 181, 31));
        lbl_desStation->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(51, 153, 255);"));
        btn_poll = new QPushButton(VehicleMonitorPage);
        btn_poll->setObjectName(QString::fromUtf8("btn_poll"));
        btn_poll->setGeometry(QRect(20, 80, 121, 35));
        btn_poll->setFocusPolicy(Qt::NoFocus);
        btn_poll->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        lblbackground_top = new QLabel(VehicleMonitorPage);
        lblbackground_top->setObjectName(QString::fromUtf8("lblbackground_top"));
        lblbackground_top->setGeometry(QRect(160, 0, 821, 57));
        lblbackground_top->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        lblbackground_bottom = new QLabel(VehicleMonitorPage);
        lblbackground_bottom->setObjectName(QString::fromUtf8("lblbackground_bottom"));
        lblbackground_bottom->setGeometry(QRect(160, 459, 821, 41));
        lblbackground_bottom->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        background_4 = new QLabel(VehicleMonitorPage);
        background_4->setObjectName(QString::fromUtf8("background_4"));
        background_4->setGeometry(QRect(980, 0, 51, 500));
        background_4->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210,210);"));
        btn_mc2cab = new QPushButton(VehicleMonitorPage);
        btn_mc2cab->setObjectName(QString::fromUtf8("btn_mc2cab"));
        btn_mc2cab->setGeometry(QRect(20, 400, 121, 35));
        btn_mc2cab->setFocusPolicy(Qt::NoFocus);
        btn_mc2cab->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);"));
        lblbackground_spare = new QLabel(VehicleMonitorPage);
        lblbackground_spare->setObjectName(QString::fromUtf8("lblbackground_spare"));
        lblbackground_spare->setGeometry(QRect(570, 260, 410, 200));
        lblbackground_spare->setStyleSheet(QString::fromUtf8("background-color: rgb(210,210,210);"));

        retranslateUi(VehicleMonitorPage);

        QMetaObject::connectSlotsByName(VehicleMonitorPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleMonitorPage)
    {
        VehicleMonitorPage->setWindowTitle(QApplication::translate("VehicleMonitorPage", "Form", 0, QApplication::UnicodeUTF8));
        background->setText(QString());
        btn_mc1cab->setText(QApplication::translate("VehicleMonitorPage", "MC1\345\217\270\346\234\272\345\256\244", 0, QApplication::UnicodeUTF8));
        btnpasserager->setText(QApplication::translate("VehicleMonitorPage", "\345\256\242\345\256\244", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lbl_curStation->setText(QApplication::translate("VehicleMonitorPage", "\345\275\223\345\211\215\347\253\231\357\274\232XXX", 0, QApplication::UnicodeUTF8));
        lbl_nextStation->setText(QApplication::translate("VehicleMonitorPage", "\344\270\213\344\270\200\347\253\231\357\274\232XXX", 0, QApplication::UnicodeUTF8));
        lbl_desStation->setText(QApplication::translate("VehicleMonitorPage", "\347\273\210\347\202\271\347\253\231\357\274\232XXX", 0, QApplication::UnicodeUTF8));
        btn_poll->setText(QApplication::translate("VehicleMonitorPage", "\350\275\256\350\257\242", 0, QApplication::UnicodeUTF8));
        lblbackground_top->setText(QString());
        lblbackground_bottom->setText(QString());
        background_4->setText(QString());
        btn_mc2cab->setText(QApplication::translate("VehicleMonitorPage", "MC2\345\217\270\346\234\272\345\256\244", 0, QApplication::UnicodeUTF8));
        lblbackground_spare->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleMonitorPage: public Ui_VehicleMonitorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEMONITORPAGE_H
