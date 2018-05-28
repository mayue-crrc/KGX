/********************************************************************************
** Form generated from reading UI file 'vehiclerunpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLERUNPAGE_H
#define UI_VEHICLERUNPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleRunPage
{
public:
    QPushButton *btn_VehicleRun_help;
    QLabel *label_2;
    QWidget *widget;
    QLabel *lbl_name_mc1;
    QLabel *VehicleRun_EDCU1_MC1;
    QLabel *VehicleRun_EDCU2_MC1;
    QLabel *VehicleRun_train;
    QLabel *VehicleRun_motor1_MC1;
    QLabel *lbl_name_t;
    QLabel *VehicleRun_mc2Active;
    QLabel *lbl_name_mc2;
    QLabel *VehicleRun_motor2_MC1;
    QLabel *VehicleRun_mc1Active;
    QLabel *VehicleRun_BCU1_MC1;
    QLabel *VehicleRun_ACP_MC1;
    QLabel *VehicleRun_BCU2_MC1;
    QLabel *VehicleRun_HVAC_MC1;
    QLabel *VehicleRun_OutTemp_MC1;
    QLabel *VehicleRun_BCCU_T;
    QLabel *VehicleRun_ACU_T;
    QLabel *VehicleRun_BCU2_T;
    QLabel *VehicleRun_EDCU2_T;
    QLabel *VehicleRun_HVAC_T;
    QLabel *VehicleRun_OutTemp_T;
    QLabel *VehicleRun_BCU1_T;
    QLabel *VehicleRun_EDCU1_T;
    QLabel *VehicleRun_ACP_MC2;
    QLabel *VehicleRun_motor2_MC2;
    QLabel *VehicleRun_BCU2_MC2;
    QLabel *VehicleRun_EDCU2_MC2;
    QLabel *VehicleRun_HVAC_MC2;
    QLabel *VehicleRun_OutTemp_MC2;
    QLabel *VehicleRun_motor1_MC2;
    QLabel *VehicleRun_BCU1_MC2;
    QLabel *VehicleRun_EDCU1_MC2;
    QLabel *VehicleRun_PECU1_1_MC1;
    QLabel *VehicleRun_PECU1_2_MC1;
    QLabel *VehicleRun_PECU1_3_MC1;
    QLabel *VehicleRun_PECU2_1_MC1;
    QLabel *VehicleRun_PECU2_2_MC1;
    QLabel *VehicleRun_PECU2_3_MC1;
    QLabel *VehicleRun_PECU1_3_T;
    QLabel *VehicleRun_PECU2_1_T;
    QLabel *VehicleRun_PECU2_3_T;
    QLabel *VehicleRun_PECU1_2_T;
    QLabel *VehicleRun_PECU2_2_T;
    QLabel *VehicleRun_PECU1_1_T;
    QLabel *VehicleRun_PECU1_3_MC2;
    QLabel *VehicleRun_PECU2_1_MC2;
    QLabel *VehicleRun_PECU2_3_MC2;
    QLabel *VehicleRun_PECU1_2_MC2;
    QLabel *VehicleRun_PECU2_2_MC2;
    QLabel *VehicleRun_PECU1_1_MC2;
    QWidget *widget_2;
    QLabel *Barlabel_left_15;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *Barlabel_left_16;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *Barlabel_right_4;
    QLabel *label_40;
    QLabel *Barlabel_TraBrakevalue;
    QLabel *label_41;
    QLabel *Barlabel_left_19;
    QLabel *Barlabel_TraBrakeLine;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *lbl_name_tracBrk;
    QWidget *BatteryBar;
    QLabel *Barlabel_left;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *Barlabel_left_5;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_6;
    QLabel *Barlabel_right_2;
    QLabel *Barlabel_left_2;
    QLabel *label_9;
    QLabel *Barlabel_left_3;
    QLabel *Barlabel_LowVoltagevalue;
    QLabel *label_13;
    QLabel *Barlabel_left_4;
    QLabel *Barlabel_LowVoltagevalueLine;
    QLabel *Barlabel_left_6;
    QLabel *Barlabel_left_7;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *lbl_name_voltage;

    void setupUi(QWidget *VehicleRunPage)
    {
        if (VehicleRunPage->objectName().isEmpty())
            VehicleRunPage->setObjectName(QString::fromUtf8("VehicleRunPage"));
        VehicleRunPage->resize(1024, 568);
        VehicleRunPage->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 145, 255);"));
        btn_VehicleRun_help = new QPushButton(VehicleRunPage);
        btn_VehicleRun_help->setObjectName(QString::fromUtf8("btn_VehicleRun_help"));
        btn_VehicleRun_help->setGeometry(QRect(950, 20, 61, 61));
        btn_VehicleRun_help->setStyleSheet(QString::fromUtf8("border-image: url(:/image/help.png);"));
        label_2 = new QLabel(VehicleRunPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 1024, 568));
        widget = new QWidget(VehicleRunPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(40, 10, 911, 291));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setLayoutDirection(Qt::LeftToRight);
        widget->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:transparent;\n"
"}"));
        lbl_name_mc1 = new QLabel(widget);
        lbl_name_mc1->setObjectName(QString::fromUtf8("lbl_name_mc1"));
        lbl_name_mc1->setGeometry(QRect(210, 10, 66, 17));
        lbl_name_mc1->setStyleSheet(QString::fromUtf8("font-size:18px;\n"
"\n"
"color: rgb(255, 255, 255);"));
        lbl_name_mc1->setAlignment(Qt::AlignCenter);
        VehicleRun_EDCU1_MC1 = new QLabel(widget);
        VehicleRun_EDCU1_MC1->setObjectName(QString::fromUtf8("VehicleRun_EDCU1_MC1"));
        VehicleRun_EDCU1_MC1->setGeometry(QRect(180, 35, 121, 10));
        VehicleRun_EDCU1_MC1->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 208, 80);\n"
"border:1px solid;"));
        VehicleRun_EDCU2_MC1 = new QLabel(widget);
        VehicleRun_EDCU2_MC1->setObjectName(QString::fromUtf8("VehicleRun_EDCU2_MC1"));
        VehicleRun_EDCU2_MC1->setGeometry(QRect(180, 250, 121, 10));
        VehicleRun_EDCU2_MC1->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 208, 80);\n"
"border:1px solid;"));
        VehicleRun_train = new QLabel(widget);
        VehicleRun_train->setObjectName(QString::fromUtf8("VehicleRun_train"));
        VehicleRun_train->setGeometry(QRect(0, 30, 921, 241));
        VehicleRun_train->setStyleSheet(QString::fromUtf8("border-image: url(:/image/train.png);"));
        VehicleRun_motor1_MC1 = new QLabel(widget);
        VehicleRun_motor1_MC1->setObjectName(QString::fromUtf8("VehicleRun_motor1_MC1"));
        VehicleRun_motor1_MC1->setGeometry(QRect(270, 60, 31, 31));
        VehicleRun_motor1_MC1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/MotorUnknow.png);"));
        lbl_name_t = new QLabel(widget);
        lbl_name_t->setObjectName(QString::fromUtf8("lbl_name_t"));
        lbl_name_t->setGeometry(QRect(440, 10, 41, 20));
        lbl_name_t->setStyleSheet(QString::fromUtf8("font-size:18px;\n"
"\n"
"color: rgb(255, 255, 255);"));
        lbl_name_t->setAlignment(Qt::AlignCenter);
        VehicleRun_mc2Active = new QLabel(widget);
        VehicleRun_mc2Active->setObjectName(QString::fromUtf8("VehicleRun_mc2Active"));
        VehicleRun_mc2Active->setGeometry(QRect(840, 130, 51, 31));
        VehicleRun_mc2Active->setStyleSheet(QString::fromUtf8("border-image: url(:/image/MC2Active.png);"));
        lbl_name_mc2 = new QLabel(widget);
        lbl_name_mc2->setObjectName(QString::fromUtf8("lbl_name_mc2"));
        lbl_name_mc2->setGeometry(QRect(640, 10, 66, 17));
        lbl_name_mc2->setStyleSheet(QString::fromUtf8("font-size:18px;\n"
"\n"
"color: rgb(255, 255, 255);"));
        lbl_name_mc2->setAlignment(Qt::AlignCenter);
        VehicleRun_motor2_MC1 = new QLabel(widget);
        VehicleRun_motor2_MC1->setObjectName(QString::fromUtf8("VehicleRun_motor2_MC1"));
        VehicleRun_motor2_MC1->setGeometry(QRect(180, 60, 31, 31));
        VehicleRun_motor2_MC1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/MotorUnknow.png);"));
        VehicleRun_mc1Active = new QLabel(widget);
        VehicleRun_mc1Active->setObjectName(QString::fromUtf8("VehicleRun_mc1Active"));
        VehicleRun_mc1Active->setGeometry(QRect(10, 130, 51, 31));
        VehicleRun_mc1Active->setStyleSheet(QString::fromUtf8("border-image: url(:/image/MC1Active.png);"));
        VehicleRun_BCU1_MC1 = new QLabel(widget);
        VehicleRun_BCU1_MC1->setObjectName(QString::fromUtf8("VehicleRun_BCU1_MC1"));
        VehicleRun_BCU1_MC1->setGeometry(QRect(180, 220, 41, 21));
        VehicleRun_BCU1_MC1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Bunknown.png);"));
        VehicleRun_ACP_MC1 = new QLabel(widget);
        VehicleRun_ACP_MC1->setObjectName(QString::fromUtf8("VehicleRun_ACP_MC1"));
        VehicleRun_ACP_MC1->setGeometry(QRect(225, 90, 31, 31));
        VehicleRun_ACP_MC1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/ACPUnknow.png);"));
        VehicleRun_BCU2_MC1 = new QLabel(widget);
        VehicleRun_BCU2_MC1->setObjectName(QString::fromUtf8("VehicleRun_BCU2_MC1"));
        VehicleRun_BCU2_MC1->setGeometry(QRect(260, 220, 41, 21));
        VehicleRun_BCU2_MC1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Bunknown.png);"));
        VehicleRun_HVAC_MC1 = new QLabel(widget);
        VehicleRun_HVAC_MC1->setObjectName(QString::fromUtf8("VehicleRun_HVAC_MC1"));
        VehicleRun_HVAC_MC1->setGeometry(QRect(225, 130, 31, 31));
        VehicleRun_HVAC_MC1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/HVACoff.png);"));
        VehicleRun_OutTemp_MC1 = new QLabel(widget);
        VehicleRun_OutTemp_MC1->setObjectName(QString::fromUtf8("VehicleRun_OutTemp_MC1"));
        VehicleRun_OutTemp_MC1->setGeometry(QRect(175, 160, 131, 20));
        VehicleRun_OutTemp_MC1->setStyleSheet(QString::fromUtf8("color:black"));
        VehicleRun_OutTemp_MC1->setAlignment(Qt::AlignCenter);
        VehicleRun_BCCU_T = new QLabel(widget);
        VehicleRun_BCCU_T->setObjectName(QString::fromUtf8("VehicleRun_BCCU_T"));
        VehicleRun_BCCU_T->setGeometry(QRect(410, 60, 31, 31));
        VehicleRun_BCCU_T->setStyleSheet(QString::fromUtf8("border-image: url(:/image/DCDCUnknow.bmp);"));
        VehicleRun_ACU_T = new QLabel(widget);
        VehicleRun_ACU_T->setObjectName(QString::fromUtf8("VehicleRun_ACU_T"));
        VehicleRun_ACU_T->setGeometry(QRect(480, 60, 31, 31));
        VehicleRun_ACU_T->setStyleSheet(QString::fromUtf8("border-image: url(:/image/SIVUnknow.bmp);"));
        VehicleRun_BCU2_T = new QLabel(widget);
        VehicleRun_BCU2_T->setObjectName(QString::fromUtf8("VehicleRun_BCU2_T"));
        VehicleRun_BCU2_T->setGeometry(QRect(480, 220, 41, 21));
        VehicleRun_BCU2_T->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Bunknown.png);"));
        VehicleRun_EDCU2_T = new QLabel(widget);
        VehicleRun_EDCU2_T->setObjectName(QString::fromUtf8("VehicleRun_EDCU2_T"));
        VehicleRun_EDCU2_T->setGeometry(QRect(400, 250, 121, 10));
        VehicleRun_EDCU2_T->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 208, 80);\n"
"border:1px solid;"));
        VehicleRun_HVAC_T = new QLabel(widget);
        VehicleRun_HVAC_T->setObjectName(QString::fromUtf8("VehicleRun_HVAC_T"));
        VehicleRun_HVAC_T->setGeometry(QRect(450, 130, 31, 31));
        VehicleRun_HVAC_T->setStyleSheet(QString::fromUtf8("border-image: url(:/image/HVACoff.png);"));
        VehicleRun_OutTemp_T = new QLabel(widget);
        VehicleRun_OutTemp_T->setObjectName(QString::fromUtf8("VehicleRun_OutTemp_T"));
        VehicleRun_OutTemp_T->setGeometry(QRect(400, 160, 131, 20));
        VehicleRun_OutTemp_T->setStyleSheet(QString::fromUtf8("color:black"));
        VehicleRun_OutTemp_T->setAlignment(Qt::AlignCenter);
        VehicleRun_BCU1_T = new QLabel(widget);
        VehicleRun_BCU1_T->setObjectName(QString::fromUtf8("VehicleRun_BCU1_T"));
        VehicleRun_BCU1_T->setGeometry(QRect(410, 220, 41, 21));
        VehicleRun_BCU1_T->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Bunknown.png);"));
        VehicleRun_EDCU1_T = new QLabel(widget);
        VehicleRun_EDCU1_T->setObjectName(QString::fromUtf8("VehicleRun_EDCU1_T"));
        VehicleRun_EDCU1_T->setGeometry(QRect(400, 35, 121, 10));
        VehicleRun_EDCU1_T->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 208, 80);\n"
"border:1px solid;"));
        VehicleRun_ACP_MC2 = new QLabel(widget);
        VehicleRun_ACP_MC2->setObjectName(QString::fromUtf8("VehicleRun_ACP_MC2"));
        VehicleRun_ACP_MC2->setGeometry(QRect(655, 90, 31, 31));
        VehicleRun_ACP_MC2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/ACPUnknow.png);"));
        VehicleRun_motor2_MC2 = new QLabel(widget);
        VehicleRun_motor2_MC2->setObjectName(QString::fromUtf8("VehicleRun_motor2_MC2"));
        VehicleRun_motor2_MC2->setGeometry(QRect(610, 60, 31, 31));
        VehicleRun_motor2_MC2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/MotorUnknow.png);"));
        VehicleRun_BCU2_MC2 = new QLabel(widget);
        VehicleRun_BCU2_MC2->setObjectName(QString::fromUtf8("VehicleRun_BCU2_MC2"));
        VehicleRun_BCU2_MC2->setGeometry(QRect(690, 220, 41, 21));
        VehicleRun_BCU2_MC2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Bunknown.png);"));
        VehicleRun_EDCU2_MC2 = new QLabel(widget);
        VehicleRun_EDCU2_MC2->setObjectName(QString::fromUtf8("VehicleRun_EDCU2_MC2"));
        VehicleRun_EDCU2_MC2->setGeometry(QRect(610, 250, 121, 10));
        VehicleRun_EDCU2_MC2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 208, 80);\n"
"border:1px solid;"));
        VehicleRun_HVAC_MC2 = new QLabel(widget);
        VehicleRun_HVAC_MC2->setObjectName(QString::fromUtf8("VehicleRun_HVAC_MC2"));
        VehicleRun_HVAC_MC2->setGeometry(QRect(655, 130, 31, 31));
        VehicleRun_HVAC_MC2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/HVACoff.png);"));
        VehicleRun_OutTemp_MC2 = new QLabel(widget);
        VehicleRun_OutTemp_MC2->setObjectName(QString::fromUtf8("VehicleRun_OutTemp_MC2"));
        VehicleRun_OutTemp_MC2->setGeometry(QRect(605, 160, 131, 20));
        VehicleRun_OutTemp_MC2->setStyleSheet(QString::fromUtf8("color:black"));
        VehicleRun_OutTemp_MC2->setAlignment(Qt::AlignCenter);
        VehicleRun_motor1_MC2 = new QLabel(widget);
        VehicleRun_motor1_MC2->setObjectName(QString::fromUtf8("VehicleRun_motor1_MC2"));
        VehicleRun_motor1_MC2->setGeometry(QRect(700, 60, 31, 31));
        VehicleRun_motor1_MC2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/MotorUnknow.png);"));
        VehicleRun_BCU1_MC2 = new QLabel(widget);
        VehicleRun_BCU1_MC2->setObjectName(QString::fromUtf8("VehicleRun_BCU1_MC2"));
        VehicleRun_BCU1_MC2->setGeometry(QRect(610, 220, 41, 21));
        VehicleRun_BCU1_MC2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/Bunknown.png);"));
        VehicleRun_EDCU1_MC2 = new QLabel(widget);
        VehicleRun_EDCU1_MC2->setObjectName(QString::fromUtf8("VehicleRun_EDCU1_MC2"));
        VehicleRun_EDCU1_MC2->setGeometry(QRect(610, 35, 121, 10));
        VehicleRun_EDCU1_MC2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 208, 80);\n"
"border:1px solid;"));
        VehicleRun_PECU1_1_MC1 = new QLabel(widget);
        VehicleRun_PECU1_1_MC1->setObjectName(QString::fromUtf8("VehicleRun_PECU1_1_MC1"));
        VehicleRun_PECU1_1_MC1->setGeometry(QRect(160, 190, 16, 16));
        VehicleRun_PECU1_1_MC1->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_2_MC1 = new QLabel(widget);
        VehicleRun_PECU1_2_MC1->setObjectName(QString::fromUtf8("VehicleRun_PECU1_2_MC1"));
        VehicleRun_PECU1_2_MC1->setGeometry(QRect(190, 190, 16, 16));
        VehicleRun_PECU1_2_MC1->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_3_MC1 = new QLabel(widget);
        VehicleRun_PECU1_3_MC1->setObjectName(QString::fromUtf8("VehicleRun_PECU1_3_MC1"));
        VehicleRun_PECU1_3_MC1->setGeometry(QRect(220, 190, 16, 16));
        VehicleRun_PECU1_3_MC1->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_1_MC1 = new QLabel(widget);
        VehicleRun_PECU2_1_MC1->setObjectName(QString::fromUtf8("VehicleRun_PECU2_1_MC1"));
        VehicleRun_PECU2_1_MC1->setGeometry(QRect(250, 190, 16, 16));
        VehicleRun_PECU2_1_MC1->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_2_MC1 = new QLabel(widget);
        VehicleRun_PECU2_2_MC1->setObjectName(QString::fromUtf8("VehicleRun_PECU2_2_MC1"));
        VehicleRun_PECU2_2_MC1->setGeometry(QRect(280, 190, 16, 16));
        VehicleRun_PECU2_2_MC1->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_3_MC1 = new QLabel(widget);
        VehicleRun_PECU2_3_MC1->setObjectName(QString::fromUtf8("VehicleRun_PECU2_3_MC1"));
        VehicleRun_PECU2_3_MC1->setGeometry(QRect(310, 190, 16, 16));
        VehicleRun_PECU2_3_MC1->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_3_T = new QLabel(widget);
        VehicleRun_PECU1_3_T->setObjectName(QString::fromUtf8("VehicleRun_PECU1_3_T"));
        VehicleRun_PECU1_3_T->setGeometry(QRect(440, 190, 16, 16));
        VehicleRun_PECU1_3_T->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_1_T = new QLabel(widget);
        VehicleRun_PECU2_1_T->setObjectName(QString::fromUtf8("VehicleRun_PECU2_1_T"));
        VehicleRun_PECU2_1_T->setGeometry(QRect(470, 190, 16, 16));
        VehicleRun_PECU2_1_T->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_3_T = new QLabel(widget);
        VehicleRun_PECU2_3_T->setObjectName(QString::fromUtf8("VehicleRun_PECU2_3_T"));
        VehicleRun_PECU2_3_T->setGeometry(QRect(530, 190, 16, 16));
        VehicleRun_PECU2_3_T->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_2_T = new QLabel(widget);
        VehicleRun_PECU1_2_T->setObjectName(QString::fromUtf8("VehicleRun_PECU1_2_T"));
        VehicleRun_PECU1_2_T->setGeometry(QRect(410, 190, 16, 16));
        VehicleRun_PECU1_2_T->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_2_T = new QLabel(widget);
        VehicleRun_PECU2_2_T->setObjectName(QString::fromUtf8("VehicleRun_PECU2_2_T"));
        VehicleRun_PECU2_2_T->setGeometry(QRect(500, 190, 16, 16));
        VehicleRun_PECU2_2_T->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_1_T = new QLabel(widget);
        VehicleRun_PECU1_1_T->setObjectName(QString::fromUtf8("VehicleRun_PECU1_1_T"));
        VehicleRun_PECU1_1_T->setGeometry(QRect(380, 190, 16, 16));
        VehicleRun_PECU1_1_T->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_3_MC2 = new QLabel(widget);
        VehicleRun_PECU1_3_MC2->setObjectName(QString::fromUtf8("VehicleRun_PECU1_3_MC2"));
        VehicleRun_PECU1_3_MC2->setGeometry(QRect(650, 190, 16, 16));
        VehicleRun_PECU1_3_MC2->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_1_MC2 = new QLabel(widget);
        VehicleRun_PECU2_1_MC2->setObjectName(QString::fromUtf8("VehicleRun_PECU2_1_MC2"));
        VehicleRun_PECU2_1_MC2->setGeometry(QRect(680, 190, 16, 16));
        VehicleRun_PECU2_1_MC2->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_3_MC2 = new QLabel(widget);
        VehicleRun_PECU2_3_MC2->setObjectName(QString::fromUtf8("VehicleRun_PECU2_3_MC2"));
        VehicleRun_PECU2_3_MC2->setGeometry(QRect(740, 190, 16, 16));
        VehicleRun_PECU2_3_MC2->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_2_MC2 = new QLabel(widget);
        VehicleRun_PECU1_2_MC2->setObjectName(QString::fromUtf8("VehicleRun_PECU1_2_MC2"));
        VehicleRun_PECU1_2_MC2->setGeometry(QRect(620, 190, 16, 16));
        VehicleRun_PECU1_2_MC2->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU2_2_MC2 = new QLabel(widget);
        VehicleRun_PECU2_2_MC2->setObjectName(QString::fromUtf8("VehicleRun_PECU2_2_MC2"));
        VehicleRun_PECU2_2_MC2->setGeometry(QRect(710, 190, 16, 16));
        VehicleRun_PECU2_2_MC2->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_PECU1_1_MC2 = new QLabel(widget);
        VehicleRun_PECU1_1_MC2->setObjectName(QString::fromUtf8("VehicleRun_PECU1_1_MC2"));
        VehicleRun_PECU1_1_MC2->setGeometry(QRect(590, 190, 16, 16));
        VehicleRun_PECU1_1_MC2->setStyleSheet(QString::fromUtf8("border:1px solid black;\n"
"border-radius:8px;\n"
"background-color:white;"));
        VehicleRun_train->raise();
        lbl_name_mc1->raise();
        VehicleRun_EDCU1_MC1->raise();
        VehicleRun_EDCU2_MC1->raise();
        VehicleRun_motor1_MC1->raise();
        lbl_name_t->raise();
        VehicleRun_mc2Active->raise();
        lbl_name_mc2->raise();
        VehicleRun_motor2_MC1->raise();
        VehicleRun_mc1Active->raise();
        VehicleRun_BCU1_MC1->raise();
        VehicleRun_ACP_MC1->raise();
        VehicleRun_BCU2_MC1->raise();
        VehicleRun_HVAC_MC1->raise();
        VehicleRun_OutTemp_MC1->raise();
        VehicleRun_BCCU_T->raise();
        VehicleRun_ACU_T->raise();
        VehicleRun_BCU2_T->raise();
        VehicleRun_EDCU2_T->raise();
        VehicleRun_HVAC_T->raise();
        VehicleRun_OutTemp_T->raise();
        VehicleRun_BCU1_T->raise();
        VehicleRun_EDCU1_T->raise();
        VehicleRun_ACP_MC2->raise();
        VehicleRun_motor2_MC2->raise();
        VehicleRun_BCU2_MC2->raise();
        VehicleRun_EDCU2_MC2->raise();
        VehicleRun_HVAC_MC2->raise();
        VehicleRun_OutTemp_MC2->raise();
        VehicleRun_motor1_MC2->raise();
        VehicleRun_BCU1_MC2->raise();
        VehicleRun_EDCU1_MC2->raise();
        VehicleRun_PECU1_1_MC1->raise();
        VehicleRun_PECU1_2_MC1->raise();
        VehicleRun_PECU1_3_MC1->raise();
        VehicleRun_PECU2_1_MC1->raise();
        VehicleRun_PECU2_2_MC1->raise();
        VehicleRun_PECU2_3_MC1->raise();
        VehicleRun_PECU1_3_T->raise();
        VehicleRun_PECU2_1_T->raise();
        VehicleRun_PECU2_3_T->raise();
        VehicleRun_PECU1_2_T->raise();
        VehicleRun_PECU2_2_T->raise();
        VehicleRun_PECU1_1_T->raise();
        VehicleRun_PECU1_3_MC2->raise();
        VehicleRun_PECU2_1_MC2->raise();
        VehicleRun_PECU2_3_MC2->raise();
        VehicleRun_PECU1_2_MC2->raise();
        VehicleRun_PECU2_2_MC2->raise();
        VehicleRun_PECU1_1_MC2->raise();
        widget_2 = new QWidget(VehicleRunPage);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(650, 300, 141, 271));
        Barlabel_left_15 = new QLabel(widget_2);
        Barlabel_left_15->setObjectName(QString::fromUtf8("Barlabel_left_15"));
        Barlabel_left_15->setGeometry(QRect(30, 40, 10, 91));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Barlabel_left_15->sizePolicy().hasHeightForWidth());
        Barlabel_left_15->setSizePolicy(sizePolicy1);
        Barlabel_left_15->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);\n"
"border-color: rgb(0, 0, 0);"));
        label_30 = new QLabel(widget_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(100, 80, 31, 16));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_31 = new QLabel(widget_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(60, 63, 5, 1));
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_32 = new QLabel(widget_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(30, 222, 35, 1));
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_33 = new QLabel(widget_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(40, 41, 1, 181));
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Barlabel_left_16 = new QLabel(widget_2);
        Barlabel_left_16->setObjectName(QString::fromUtf8("Barlabel_left_16"));
        Barlabel_left_16->setGeometry(QRect(50, 130, 10, 91));
        Barlabel_left_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_34 = new QLabel(widget_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(100, 125, 31, 16));
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_35 = new QLabel(widget_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(60, 175, 10, 1));
        label_35->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_36 = new QLabel(widget_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(60, 41, 1, 181));
        label_36->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_37 = new QLabel(widget_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(100, 170, 31, 16));
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_38 = new QLabel(widget_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(50, 41, 1, 181));
        label_38->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_39 = new QLabel(widget_2);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(60, 110, 5, 1));
        label_39->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Barlabel_right_4 = new QLabel(widget_2);
        Barlabel_right_4->setObjectName(QString::fromUtf8("Barlabel_right_4"));
        Barlabel_right_4->setGeometry(QRect(50, 40, 10, 91));
        Barlabel_right_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 255, 0);\n"
"border-color: rgb(0, 0, 0);"));
        label_40 = new QLabel(widget_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(80, 210, 51, 20));
        label_40->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Barlabel_TraBrakevalue = new QLabel(widget_2);
        Barlabel_TraBrakevalue->setObjectName(QString::fromUtf8("Barlabel_TraBrakevalue"));
        Barlabel_TraBrakevalue->setGeometry(QRect(40, 162, 10, 60));
        Barlabel_TraBrakevalue->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_41 = new QLabel(widget_2);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(30, 41, 1, 181));
        label_41->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Barlabel_left_19 = new QLabel(widget_2);
        Barlabel_left_19->setObjectName(QString::fromUtf8("Barlabel_left_19"));
        Barlabel_left_19->setGeometry(QRect(30, 130, 10, 91));
        Barlabel_left_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        Barlabel_TraBrakeLine = new QLabel(widget_2);
        Barlabel_TraBrakeLine->setObjectName(QString::fromUtf8("Barlabel_TraBrakeLine"));
        Barlabel_TraBrakeLine->setGeometry(QRect(30, 160, 40, 5));
        Barlabel_TraBrakeLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        label_42 = new QLabel(widget_2);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(30, 40, 40, 1));
        label_42->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_43 = new QLabel(widget_2);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(90, 40, 41, 16));
        label_43->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_44 = new QLabel(widget_2);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(60, 85, 10, 1));
        label_44->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_45 = new QLabel(widget_2);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(60, 130, 10, 1));
        label_45->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_46 = new QLabel(widget_2);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(60, 153, 5, 1));
        label_46->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_47 = new QLabel(widget_2);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(60, 200, 5, 1));
        label_47->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lbl_name_tracBrk = new QLabel(widget_2);
        lbl_name_tracBrk->setObjectName(QString::fromUtf8("lbl_name_tracBrk"));
        lbl_name_tracBrk->setGeometry(QRect(10, 240, 121, 17));
        lbl_name_tracBrk->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"\n"
"color: rgb(255, 255, 255);"));
        Barlabel_left_16->raise();
        Barlabel_left_19->raise();
        Barlabel_left_15->raise();
        Barlabel_right_4->raise();
        label_30->raise();
        label_31->raise();
        label_32->raise();
        label_33->raise();
        label_34->raise();
        label_35->raise();
        label_36->raise();
        label_37->raise();
        label_38->raise();
        label_39->raise();
        label_40->raise();
        Barlabel_TraBrakevalue->raise();
        label_41->raise();
        label_42->raise();
        label_43->raise();
        label_44->raise();
        label_45->raise();
        label_46->raise();
        label_47->raise();
        Barlabel_TraBrakeLine->raise();
        lbl_name_tracBrk->raise();
        BatteryBar = new QWidget(VehicleRunPage);
        BatteryBar->setObjectName(QString::fromUtf8("BatteryBar"));
        BatteryBar->setEnabled(true);
        BatteryBar->setGeometry(QRect(210, 300, 141, 271));
        BatteryBar->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 145, 255);"));
        Barlabel_left = new QLabel(BatteryBar);
        Barlabel_left->setObjectName(QString::fromUtf8("Barlabel_left"));
        Barlabel_left->setGeometry(QRect(30, 59, 10, 84));
        Barlabel_left->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"border-color: rgb(0, 0, 0);"));
        label = new QLabel(BatteryBar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 55, 41, 16));
        label_5 = new QLabel(BatteryBar);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 60, 35, 1));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_8 = new QLabel(BatteryBar);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 220, 35, 1));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_12 = new QLabel(BatteryBar);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 41, 1, 180));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Barlabel_left_5 = new QLabel(BatteryBar);
        Barlabel_left_5->setObjectName(QString::fromUtf8("Barlabel_left_5"));
        Barlabel_left_5->setGeometry(QRect(50, 190, 10, 30));
        Barlabel_left_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        label_3 = new QLabel(BatteryBar);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 132, 66, 15));
        label_7 = new QLabel(BatteryBar);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 190, 35, 1));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_10 = new QLabel(BatteryBar);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 41, 1, 180));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_4 = new QLabel(BatteryBar);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 182, 66, 15));
        label_11 = new QLabel(BatteryBar);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 41, 1, 180));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_6 = new QLabel(BatteryBar);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 140, 35, 1));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Barlabel_right_2 = new QLabel(BatteryBar);
        Barlabel_right_2->setObjectName(QString::fromUtf8("Barlabel_right_2"));
        Barlabel_right_2->setGeometry(QRect(50, 60, 10, 84));
        Barlabel_right_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 0);\n"
"border-color: rgb(0, 0, 0);"));
        Barlabel_left_2 = new QLabel(BatteryBar);
        Barlabel_left_2->setObjectName(QString::fromUtf8("Barlabel_left_2"));
        Barlabel_left_2->setGeometry(QRect(30, 140, 10, 50));
        Barlabel_left_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 130, 0);\n"
"border-color: rgb(0, 0, 0);"));
        label_9 = new QLabel(BatteryBar);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 212, 31, 16));
        Barlabel_left_3 = new QLabel(BatteryBar);
        Barlabel_left_3->setObjectName(QString::fromUtf8("Barlabel_left_3"));
        Barlabel_left_3->setGeometry(QRect(50, 140, 10, 50));
        Barlabel_left_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 130, 0);\n"
"\n"
"border-color: rgb(0, 0, 0);"));
        Barlabel_LowVoltagevalue = new QLabel(BatteryBar);
        Barlabel_LowVoltagevalue->setObjectName(QString::fromUtf8("Barlabel_LowVoltagevalue"));
        Barlabel_LowVoltagevalue->setGeometry(QRect(40, 160, 10, 60));
        Barlabel_LowVoltagevalue->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_13 = new QLabel(BatteryBar);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 41, 1, 180));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        Barlabel_left_4 = new QLabel(BatteryBar);
        Barlabel_left_4->setObjectName(QString::fromUtf8("Barlabel_left_4"));
        Barlabel_left_4->setGeometry(QRect(30, 190, 10, 30));
        Barlabel_left_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        Barlabel_LowVoltagevalueLine = new QLabel(BatteryBar);
        Barlabel_LowVoltagevalueLine->setObjectName(QString::fromUtf8("Barlabel_LowVoltagevalueLine"));
        Barlabel_LowVoltagevalueLine->setGeometry(QRect(30, 160, 40, 5));
        Barlabel_LowVoltagevalueLine->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        Barlabel_left_6 = new QLabel(BatteryBar);
        Barlabel_left_6->setObjectName(QString::fromUtf8("Barlabel_left_6"));
        Barlabel_left_6->setGeometry(QRect(30, 40, 10, 20));
        Barlabel_left_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);\n"
"border-color: rgb(0, 0, 0);"));
        Barlabel_left_7 = new QLabel(BatteryBar);
        Barlabel_left_7->setObjectName(QString::fromUtf8("Barlabel_left_7"));
        Barlabel_left_7->setGeometry(QRect(50, 40, 10, 20));
        Barlabel_left_7->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);\n"
"border-color: rgb(0, 0, 0);"));
        label_14 = new QLabel(BatteryBar);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 40, 35, 1));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_15 = new QLabel(BatteryBar);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(90, 30, 41, 16));
        lbl_name_voltage = new QLabel(BatteryBar);
        lbl_name_voltage->setObjectName(QString::fromUtf8("lbl_name_voltage"));
        lbl_name_voltage->setGeometry(QRect(30, 240, 91, 17));
        lbl_name_voltage->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"\n"
"color: rgb(255, 255, 255);"));
        Barlabel_left->raise();
        Barlabel_right_2->raise();
        Barlabel_left_5->raise();
        Barlabel_left_4->raise();
        Barlabel_left_3->raise();
        Barlabel_left_2->raise();
        Barlabel_left_7->raise();
        Barlabel_left_6->raise();
        label->raise();
        label_5->raise();
        label_8->raise();
        label_12->raise();
        label_3->raise();
        label_7->raise();
        label_10->raise();
        label_4->raise();
        label_11->raise();
        label_6->raise();
        label_9->raise();
        Barlabel_LowVoltagevalue->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        Barlabel_LowVoltagevalueLine->raise();
        lbl_name_voltage->raise();
        label_2->raise();
        btn_VehicleRun_help->raise();
        widget->raise();
        widget_2->raise();
        BatteryBar->raise();

        retranslateUi(VehicleRunPage);

        QMetaObject::connectSlotsByName(VehicleRunPage);
    } // setupUi

    void retranslateUi(QWidget *VehicleRunPage)
    {
        VehicleRunPage->setWindowTitle(QApplication::translate("VehicleRunPage", "Form", 0, QApplication::UnicodeUTF8));
        btn_VehicleRun_help->setText(QString());
        label_2->setText(QString());
        lbl_name_mc1->setText(QApplication::translate("VehicleRunPage", "MC1", 0, QApplication::UnicodeUTF8));
        VehicleRun_EDCU1_MC1->setText(QString());
        VehicleRun_EDCU2_MC1->setText(QString());
        VehicleRun_train->setText(QString());
        VehicleRun_motor1_MC1->setText(QString());
        lbl_name_t->setText(QApplication::translate("VehicleRunPage", "T", 0, QApplication::UnicodeUTF8));
        VehicleRun_mc2Active->setText(QString());
        lbl_name_mc2->setText(QApplication::translate("VehicleRunPage", "MC2", 0, QApplication::UnicodeUTF8));
        VehicleRun_motor2_MC1->setText(QString());
        VehicleRun_mc1Active->setText(QString());
        VehicleRun_BCU1_MC1->setText(QString());
        VehicleRun_ACP_MC1->setText(QString());
        VehicleRun_BCU2_MC1->setText(QString());
        VehicleRun_HVAC_MC1->setText(QString());
        VehicleRun_OutTemp_MC1->setText(QApplication::translate("VehicleRunPage", "23\342\204\203", 0, QApplication::UnicodeUTF8));
        VehicleRun_BCCU_T->setText(QString());
        VehicleRun_ACU_T->setText(QString());
        VehicleRun_BCU2_T->setText(QString());
        VehicleRun_EDCU2_T->setText(QString());
        VehicleRun_HVAC_T->setText(QString());
        VehicleRun_OutTemp_T->setText(QApplication::translate("VehicleRunPage", "23\342\204\203", 0, QApplication::UnicodeUTF8));
        VehicleRun_BCU1_T->setText(QString());
        VehicleRun_EDCU1_T->setText(QString());
        VehicleRun_ACP_MC2->setText(QString());
        VehicleRun_motor2_MC2->setText(QString());
        VehicleRun_BCU2_MC2->setText(QString());
        VehicleRun_EDCU2_MC2->setText(QString());
        VehicleRun_HVAC_MC2->setText(QString());
        VehicleRun_OutTemp_MC2->setText(QApplication::translate("VehicleRunPage", "23\342\204\203", 0, QApplication::UnicodeUTF8));
        VehicleRun_motor1_MC2->setText(QString());
        VehicleRun_BCU1_MC2->setText(QString());
        VehicleRun_EDCU1_MC2->setText(QString());
        VehicleRun_PECU1_1_MC1->setText(QString());
        VehicleRun_PECU1_2_MC1->setText(QString());
        VehicleRun_PECU1_3_MC1->setText(QString());
        VehicleRun_PECU2_1_MC1->setText(QString());
        VehicleRun_PECU2_2_MC1->setText(QString());
        VehicleRun_PECU2_3_MC1->setText(QString());
        VehicleRun_PECU1_3_T->setText(QString());
        VehicleRun_PECU2_1_T->setText(QString());
        VehicleRun_PECU2_3_T->setText(QString());
        VehicleRun_PECU1_2_T->setText(QString());
        VehicleRun_PECU2_2_T->setText(QString());
        VehicleRun_PECU1_1_T->setText(QString());
        VehicleRun_PECU1_3_MC2->setText(QString());
        VehicleRun_PECU2_1_MC2->setText(QString());
        VehicleRun_PECU2_3_MC2->setText(QString());
        VehicleRun_PECU1_2_MC2->setText(QString());
        VehicleRun_PECU2_2_MC2->setText(QString());
        VehicleRun_PECU1_1_MC2->setText(QString());
        Barlabel_left_15->setText(QString());
        label_30->setText(QApplication::translate("VehicleRunPage", "50%", 0, QApplication::UnicodeUTF8));
        label_31->setText(QString());
        label_32->setText(QString());
        label_33->setText(QString());
        Barlabel_left_16->setText(QString());
        label_34->setText(QApplication::translate("VehicleRunPage", "0% ", 0, QApplication::UnicodeUTF8));
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QApplication::translate("VehicleRunPage", "50%", 0, QApplication::UnicodeUTF8));
        label_38->setText(QString());
        label_39->setText(QString());
        Barlabel_right_4->setText(QString());
        label_40->setText(QApplication::translate("VehicleRunPage", "-100%", 0, QApplication::UnicodeUTF8));
        Barlabel_TraBrakevalue->setText(QString());
        label_41->setText(QString());
        Barlabel_left_19->setText(QString());
        Barlabel_TraBrakeLine->setText(QString());
        label_42->setText(QString());
        label_43->setText(QApplication::translate("VehicleRunPage", "100%", 0, QApplication::UnicodeUTF8));
        label_44->setText(QString());
        label_45->setText(QString());
        label_46->setText(QString());
        label_47->setText(QString());
        lbl_name_tracBrk->setText(QApplication::translate("VehicleRunPage", "\347\211\265\345\274\225\345\210\266\345\212\250\347\231\276\345\210\206\346\257\224", 0, QApplication::UnicodeUTF8));
        Barlabel_left->setText(QString());
        label->setText(QApplication::translate("VehicleRunPage", "28.0 V", 0, QApplication::UnicodeUTF8));
        label_5->setText(QString());
        label_8->setText(QString());
        label_12->setText(QString());
        Barlabel_left_5->setText(QString());
        label_3->setText(QApplication::translate("VehicleRunPage", "25.0 V", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_10->setText(QString());
        label_4->setText(QApplication::translate("VehicleRunPage", "15.0 V", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_6->setText(QString());
        Barlabel_right_2->setText(QString());
        Barlabel_left_2->setText(QString());
        label_9->setText(QApplication::translate("VehicleRunPage", "0 V", 0, QApplication::UnicodeUTF8));
        Barlabel_left_3->setText(QString());
        Barlabel_LowVoltagevalue->setText(QString());
        label_13->setText(QString());
        Barlabel_left_4->setText(QString());
        Barlabel_LowVoltagevalueLine->setText(QString());
        Barlabel_left_6->setText(QString());
        Barlabel_left_7->setText(QString());
        label_14->setText(QString());
        label_15->setText(QApplication::translate("VehicleRunPage", "30.0 V", 0, QApplication::UnicodeUTF8));
        lbl_name_voltage->setText(QApplication::translate("VehicleRunPage", "\350\223\204\347\224\265\346\261\240\347\224\265\345\216\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VehicleRunPage: public Ui_VehicleRunPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLERUNPAGE_H
