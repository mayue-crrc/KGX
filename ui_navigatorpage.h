/********************************************************************************
** Form generated from reading UI file 'navigatorpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATORPAGE_H
#define UI_NAVIGATORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigatorPage
{
public:
    QPushButton *NButton1;
    QPushButton *NButton2;
    QPushButton *NButton3;
    QPushButton *NButton4;
    QPushButton *NButton5;
    QPushButton *NButton6;
    QPushButton *NButton7;
    QPushButton *NButton8;
    QLabel *label;

    void setupUi(QWidget *NavigatorPage)
    {
        if (NavigatorPage->objectName().isEmpty())
            NavigatorPage->setObjectName(QString::fromUtf8("NavigatorPage"));
        NavigatorPage->resize(1024, 100);
        NavigatorPage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color: rgb(115, 115,115);\n"
"}"));
        NButton1 = new QPushButton(NavigatorPage);
        NButton1->setObjectName(QString::fromUtf8("NButton1"));
        NButton1->setGeometry(QRect(30, 15, 115, 71));
        NButton1->setFocusPolicy(Qt::NoFocus);
        NButton1->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton2 = new QPushButton(NavigatorPage);
        NButton2->setObjectName(QString::fromUtf8("NButton2"));
        NButton2->setGeometry(QRect(150, 15, 115, 71));
        NButton2->setFocusPolicy(Qt::NoFocus);
        NButton2->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton3 = new QPushButton(NavigatorPage);
        NButton3->setObjectName(QString::fromUtf8("NButton3"));
        NButton3->setGeometry(QRect(270, 15, 115, 71));
        NButton3->setFocusPolicy(Qt::NoFocus);
        NButton3->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton4 = new QPushButton(NavigatorPage);
        NButton4->setObjectName(QString::fromUtf8("NButton4"));
        NButton4->setGeometry(QRect(390, 15, 115, 71));
        NButton4->setFocusPolicy(Qt::NoFocus);
        NButton4->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton5 = new QPushButton(NavigatorPage);
        NButton5->setObjectName(QString::fromUtf8("NButton5"));
        NButton5->setGeometry(QRect(510, 15, 115, 71));
        NButton5->setFocusPolicy(Qt::NoFocus);
        NButton5->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton6 = new QPushButton(NavigatorPage);
        NButton6->setObjectName(QString::fromUtf8("NButton6"));
        NButton6->setGeometry(QRect(630, 15, 115, 71));
        NButton6->setFocusPolicy(Qt::NoFocus);
        NButton6->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton7 = new QPushButton(NavigatorPage);
        NButton7->setObjectName(QString::fromUtf8("NButton7"));
        NButton7->setGeometry(QRect(750, 15, 115, 71));
        NButton7->setFocusPolicy(Qt::NoFocus);
        NButton7->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        NButton8 = new QPushButton(NavigatorPage);
        NButton8->setObjectName(QString::fromUtf8("NButton8"));
        NButton8->setGeometry(QRect(870, 15, 115, 71));
        NButton8->setFocusPolicy(Qt::NoFocus);
        NButton8->setStyleSheet(QString::fromUtf8("font: 75 bold 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border-color: rgb(216, 216, 216);"));
        label = new QLabel(NavigatorPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1024, 100));
        label->raise();
        NButton1->raise();
        NButton2->raise();
        NButton3->raise();
        NButton4->raise();
        NButton5->raise();
        NButton6->raise();
        NButton7->raise();
        NButton8->raise();

        retranslateUi(NavigatorPage);

        QMetaObject::connectSlotsByName(NavigatorPage);
    } // setupUi

    void retranslateUi(QWidget *NavigatorPage)
    {
        NavigatorPage->setWindowTitle(QApplication::translate("NavigatorPage", "Form", 0, QApplication::UnicodeUTF8));
        NButton1->setText(QApplication::translate("NavigatorPage", "\350\277\220\350\241\214", 0, QApplication::UnicodeUTF8));
        NButton2->setText(QApplication::translate("NavigatorPage", "\347\275\221\347\273\234", 0, QApplication::UnicodeUTF8));
        NButton3->setText(QApplication::translate("NavigatorPage", "\347\211\265\345\274\225", 0, QApplication::UnicodeUTF8));
        NButton4->setText(QApplication::translate("NavigatorPage", "\345\210\266\345\212\250", 0, QApplication::UnicodeUTF8));
        NButton5->setText(QApplication::translate("NavigatorPage", "\350\276\205\345\212\251", 0, QApplication::UnicodeUTF8));
        NButton6->setText(QApplication::translate("NavigatorPage", "\347\251\272\350\260\203", 0, QApplication::UnicodeUTF8));
        NButton7->setText(QApplication::translate("NavigatorPage", "\347\233\221\346\216\247", 0, QApplication::UnicodeUTF8));
        NButton8->setText(QApplication::translate("NavigatorPage", "\347\273\264\346\212\244", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NavigatorPage: public Ui_NavigatorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATORPAGE_H
