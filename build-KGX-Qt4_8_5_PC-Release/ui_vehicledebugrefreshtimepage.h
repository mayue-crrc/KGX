/********************************************************************************
** Form generated from reading UI file 'vehicledebugrefreshtimepage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEDEBUGREFRESHTIMEPAGE_H
#define UI_VEHICLEDEBUGREFRESHTIMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleDebugRefreshTimePage
{
public:
    QPushButton *btn_back;
    QLabel *lbl_Page;
    QPushButton *btn_nextpage;
    QPushButton *btn_prepage;

    void setupUi(QWidget *VehicleDebugRefreshTimePage)
    {
        if (VehicleDebugRefreshTimePage->objectName().isEmpty())
            VehicleDebugRefreshTimePage->setObjectName(QString::fromUtf8("VehicleDebugRefreshTimePage"));
        VehicleDebugRefreshTimePage->resize(800, 441);
        VehicleDebugRefreshTimePage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        btn_back = new QPushButton(VehicleDebugRefreshTimePage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(690, 380, 91, 50));
        btn_back->setFocusPolicy(Qt::NoFocus);
        btn_back->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        lbl_Page = new QLabel(VehicleDebugRefreshTimePage);
        lbl_Page->setObjectName(QString::fromUtf8("lbl_Page"));
        lbl_Page->setGeometry(QRect(520, 380, 61, 51));
        lbl_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"\n"
""));
        lbl_Page->setAlignment(Qt::AlignCenter);
        btn_nextpage = new QPushButton(VehicleDebugRefreshTimePage);
        btn_nextpage->setObjectName(QString::fromUtf8("btn_nextpage"));
        btn_nextpage->setGeometry(QRect(590, 380, 50, 50));
        btn_nextpage->setFocusPolicy(Qt::NoFocus);
        btn_nextpage->setStyleSheet(QString::fromUtf8("font: 75 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"/*border-color: rgb(216, 216, 216);*/\n"
""));
        btn_prepage = new QPushButton(VehicleDebugRefreshTimePage);
        btn_prepage->setObjectName(QString::fromUtf8("btn_prepage"));
        btn_prepage->setGeometry(QRect(460, 380, 50, 50));
        btn_prepage->setFocusPolicy(Qt::NoFocus);
        btn_prepage->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);\n"
"/*border:solid 1px;*/"));

        retranslateUi(VehicleDebugRefreshTimePage);

        QMetaObject::connectSlotsByName(VehicleDebugRefreshTimePage);
    } // setupUi

    void retranslateUi(QWidget *VehicleDebugRefreshTimePage)
    {
        VehicleDebugRefreshTimePage->setWindowTitle(QApplication::translate("VehicleDebugRefreshTimePage", "Form", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("VehicleDebugRefreshTimePage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lbl_Page->setText(QString());
        btn_nextpage->setText(QApplication::translate("VehicleDebugRefreshTimePage", "\342\226\274", 0, QApplication::UnicodeUTF8));
        btn_prepage->setText(QApplication::translate("VehicleDebugRefreshTimePage", "\342\226\262", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleDebugRefreshTimePage: public Ui_VehicleDebugRefreshTimePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEDEBUGREFRESHTIMEPAGE_H
