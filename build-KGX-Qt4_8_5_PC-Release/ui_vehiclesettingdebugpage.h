/********************************************************************************
** Form generated from reading UI file 'vehiclesettingdebugpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLESETTINGDEBUGPAGE_H
#define UI_VEHICLESETTINGDEBUGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleSettingDebugPage
{
public:
    QPushButton *btn_set1_IO;
    QPushButton *btn_set3_refreshTime;
    QLabel *VehicleSettingPage_background;
    QPushButton *btn_set2_RIOM;
    QPushButton *btn_set5_level;
    QPushButton *btn_back;
    QPushButton *btn_set4_portData;

    void setupUi(QWidget *VehicleSettingDebugPage)
    {
        if (VehicleSettingDebugPage->objectName().isEmpty())
            VehicleSettingDebugPage->setObjectName(QString::fromUtf8("VehicleSettingDebugPage"));
        VehicleSettingDebugPage->resize(800, 441);
        btn_set1_IO = new QPushButton(VehicleSettingDebugPage);
        btn_set1_IO->setObjectName(QString::fromUtf8("btn_set1_IO"));
        btn_set1_IO->setGeometry(QRect(90, 80, 131, 51));
        btn_set1_IO->setFocusPolicy(Qt::NoFocus);
        btn_set1_IO->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set3_refreshTime = new QPushButton(VehicleSettingDebugPage);
        btn_set3_refreshTime->setObjectName(QString::fromUtf8("btn_set3_refreshTime"));
        btn_set3_refreshTime->setGeometry(QRect(530, 80, 131, 50));
        btn_set3_refreshTime->setFocusPolicy(Qt::NoFocus);
        btn_set3_refreshTime->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        VehicleSettingPage_background = new QLabel(VehicleSettingDebugPage);
        VehicleSettingPage_background->setObjectName(QString::fromUtf8("VehicleSettingPage_background"));
        VehicleSettingPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleSettingPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(210, 210, 210);"));
        VehicleSettingPage_background->setAlignment(Qt::AlignCenter);
        btn_set2_RIOM = new QPushButton(VehicleSettingDebugPage);
        btn_set2_RIOM->setObjectName(QString::fromUtf8("btn_set2_RIOM"));
        btn_set2_RIOM->setGeometry(QRect(310, 80, 131, 50));
        btn_set2_RIOM->setFocusPolicy(Qt::NoFocus);
        btn_set2_RIOM->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set5_level = new QPushButton(VehicleSettingDebugPage);
        btn_set5_level->setObjectName(QString::fromUtf8("btn_set5_level"));
        btn_set5_level->setGeometry(QRect(310, 160, 131, 50));
        btn_set5_level->setFocusPolicy(Qt::NoFocus);
        btn_set5_level->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_back = new QPushButton(VehicleSettingDebugPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(630, 340, 131, 50));
        btn_back->setFocusPolicy(Qt::NoFocus);
        btn_back->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_set4_portData = new QPushButton(VehicleSettingDebugPage);
        btn_set4_portData->setObjectName(QString::fromUtf8("btn_set4_portData"));
        btn_set4_portData->setGeometry(QRect(90, 160, 131, 50));
        btn_set4_portData->setFocusPolicy(Qt::NoFocus);
        btn_set4_portData->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        VehicleSettingPage_background->raise();
        btn_set1_IO->raise();
        btn_set3_refreshTime->raise();
        btn_set2_RIOM->raise();
        btn_set5_level->raise();
        btn_back->raise();
        btn_set4_portData->raise();

        retranslateUi(VehicleSettingDebugPage);

        QMetaObject::connectSlotsByName(VehicleSettingDebugPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleSettingDebugPage)
    {
        VehicleSettingDebugPage->setWindowTitle(QApplication::translate("VehicleSettingDebugPage", "Form", 0, QApplication::UnicodeUTF8));
        btn_set1_IO->setText(QApplication::translate("VehicleSettingDebugPage", "IO\350\257\246\347\273\206", 0, QApplication::UnicodeUTF8));
        btn_set3_refreshTime->setText(QApplication::translate("VehicleSettingDebugPage", "\345\210\267\346\226\260\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        VehicleSettingPage_background->setText(QString());
        btn_set2_RIOM->setText(QApplication::translate("VehicleSettingDebugPage", "RIOM\350\257\246\347\273\206", 0, QApplication::UnicodeUTF8));
        btn_set5_level->setText(QApplication::translate("VehicleSettingDebugPage", "\347\272\247\344\275\215\350\260\203\350\257\225", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("VehicleSettingDebugPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btn_set4_portData->setText(QApplication::translate("VehicleSettingDebugPage", "\347\253\257\345\217\243\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleSettingDebugPage: public Ui_VehicleSettingDebugPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLESETTINGDEBUGPAGE_H
