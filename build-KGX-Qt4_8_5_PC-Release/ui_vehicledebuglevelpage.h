/********************************************************************************
** Form generated from reading UI file 'vehicledebuglevelpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEDEBUGLEVELPAGE_H
#define UI_VEHICLEDEBUGLEVELPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleDebugLevelPage
{
public:
    QLabel *VehicleSettingPage_background;
    QPushButton *btn_back;

    void setupUi(QWidget *VehicleDebugLevelPage)
    {
        if (VehicleDebugLevelPage->objectName().isEmpty())
            VehicleDebugLevelPage->setObjectName(QString::fromUtf8("VehicleDebugLevelPage"));
        VehicleDebugLevelPage->resize(800, 441);
        VehicleSettingPage_background = new QLabel(VehicleDebugLevelPage);
        VehicleSettingPage_background->setObjectName(QString::fromUtf8("VehicleSettingPage_background"));
        VehicleSettingPage_background->setGeometry(QRect(0, 0, 800, 440));
        VehicleSettingPage_background->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        VehicleSettingPage_background->setAlignment(Qt::AlignCenter);
        btn_back = new QPushButton(VehicleDebugLevelPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(690, 380, 91, 50));
        btn_back->setFocusPolicy(Qt::NoFocus);
        btn_back->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));

        retranslateUi(VehicleDebugLevelPage);

        QMetaObject::connectSlotsByName(VehicleDebugLevelPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleDebugLevelPage)
    {
        VehicleDebugLevelPage->setWindowTitle(QApplication::translate("VehicleDebugLevelPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleSettingPage_background->setText(QString());
        btn_back->setText(QApplication::translate("VehicleDebugLevelPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleDebugLevelPage: public Ui_VehicleDebugLevelPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEDEBUGLEVELPAGE_H
