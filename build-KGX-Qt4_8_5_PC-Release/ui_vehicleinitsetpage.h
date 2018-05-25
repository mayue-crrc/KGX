/********************************************************************************
** Form generated from reading UI file 'vehicleinitsetpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEINITSETPAGE_H
#define UI_VEHICLEINITSETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleInitsetPage
{
public:
    QPushButton *btn_back;
    QPushButton *btn_MC1;
    QPushButton *btn_MC2;
    QPushButton *btn_rebootHMI;
    QLabel *lbl_curPositon;

    void setupUi(QWidget *VehicleInitsetPage)
    {
        if (VehicleInitsetPage->objectName().isEmpty())
            VehicleInitsetPage->setObjectName(QString::fromUtf8("VehicleInitsetPage"));
        VehicleInitsetPage->resize(800, 441);
        VehicleInitsetPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        btn_back = new QPushButton(VehicleInitsetPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(690, 380, 91, 50));
        btn_back->setFocusPolicy(Qt::NoFocus);
        btn_back->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_MC1 = new QPushButton(VehicleInitsetPage);
        btn_MC1->setObjectName(QString::fromUtf8("btn_MC1"));
        btn_MC1->setGeometry(QRect(80, 90, 151, 50));
        btn_MC1->setFocusPolicy(Qt::NoFocus);
        btn_MC1->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_MC2 = new QPushButton(VehicleInitsetPage);
        btn_MC2->setObjectName(QString::fromUtf8("btn_MC2"));
        btn_MC2->setGeometry(QRect(310, 90, 151, 50));
        btn_MC2->setFocusPolicy(Qt::NoFocus);
        btn_MC2->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_rebootHMI = new QPushButton(VehicleInitsetPage);
        btn_rebootHMI->setObjectName(QString::fromUtf8("btn_rebootHMI"));
        btn_rebootHMI->setGeometry(QRect(540, 90, 151, 50));
        btn_rebootHMI->setFocusPolicy(Qt::NoFocus);
        btn_rebootHMI->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        lbl_curPositon = new QLabel(VehicleInitsetPage);
        lbl_curPositon->setObjectName(QString::fromUtf8("lbl_curPositon"));
        lbl_curPositon->setGeometry(QRect(80, 210, 181, 41));
        lbl_curPositon->setStyleSheet(QString::fromUtf8("font: 75  20px ;\n"
"color: rgb(255, 255, 0);"));
        lbl_curPositon->setAlignment(Qt::AlignCenter);

        retranslateUi(VehicleInitsetPage);

        QMetaObject::connectSlotsByName(VehicleInitsetPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleInitsetPage)
    {
        VehicleInitsetPage->setWindowTitle(QApplication::translate("VehicleInitsetPage", "Form", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("VehicleInitsetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        btn_MC1->setText(QApplication::translate("VehicleInitsetPage", "\350\256\276\347\275\256\344\270\272MC1\347\253\257", 0, QApplication::UnicodeUTF8));
        btn_MC2->setText(QApplication::translate("VehicleInitsetPage", "\350\256\276\347\275\256\344\270\272MC2\347\253\257", 0, QApplication::UnicodeUTF8));
        btn_rebootHMI->setText(QApplication::translate("VehicleInitsetPage", "\351\207\215\345\220\257HMI", 0, QApplication::UnicodeUTF8));
        lbl_curPositon->setText(QApplication::translate("VehicleInitsetPage", "\345\275\223\345\211\215\344\275\215\347\275\256 \357\274\232 MC1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleInitsetPage: public Ui_VehicleInitsetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEINITSETPAGE_H
