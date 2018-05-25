/********************************************************************************
** Form generated from reading UI file 'vehicledebugiopage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEDEBUGIOPAGE_H
#define UI_VEHICLEDEBUGIOPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleDebugIOPage
{
public:
    QPushButton *btn_back;
    QPushButton *btn_MC1;
    QPushButton *btn_T;
    QPushButton *btn_MC2;
    QLabel *lbl_Page;
    QPushButton *btn_nextpage;
    QPushButton *btn_prepage;
    QLabel *label;

    void setupUi(QWidget *VehicleDebugIOPage)
    {
        if (VehicleDebugIOPage->objectName().isEmpty())
            VehicleDebugIOPage->setObjectName(QString::fromUtf8("VehicleDebugIOPage"));
        VehicleDebugIOPage->resize(1024, 668);
        VehicleDebugIOPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        btn_back = new QPushButton(VehicleDebugIOPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(690, 460, 91, 50));
        btn_back->setFocusPolicy(Qt::NoFocus);
        btn_back->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_MC1 = new QPushButton(VehicleDebugIOPage);
        btn_MC1->setObjectName(QString::fromUtf8("btn_MC1"));
        btn_MC1->setGeometry(QRect(20, 460, 71, 50));
        btn_MC1->setFocusPolicy(Qt::NoFocus);
        btn_MC1->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_T = new QPushButton(VehicleDebugIOPage);
        btn_T->setObjectName(QString::fromUtf8("btn_T"));
        btn_T->setGeometry(QRect(100, 460, 61, 50));
        btn_T->setFocusPolicy(Qt::NoFocus);
        btn_T->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_MC2 = new QPushButton(VehicleDebugIOPage);
        btn_MC2->setObjectName(QString::fromUtf8("btn_MC2"));
        btn_MC2->setGeometry(QRect(170, 460, 71, 50));
        btn_MC2->setFocusPolicy(Qt::NoFocus);
        btn_MC2->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        lbl_Page = new QLabel(VehicleDebugIOPage);
        lbl_Page->setObjectName(QString::fromUtf8("lbl_Page"));
        lbl_Page->setGeometry(QRect(520, 460, 61, 51));
        lbl_Page->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"background-color: rgb(0, 0, 0);\n"
"color:white;\n"
"\n"
""));
        lbl_Page->setAlignment(Qt::AlignCenter);
        btn_nextpage = new QPushButton(VehicleDebugIOPage);
        btn_nextpage->setObjectName(QString::fromUtf8("btn_nextpage"));
        btn_nextpage->setGeometry(QRect(590, 460, 50, 50));
        btn_nextpage->setFocusPolicy(Qt::NoFocus);
        btn_nextpage->setStyleSheet(QString::fromUtf8("font: 75 18px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"/*border-color: rgb(216, 216, 216);*/\n"
""));
        btn_prepage = new QPushButton(VehicleDebugIOPage);
        btn_prepage->setObjectName(QString::fromUtf8("btn_prepage"));
        btn_prepage->setGeometry(QRect(460, 460, 50, 50));
        btn_prepage->setFocusPolicy(Qt::NoFocus);
        btn_prepage->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);\n"
"/*border:solid 1px;*/"));
        label = new QLabel(VehicleDebugIOPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 668));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label->raise();
        btn_back->raise();
        btn_MC1->raise();
        btn_T->raise();
        btn_MC2->raise();
        lbl_Page->raise();
        btn_nextpage->raise();
        btn_prepage->raise();

        retranslateUi(VehicleDebugIOPage);

        QMetaObject::connectSlotsByName(VehicleDebugIOPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleDebugIOPage)
    {
        VehicleDebugIOPage->setWindowTitle(QApplication::translate("VehicleDebugIOPage", "Form", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("VehicleDebugIOPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btn_MC1->setText(QApplication::translate("VehicleDebugIOPage", "MC1", 0, QApplication::UnicodeUTF8));
        btn_T->setText(QApplication::translate("VehicleDebugIOPage", "T", 0, QApplication::UnicodeUTF8));
        btn_MC2->setText(QApplication::translate("VehicleDebugIOPage", "MC2", 0, QApplication::UnicodeUTF8));
        lbl_Page->setText(QString());
        btn_nextpage->setText(QApplication::translate("VehicleDebugIOPage", "\342\226\274", 0, QApplication::UnicodeUTF8));
        btn_prepage->setText(QApplication::translate("VehicleDebugIOPage", "\342\226\262", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VehicleDebugIOPage: public Ui_VehicleDebugIOPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEDEBUGIOPAGE_H
