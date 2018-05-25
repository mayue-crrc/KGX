/********************************************************************************
** Form generated from reading UI file 'vehicledebugportdatapage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEDEBUGPORTDATAPAGE_H
#define UI_VEHICLEDEBUGPORTDATAPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleDebugPortDataPage
{
public:
    QPushButton *btn_back;
    QPushButton *EDCUBtn;
    QPushButton *PISHVACBtn;
    QPushButton *CCUBBtn;
    QPushButton *RIOMBtn;
    QPushButton *BMSBtn;
    QPushButton *ACUBtn;
    QPushButton *HMIBtn;
    QPushButton *ATCBCCUBtn;
    QPushButton *ERMBtn;
    QPushButton *BCUBtn;
    QPushButton *CCUABtn;
    QPushButton *TCUBtn;

    void setupUi(QWidget *VehicleDebugPortDataPage)
    {
        if (VehicleDebugPortDataPage->objectName().isEmpty())
            VehicleDebugPortDataPage->setObjectName(QString::fromUtf8("VehicleDebugPortDataPage"));
        VehicleDebugPortDataPage->resize(1024, 568);
        VehicleDebugPortDataPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color:();\n"
"}\n"
"QPushButton\n"
"{\n"
"font: 75 18px ;color: rgb(255, 255, 255);background-color: rgb(51, 153, 255);border:3px solid;border-color: rgb(230, 230, 230);\n"
"}\n"
"\n"
""));
        btn_back = new QPushButton(VehicleDebugPortDataPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(940, 520, 81, 41));
        btn_back->setFocusPolicy(Qt::NoFocus);
        btn_back->setStyleSheet(QString::fromUtf8("font: 75 18px ;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(51, 153, 255);\n"
"border:3px solid;\n"
"border-color:rgb(230, 230, 230);\n"
""));
        EDCUBtn = new QPushButton(VehicleDebugPortDataPage);
        EDCUBtn->setObjectName(QString::fromUtf8("EDCUBtn"));
        EDCUBtn->setGeometry(QRect(940, 330, 81, 41));
        EDCUBtn->setFocusPolicy(Qt::NoFocus);
        EDCUBtn->setStyleSheet(QString::fromUtf8(""));
        PISHVACBtn = new QPushButton(VehicleDebugPortDataPage);
        PISHVACBtn->setObjectName(QString::fromUtf8("PISHVACBtn"));
        PISHVACBtn->setGeometry(QRect(940, 370, 81, 41));
        PISHVACBtn->setFocusPolicy(Qt::NoFocus);
        PISHVACBtn->setStyleSheet(QString::fromUtf8("font: 75 16px ;color: rgb(255, 255, 255);background-color: rgb(51, 153, 255);border:3px solid;border-color: rgb(230, 230, 230);"));
        CCUBBtn = new QPushButton(VehicleDebugPortDataPage);
        CCUBBtn->setObjectName(QString::fromUtf8("CCUBBtn"));
        CCUBBtn->setGeometry(QRect(940, 50, 81, 41));
        CCUBBtn->setFocusPolicy(Qt::NoFocus);
        CCUBBtn->setStyleSheet(QString::fromUtf8(""));
        RIOMBtn = new QPushButton(VehicleDebugPortDataPage);
        RIOMBtn->setObjectName(QString::fromUtf8("RIOMBtn"));
        RIOMBtn->setGeometry(QRect(940, 90, 81, 41));
        RIOMBtn->setFocusPolicy(Qt::NoFocus);
        RIOMBtn->setStyleSheet(QString::fromUtf8(""));
        BMSBtn = new QPushButton(VehicleDebugPortDataPage);
        BMSBtn->setObjectName(QString::fromUtf8("BMSBtn"));
        BMSBtn->setGeometry(QRect(940, 450, 81, 41));
        BMSBtn->setFocusPolicy(Qt::NoFocus);
        BMSBtn->setStyleSheet(QString::fromUtf8(""));
        ACUBtn = new QPushButton(VehicleDebugPortDataPage);
        ACUBtn->setObjectName(QString::fromUtf8("ACUBtn"));
        ACUBtn->setGeometry(QRect(940, 290, 81, 41));
        ACUBtn->setFocusPolicy(Qt::NoFocus);
        ACUBtn->setStyleSheet(QString::fromUtf8(""));
        HMIBtn = new QPushButton(VehicleDebugPortDataPage);
        HMIBtn->setObjectName(QString::fromUtf8("HMIBtn"));
        HMIBtn->setGeometry(QRect(940, 130, 81, 41));
        HMIBtn->setFocusPolicy(Qt::NoFocus);
        HMIBtn->setStyleSheet(QString::fromUtf8(""));
        ATCBCCUBtn = new QPushButton(VehicleDebugPortDataPage);
        ATCBCCUBtn->setObjectName(QString::fromUtf8("ATCBCCUBtn"));
        ATCBCCUBtn->setGeometry(QRect(940, 410, 81, 41));
        ATCBCCUBtn->setFocusPolicy(Qt::NoFocus);
        ATCBCCUBtn->setStyleSheet(QString::fromUtf8("font: 75 16px ;color: rgb(255, 255, 255);background-color: rgb(51, 153, 255);border:3px solid;border-color: rgb(230, 230, 230);"));
        ERMBtn = new QPushButton(VehicleDebugPortDataPage);
        ERMBtn->setObjectName(QString::fromUtf8("ERMBtn"));
        ERMBtn->setGeometry(QRect(940, 170, 81, 41));
        ERMBtn->setFocusPolicy(Qt::NoFocus);
        ERMBtn->setStyleSheet(QString::fromUtf8(""));
        BCUBtn = new QPushButton(VehicleDebugPortDataPage);
        BCUBtn->setObjectName(QString::fromUtf8("BCUBtn"));
        BCUBtn->setGeometry(QRect(940, 210, 81, 41));
        BCUBtn->setFocusPolicy(Qt::NoFocus);
        BCUBtn->setStyleSheet(QString::fromUtf8(""));
        CCUABtn = new QPushButton(VehicleDebugPortDataPage);
        CCUABtn->setObjectName(QString::fromUtf8("CCUABtn"));
        CCUABtn->setGeometry(QRect(940, 10, 81, 41));
        CCUABtn->setFocusPolicy(Qt::NoFocus);
        CCUABtn->setStyleSheet(QString::fromUtf8(""));
        TCUBtn = new QPushButton(VehicleDebugPortDataPage);
        TCUBtn->setObjectName(QString::fromUtf8("TCUBtn"));
        TCUBtn->setGeometry(QRect(940, 250, 81, 41));
        TCUBtn->setFocusPolicy(Qt::NoFocus);
        TCUBtn->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(VehicleDebugPortDataPage);

        QMetaObject::connectSlotsByName(VehicleDebugPortDataPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleDebugPortDataPage)
    {
        VehicleDebugPortDataPage->setWindowTitle(QApplication::translate("VehicleDebugPortDataPage", "Form", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("VehicleDebugPortDataPage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        EDCUBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "EDCU", 0, QApplication::UnicodeUTF8));
        PISHVACBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "PIS\n"
"HVAC", 0, QApplication::UnicodeUTF8));
        CCUBBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "CCUB", 0, QApplication::UnicodeUTF8));
        RIOMBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "RIOM", 0, QApplication::UnicodeUTF8));
        BMSBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "BMS", 0, QApplication::UnicodeUTF8));
        ACUBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "ACU", 0, QApplication::UnicodeUTF8));
        HMIBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "HMI", 0, QApplication::UnicodeUTF8));
        ATCBCCUBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "ATC\n"
"BCCU", 0, QApplication::UnicodeUTF8));
        ERMBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "ERM", 0, QApplication::UnicodeUTF8));
        BCUBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "BCU", 0, QApplication::UnicodeUTF8));
        CCUABtn->setText(QApplication::translate("VehicleDebugPortDataPage", "CCUA", 0, QApplication::UnicodeUTF8));
        TCUBtn->setText(QApplication::translate("VehicleDebugPortDataPage", "TCU", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleDebugPortDataPage: public Ui_VehicleDebugPortDataPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEDEBUGPORTDATAPAGE_H
