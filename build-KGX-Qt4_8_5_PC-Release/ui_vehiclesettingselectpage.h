/********************************************************************************
** Form generated from reading UI file 'vehiclesettingselectpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLESETTINGSELECTPAGE_H
#define UI_VEHICLESETTINGSELECTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleSettingSelectPage
{
public:
    QLabel *VehicleSettingPage_background;
    QPushButton *btn_set5_password;
    QPushButton *btn_set6_version;
    QPushButton *btn_set2_accumulate;
    QPushButton *btn_set3_init;
    QPushButton *btn_set1_para;
    QPushButton *btn_set4_time;
    QPushButton *btn_set7_debug;

    void setupUi(QWidget *VehicleSettingSelectPage)
    {
        if (VehicleSettingSelectPage->objectName().isEmpty())
            VehicleSettingSelectPage->setObjectName(QString::fromUtf8("VehicleSettingSelectPage"));
        VehicleSettingSelectPage->resize(800, 441);
        VehicleSettingPage_background = new QLabel(VehicleSettingSelectPage);
        VehicleSettingPage_background->setObjectName(QString::fromUtf8("VehicleSettingPage_background"));
        VehicleSettingPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleSettingPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        VehicleSettingPage_background->setAlignment(Qt::AlignCenter);
        btn_set5_password = new QPushButton(VehicleSettingSelectPage);
        btn_set5_password->setObjectName(QString::fromUtf8("btn_set5_password"));
        btn_set5_password->setGeometry(QRect(310, 160, 131, 50));
        btn_set5_password->setFocusPolicy(Qt::NoFocus);
        btn_set5_password->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set6_version = new QPushButton(VehicleSettingSelectPage);
        btn_set6_version->setObjectName(QString::fromUtf8("btn_set6_version"));
        btn_set6_version->setGeometry(QRect(530, 160, 131, 51));
        btn_set6_version->setFocusPolicy(Qt::NoFocus);
        btn_set6_version->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set2_accumulate = new QPushButton(VehicleSettingSelectPage);
        btn_set2_accumulate->setObjectName(QString::fromUtf8("btn_set2_accumulate"));
        btn_set2_accumulate->setGeometry(QRect(310, 80, 131, 50));
        btn_set2_accumulate->setFocusPolicy(Qt::NoFocus);
        btn_set2_accumulate->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set3_init = new QPushButton(VehicleSettingSelectPage);
        btn_set3_init->setObjectName(QString::fromUtf8("btn_set3_init"));
        btn_set3_init->setGeometry(QRect(530, 80, 131, 50));
        btn_set3_init->setFocusPolicy(Qt::NoFocus);
        btn_set3_init->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set1_para = new QPushButton(VehicleSettingSelectPage);
        btn_set1_para->setObjectName(QString::fromUtf8("btn_set1_para"));
        btn_set1_para->setGeometry(QRect(90, 80, 131, 51));
        btn_set1_para->setFocusPolicy(Qt::NoFocus);
        btn_set1_para->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set4_time = new QPushButton(VehicleSettingSelectPage);
        btn_set4_time->setObjectName(QString::fromUtf8("btn_set4_time"));
        btn_set4_time->setGeometry(QRect(90, 160, 131, 50));
        btn_set4_time->setFocusPolicy(Qt::NoFocus);
        btn_set4_time->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set7_debug = new QPushButton(VehicleSettingSelectPage);
        btn_set7_debug->setObjectName(QString::fromUtf8("btn_set7_debug"));
        btn_set7_debug->setGeometry(QRect(90, 240, 131, 50));
        btn_set7_debug->setFocusPolicy(Qt::NoFocus);
        btn_set7_debug->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));

        retranslateUi(VehicleSettingSelectPage);

        QMetaObject::connectSlotsByName(VehicleSettingSelectPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleSettingSelectPage)
    {
        VehicleSettingSelectPage->setWindowTitle(QApplication::translate("VehicleSettingSelectPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleSettingPage_background->setText(QString());
        btn_set5_password->setText(QApplication::translate("VehicleSettingSelectPage", "\345\257\206\347\240\201\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        btn_set6_version->setText(QApplication::translate("VehicleSettingSelectPage", "\347\211\210\346\234\254\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        btn_set2_accumulate->setText(QApplication::translate("VehicleSettingSelectPage", "\347\264\257\350\256\241\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btn_set3_init->setText(QApplication::translate("VehicleSettingSelectPage", "\345\210\235\345\247\213\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btn_set1_para->setText(QApplication::translate("VehicleSettingSelectPage", "\345\217\202\346\225\260\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btn_set4_time->setText(QApplication::translate("VehicleSettingSelectPage", "\346\227\266\351\227\264\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btn_set7_debug->setText(QApplication::translate("VehicleSettingSelectPage", "\350\260\203\350\257\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleSettingSelectPage: public Ui_VehicleSettingSelectPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESETTINGSELECTPAGE_H
