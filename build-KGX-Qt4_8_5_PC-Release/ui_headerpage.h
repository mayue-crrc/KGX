/********************************************************************************
** Form generated from reading UI file 'headerpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADERPAGE_H
#define UI_HEADERPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HeaderPage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *headerlabel_Voltage;
    QLabel *headerlabel_Current;
    QLabel *headerlabel_CurStation;
    QLabel *headerlabel_Date;
    QLabel *headerlabel_Time;
    QLabel *headerlabel_TrainNum;
    QPushButton *pushButton;
    QLabel *headerlabel_PagePosition;
    QLabel *headerlabel_Runmode;

    void setupUi(QWidget *HeaderPage)
    {
        if (HeaderPage->objectName().isEmpty())
            HeaderPage->setObjectName(QString::fromUtf8("HeaderPage"));
        HeaderPage->resize(1024, 80);
        HeaderPage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
" border:2px solid white;\n"
"}"));
        label = new QLabel(HeaderPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 150, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 75 18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(115, 115, 115);\n"
"color: rgb(255, 255, 255);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(HeaderPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 0, 150, 40));
        label_2->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(HeaderPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 0, 150, 40));
        label_3->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        label_3->setAlignment(Qt::AlignCenter);
        headerlabel_Voltage = new QLabel(HeaderPage);
        headerlabel_Voltage->setObjectName(QString::fromUtf8("headerlabel_Voltage"));
        headerlabel_Voltage->setGeometry(QRect(0, 40, 150, 40));
        headerlabel_Voltage->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Voltage->setAlignment(Qt::AlignCenter);
        headerlabel_Current = new QLabel(HeaderPage);
        headerlabel_Current->setObjectName(QString::fromUtf8("headerlabel_Current"));
        headerlabel_Current->setGeometry(QRect(150, 40, 150, 40));
        headerlabel_Current->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Current->setAlignment(Qt::AlignCenter);
        headerlabel_CurStation = new QLabel(HeaderPage);
        headerlabel_CurStation->setObjectName(QString::fromUtf8("headerlabel_CurStation"));
        headerlabel_CurStation->setGeometry(QRect(300, 40, 150, 40));
        headerlabel_CurStation->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_CurStation->setAlignment(Qt::AlignCenter);
        headerlabel_Date = new QLabel(HeaderPage);
        headerlabel_Date->setObjectName(QString::fromUtf8("headerlabel_Date"));
        headerlabel_Date->setGeometry(QRect(450, 0, 150, 40));
        headerlabel_Date->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Date->setAlignment(Qt::AlignCenter);
        headerlabel_Time = new QLabel(HeaderPage);
        headerlabel_Time->setObjectName(QString::fromUtf8("headerlabel_Time"));
        headerlabel_Time->setGeometry(QRect(450, 40, 150, 40));
        headerlabel_Time->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Time->setAlignment(Qt::AlignCenter);
        headerlabel_TrainNum = new QLabel(HeaderPage);
        headerlabel_TrainNum->setObjectName(QString::fromUtf8("headerlabel_TrainNum"));
        headerlabel_TrainNum->setGeometry(QRect(600, 0, 150, 40));
        headerlabel_TrainNum->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_TrainNum->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(HeaderPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(930, 2, 100, 76));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/images/fault.bmp);"));
        headerlabel_PagePosition = new QLabel(HeaderPage);
        headerlabel_PagePosition->setObjectName(QString::fromUtf8("headerlabel_PagePosition"));
        headerlabel_PagePosition->setGeometry(QRect(600, 40, 150, 40));
        headerlabel_PagePosition->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_PagePosition->setAlignment(Qt::AlignCenter);
        headerlabel_Runmode = new QLabel(HeaderPage);
        headerlabel_Runmode->setObjectName(QString::fromUtf8("headerlabel_Runmode"));
        headerlabel_Runmode->setGeometry(QRect(749, 0, 181, 81));
        headerlabel_Runmode->setStyleSheet(QString::fromUtf8("font: 75  18px \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(115, 115, 115);"));
        headerlabel_Runmode->setAlignment(Qt::AlignCenter);

        retranslateUi(HeaderPage);

        QMetaObject::connectSlotsByName(HeaderPage);
    } // setupUi

    void retranslateUi(QWidget *HeaderPage)
    {
        HeaderPage->setWindowTitle(QApplication::translate("HeaderPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HeaderPage", "\347\275\221\345\216\213", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("HeaderPage", "\347\275\221\346\265\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("HeaderPage", "\345\275\223\345\211\215\347\253\231", 0, QApplication::UnicodeUTF8));
        headerlabel_Voltage->setText(QString());
        headerlabel_Current->setText(QString());
        headerlabel_CurStation->setText(QString());
        headerlabel_Date->setText(QString());
        headerlabel_Time->setText(QString());
        headerlabel_TrainNum->setText(QString());
        pushButton->setText(QString());
        headerlabel_PagePosition->setText(QApplication::translate("HeaderPage", "\350\277\220\350\241\214\351\241\265\351\235\242", 0, QApplication::UnicodeUTF8));
        headerlabel_Runmode->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HeaderPage: public Ui_HeaderPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADERPAGE_H
