/********************************************************************************
** Form generated from reading UI file 'vehicleaccumulatesetpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEACCUMULATESETPAGE_H
#define UI_VEHICLEACCUMULATESETPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleAccumulateSetPage
{
public:
    QLabel *VehicleWheelset_label_24;
    QPushButton *btn_accumulateMile;
    QPushButton *btn_accumulateMileConfirm;
    QPushButton *btn_back;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *lbl_accumulateMileCurValue;

    void setupUi(QWidget *VehicleAccumulateSetPage)
    {
        if (VehicleAccumulateSetPage->objectName().isEmpty())
            VehicleAccumulateSetPage->setObjectName(QString::fromUtf8("VehicleAccumulateSetPage"));
        VehicleAccumulateSetPage->resize(1024, 568);
        VehicleAccumulateSetPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        VehicleWheelset_label_24 = new QLabel(VehicleAccumulateSetPage);
        VehicleWheelset_label_24->setObjectName(QString::fromUtf8("VehicleWheelset_label_24"));
        VehicleWheelset_label_24->setGeometry(QRect(50, 130, 101, 31));
        VehicleWheelset_label_24->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 0);"));
        VehicleWheelset_label_24->setAlignment(Qt::AlignCenter);
        btn_accumulateMile = new QPushButton(VehicleAccumulateSetPage);
        btn_accumulateMile->setObjectName(QString::fromUtf8("btn_accumulateMile"));
        btn_accumulateMile->setGeometry(QRect(170, 130, 121, 40));
        btn_accumulateMile->setFocusPolicy(Qt::NoFocus);
        btn_accumulateMile->setStyleSheet(QString::fromUtf8("font: 75  24px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(178, 178, 178);\n"
"border:2px solid rgb(216, 216, 216);"));
        btn_accumulateMileConfirm = new QPushButton(VehicleAccumulateSetPage);
        btn_accumulateMileConfirm->setObjectName(QString::fromUtf8("btn_accumulateMileConfirm"));
        btn_accumulateMileConfirm->setGeometry(QRect(420, 130, 111, 41));
        btn_accumulateMileConfirm->setFocusPolicy(Qt::NoFocus);
        btn_accumulateMileConfirm->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        btn_back = new QPushButton(VehicleAccumulateSetPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(690, 380, 91, 50));
        btn_back->setFocusPolicy(Qt::NoFocus);
        btn_back->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        label_13 = new QLabel(VehicleAccumulateSetPage);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(300, 100, 81, 21));
        label_13->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 0);"));
        label_13->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(VehicleAccumulateSetPage);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(180, 100, 111, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 0);"));
        label_10->setAlignment(Qt::AlignCenter);
        lbl_accumulateMileCurValue = new QLabel(VehicleAccumulateSetPage);
        lbl_accumulateMileCurValue->setObjectName(QString::fromUtf8("lbl_accumulateMileCurValue"));
        lbl_accumulateMileCurValue->setGeometry(QRect(300, 140, 81, 21));
        lbl_accumulateMileCurValue->setStyleSheet(QString::fromUtf8("font: 75  16px ;\n"
"color: rgb(255, 255, 0);"));
        lbl_accumulateMileCurValue->setAlignment(Qt::AlignCenter);

        retranslateUi(VehicleAccumulateSetPage);

        QMetaObject::connectSlotsByName(VehicleAccumulateSetPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleAccumulateSetPage)
    {
        VehicleAccumulateSetPage->setWindowTitle(QApplication::translate("VehicleAccumulateSetPage", "Form", 0, QApplication::UnicodeUTF8));
        VehicleWheelset_label_24->setText(QApplication::translate("VehicleAccumulateSetPage", "\347\264\257\350\256\241\351\207\214\347\250\213\357\274\232", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        btn_accumulateMile->setWhatsThis(QApplication::translate("VehicleAccumulateSetPage", "Number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        btn_accumulateMile->setText(QString());
        btn_accumulateMileConfirm->setText(QApplication::translate("VehicleAccumulateSetPage", "\351\207\214\347\250\213\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("VehicleAccumulateSetPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("VehicleAccumulateSetPage", " \345\275\223\345\211\215\345\200\274", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("VehicleAccumulateSetPage", "\350\256\276\345\256\232\345\200\274   ", 0, QApplication::UnicodeUTF8));
        lbl_accumulateMileCurValue->setText(QApplication::translate("VehicleAccumulateSetPage", "10000", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleAccumulateSetPage: public Ui_VehicleAccumulateSetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEACCUMULATESETPAGE_H
