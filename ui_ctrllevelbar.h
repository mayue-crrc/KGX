/********************************************************************************
** Form generated from reading UI file 'ctrllevelbar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLLEVELBAR_H
#define UI_CTRLLEVELBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlLevelBar
{
public:
    QLabel *Ctrl_label_P7;
    QLabel *Ctrl_label_P6;
    QLabel *Ctrl_label_background;
    QLabel *Ctrl_label_P4;
    QLabel *Ctrl_label_P5;
    QLabel *Ctrl_label_P0;
    QLabel *Ctrl_label_P2;
    QLabel *Ctrl_label_P3;
    QLabel *Ctrl_label_P1;
    QLabel *Ctrl_label_N1;
    QLabel *Ctrl_label_N2;
    QLabel *Ctrl_label_N3;
    QLabel *Ctrl_label_N4;
    QLabel *Ctrl_label_N5;
    QLabel *Ctrl_label_N6;
    QLabel *Ctrl_label_N7;
    QLabel *Ctrl_label_VALUE;
    QLabel *Ctrl_label_EB;

    void setupUi(QWidget *CtrlLevelBar)
    {
        if (CtrlLevelBar->objectName().isEmpty())
            CtrlLevelBar->setObjectName(QString::fromUtf8("CtrlLevelBar"));
        CtrlLevelBar->resize(80, 554);
        CtrlLevelBar->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font:  18px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        Ctrl_label_P7 = new QLabel(CtrlLevelBar);
        Ctrl_label_P7->setObjectName(QString::fromUtf8("Ctrl_label_P7"));
        Ctrl_label_P7->setGeometry(QRect(3, 10, 74, 35));
        Ctrl_label_P7->setAlignment(Qt::AlignCenter);
        Ctrl_label_P6 = new QLabel(CtrlLevelBar);
        Ctrl_label_P6->setObjectName(QString::fromUtf8("Ctrl_label_P6"));
        Ctrl_label_P6->setGeometry(QRect(3, 40, 74, 35));
        Ctrl_label_P6->setAlignment(Qt::AlignCenter);
        Ctrl_label_background = new QLabel(CtrlLevelBar);
        Ctrl_label_background->setObjectName(QString::fromUtf8("Ctrl_label_background"));
        Ctrl_label_background->setGeometry(QRect(0, 0, 80, 501));
        Ctrl_label_background->setStyleSheet(QString::fromUtf8("border:3px solid white"));
        Ctrl_label_P4 = new QLabel(CtrlLevelBar);
        Ctrl_label_P4->setObjectName(QString::fromUtf8("Ctrl_label_P4"));
        Ctrl_label_P4->setGeometry(QRect(3, 100, 74, 35));
        Ctrl_label_P4->setAlignment(Qt::AlignCenter);
        Ctrl_label_P5 = new QLabel(CtrlLevelBar);
        Ctrl_label_P5->setObjectName(QString::fromUtf8("Ctrl_label_P5"));
        Ctrl_label_P5->setGeometry(QRect(3, 70, 74, 35));
        Ctrl_label_P5->setAlignment(Qt::AlignCenter);
        Ctrl_label_P0 = new QLabel(CtrlLevelBar);
        Ctrl_label_P0->setObjectName(QString::fromUtf8("Ctrl_label_P0"));
        Ctrl_label_P0->setGeometry(QRect(3, 220, 74, 35));
        Ctrl_label_P0->setAlignment(Qt::AlignCenter);
        Ctrl_label_P2 = new QLabel(CtrlLevelBar);
        Ctrl_label_P2->setObjectName(QString::fromUtf8("Ctrl_label_P2"));
        Ctrl_label_P2->setGeometry(QRect(3, 160, 74, 35));
        Ctrl_label_P2->setAlignment(Qt::AlignCenter);
        Ctrl_label_P3 = new QLabel(CtrlLevelBar);
        Ctrl_label_P3->setObjectName(QString::fromUtf8("Ctrl_label_P3"));
        Ctrl_label_P3->setGeometry(QRect(3, 130, 74, 35));
        Ctrl_label_P3->setAlignment(Qt::AlignCenter);
        Ctrl_label_P1 = new QLabel(CtrlLevelBar);
        Ctrl_label_P1->setObjectName(QString::fromUtf8("Ctrl_label_P1"));
        Ctrl_label_P1->setGeometry(QRect(3, 190, 74, 35));
        Ctrl_label_P1->setAlignment(Qt::AlignCenter);
        Ctrl_label_N1 = new QLabel(CtrlLevelBar);
        Ctrl_label_N1->setObjectName(QString::fromUtf8("Ctrl_label_N1"));
        Ctrl_label_N1->setGeometry(QRect(3, 250, 74, 35));
        Ctrl_label_N1->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_N1->setAlignment(Qt::AlignCenter);
        Ctrl_label_N2 = new QLabel(CtrlLevelBar);
        Ctrl_label_N2->setObjectName(QString::fromUtf8("Ctrl_label_N2"));
        Ctrl_label_N2->setGeometry(QRect(3, 280, 74, 35));
        Ctrl_label_N2->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_N2->setAlignment(Qt::AlignCenter);
        Ctrl_label_N3 = new QLabel(CtrlLevelBar);
        Ctrl_label_N3->setObjectName(QString::fromUtf8("Ctrl_label_N3"));
        Ctrl_label_N3->setGeometry(QRect(3, 310, 74, 35));
        Ctrl_label_N3->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_N3->setAlignment(Qt::AlignCenter);
        Ctrl_label_N4 = new QLabel(CtrlLevelBar);
        Ctrl_label_N4->setObjectName(QString::fromUtf8("Ctrl_label_N4"));
        Ctrl_label_N4->setGeometry(QRect(3, 340, 74, 35));
        Ctrl_label_N4->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_N4->setAlignment(Qt::AlignCenter);
        Ctrl_label_N5 = new QLabel(CtrlLevelBar);
        Ctrl_label_N5->setObjectName(QString::fromUtf8("Ctrl_label_N5"));
        Ctrl_label_N5->setGeometry(QRect(3, 370, 74, 35));
        Ctrl_label_N5->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_N5->setAlignment(Qt::AlignCenter);
        Ctrl_label_N6 = new QLabel(CtrlLevelBar);
        Ctrl_label_N6->setObjectName(QString::fromUtf8("Ctrl_label_N6"));
        Ctrl_label_N6->setGeometry(QRect(3, 400, 74, 35));
        Ctrl_label_N6->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_N6->setAlignment(Qt::AlignCenter);
        Ctrl_label_N7 = new QLabel(CtrlLevelBar);
        Ctrl_label_N7->setObjectName(QString::fromUtf8("Ctrl_label_N7"));
        Ctrl_label_N7->setGeometry(QRect(3, 430, 74, 35));
        Ctrl_label_N7->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_N7->setAlignment(Qt::AlignCenter);
        Ctrl_label_VALUE = new QLabel(CtrlLevelBar);
        Ctrl_label_VALUE->setObjectName(QString::fromUtf8("Ctrl_label_VALUE"));
        Ctrl_label_VALUE->setGeometry(QRect(0, 500, 80, 35));
        Ctrl_label_VALUE->setStyleSheet(QString::fromUtf8(""));
        Ctrl_label_VALUE->setAlignment(Qt::AlignCenter);
        Ctrl_label_EB = new QLabel(CtrlLevelBar);
        Ctrl_label_EB->setObjectName(QString::fromUtf8("Ctrl_label_EB"));
        Ctrl_label_EB->setGeometry(QRect(3, 460, 74, 35));
        Ctrl_label_EB->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 50, 89);"));
        Ctrl_label_EB->setAlignment(Qt::AlignCenter);
        Ctrl_label_background->raise();
        Ctrl_label_P7->raise();
        Ctrl_label_P6->raise();
        Ctrl_label_P4->raise();
        Ctrl_label_P5->raise();
        Ctrl_label_P0->raise();
        Ctrl_label_P2->raise();
        Ctrl_label_P3->raise();
        Ctrl_label_P1->raise();
        Ctrl_label_N1->raise();
        Ctrl_label_N2->raise();
        Ctrl_label_N3->raise();
        Ctrl_label_N4->raise();
        Ctrl_label_N5->raise();
        Ctrl_label_N6->raise();
        Ctrl_label_N7->raise();
        Ctrl_label_VALUE->raise();
        Ctrl_label_EB->raise();

        retranslateUi(CtrlLevelBar);

        QMetaObject::connectSlotsByName(CtrlLevelBar);
    } // setupUi

    void retranslateUi(QWidget *CtrlLevelBar)
    {
        CtrlLevelBar->setWindowTitle(QApplication::translate("CtrlLevelBar", "Form", 0, QApplication::UnicodeUTF8));
        Ctrl_label_P7->setText(QApplication::translate("CtrlLevelBar", "+7", 0, QApplication::UnicodeUTF8));
        Ctrl_label_P6->setText(QApplication::translate("CtrlLevelBar", "+6", 0, QApplication::UnicodeUTF8));
        Ctrl_label_background->setText(QString());
        Ctrl_label_P4->setText(QApplication::translate("CtrlLevelBar", "+4", 0, QApplication::UnicodeUTF8));
        Ctrl_label_P5->setText(QApplication::translate("CtrlLevelBar", "+5", 0, QApplication::UnicodeUTF8));
        Ctrl_label_P0->setText(QApplication::translate("CtrlLevelBar", "0", 0, QApplication::UnicodeUTF8));
        Ctrl_label_P2->setText(QApplication::translate("CtrlLevelBar", "+2", 0, QApplication::UnicodeUTF8));
        Ctrl_label_P3->setText(QApplication::translate("CtrlLevelBar", "+3", 0, QApplication::UnicodeUTF8));
        Ctrl_label_P1->setText(QApplication::translate("CtrlLevelBar", "+1", 0, QApplication::UnicodeUTF8));
        Ctrl_label_N1->setText(QApplication::translate("CtrlLevelBar", "-1", 0, QApplication::UnicodeUTF8));
        Ctrl_label_N2->setText(QApplication::translate("CtrlLevelBar", "-2", 0, QApplication::UnicodeUTF8));
        Ctrl_label_N3->setText(QApplication::translate("CtrlLevelBar", "-3", 0, QApplication::UnicodeUTF8));
        Ctrl_label_N4->setText(QApplication::translate("CtrlLevelBar", "-4", 0, QApplication::UnicodeUTF8));
        Ctrl_label_N5->setText(QApplication::translate("CtrlLevelBar", "-5", 0, QApplication::UnicodeUTF8));
        Ctrl_label_N6->setText(QApplication::translate("CtrlLevelBar", "-6", 0, QApplication::UnicodeUTF8));
        Ctrl_label_N7->setText(QApplication::translate("CtrlLevelBar", "-7", 0, QApplication::UnicodeUTF8));
        Ctrl_label_VALUE->setText(QString());
        Ctrl_label_EB->setText(QApplication::translate("CtrlLevelBar", "EB", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlLevelBar: public Ui_CtrlLevelBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLLEVELBAR_H
