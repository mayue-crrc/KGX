#include "vehicleparasetpage.h"
#include "ui_vehicleparasetpage.h"
#include "qdebug.h"

VehicleParaSetPage::VehicleParaSetPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleParaSetPage)
{
    ui->setupUi(this);
    inputmodule = new CtrlInputModule(this);
    inputmodule->setGeometry(150,50,inputmodule->width(),inputmodule->height());
    inputmodule->hide();

    QList<QPushButton*> buttons;
    buttons<<ui->btn_wheelSetValue_MC1_1 << ui->btn_wheelSetValue_MC1_2 << ui->btn_wheelSetValue_T_1 << ui->btn_wheelSetValue_T_2
             <<ui->btn_wheelSetValue_MC2_1 << ui->btn_wheelSetValue_MC2_2 <<ui->btn_Number;
    foreach(QPushButton* btns,buttons)
    {
        connect(btns,SIGNAL(clicked()),this,SLOT(InputSelectEvent()));
    }
    timer3scount[0] = 0;
    timer3scount[1] = 0;

}

VehicleParaSetPage::~VehicleParaSetPage()
{
    delete ui;
}

void VehicleParaSetPage::on_btn_back_clicked()
{
    changePage(uVehicleSettingSelectPage);
}


void VehicleParaSetPage::InputSelectEvent()
{
    m_inputtype = ((QPushButton *)this->sender())->whatsThis();
    if(m_inputtype == "Number")
    {
        inputmodule->setInputmode(2);
    }
    else
    {
        inputmodule->setInputmode(1);
    }
    inputmodule->show();
}

void VehicleParaSetPage::updatePage()
{
    if(m_inputtype == "MC1_1")
    {
        //this->database->HMiCT_Wheel1_TP1_U8 = inputmodule->getInputmodulevalue().toInt() - 580;
        ui->btn_wheelSetValue_MC1_1->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }
    else if(m_inputtype == "MC1_2")
    {
        ui->btn_wheelSetValue_MC1_2->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }
    else if(m_inputtype == "T_1")
    {
        ui->btn_wheelSetValue_T_1->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }
    else if(m_inputtype == "T_2")
    {
        ui->btn_wheelSetValue_T_2->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }
    else if(m_inputtype == "MC2_1")
    {
        ui->btn_wheelSetValue_MC2_1->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }
    else if(m_inputtype == "MC2_2")
    {
        ui->btn_wheelSetValue_MC2_2->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }
    else if(m_inputtype == "Number")
    {
        ui->btn_Number->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
    }

    if(1)//this->database->HMiCT_WheelSet_B1)
    {
        if(timer3scount[0]++ > 10)
        {
            timer3scount[0] = 0;
            //this->database->HMiCT_WheelSet_B1  =false;
            ui->btn_wheelConfirm->setStyleSheet(MY_BUTTON_UP);
            ui->btn_wheelConfirm->setEnabled(true);
        }
    }else
    {
        timer3scount[0] = 0;
        ui->btn_wheelConfirm->setStyleSheet(MY_BUTTON_UP);
        ui->btn_wheelConfirm->setEnabled(true);
    }

    if(1)//this->database->HMiCT_SaveTrainNum_B1)
    {
        if(timer3scount[1]++ > 10)
        {
            timer3scount[1] = 0;
            //this->database->HMiCT_SaveTrainNum_B1 = false;
            ui->btn_numberConfirm->setStyleSheet(MY_BUTTON_UP);
            ui->btn_numberConfirm->setEnabled(true);
        }
    }else
    {
        timer3scount[1] = 0;
        ui->btn_numberConfirm->setStyleSheet(MY_BUTTON_UP);
        ui->btn_numberConfirm->setEnabled(true);
    }
}

void VehicleParaSetPage::on_btn_wheelConfirm_clicked()
{
//    this->database->HMiCT_WheelSet_B1 = true;


//    ParasettingPara->set("/Wheel/Wheel1_TP1",this->database->HMiCT_Wheel1_TP1_U8);
//    ParasettingPara->set("/Wheel/Wheel2_TP1",this->database->HMiCT_Wheel2_TP1_U8);
//    ParasettingPara->set("/Wheel/Wheel3_TP1",this->database->HMiCT_Wheel3_TP1_U8);
//    ParasettingPara->set("/Wheel/Wheel4_TP1",this->database->HMiCT_Wheel4_TP1_U8);
//    ParasettingPara->set("/Wheel/Wheel1_TP2",this->database->HMiCT_Wheel1_TP2_U8);
//    ParasettingPara->set("/Wheel/Wheel2_TP2",this->database->HMiCT_Wheel2_TP2_U8);
//    ParasettingPara->set("/Wheel/Wheel3_TP2",this->database->HMiCT_Wheel3_TP2_U8);
//    ParasettingPara->set("/Wheel/Wheel4_TP2",this->database->HMiCT_Wheel4_TP2_U8);

    ui->btn_wheelConfirm->setStyleSheet(MY_BUTTON_DOWN);
    ui->btn_wheelConfirm->setEnabled(false);
}

void VehicleParaSetPage::on_btn_numberConfirm_clicked()
{
    //this->database->HMiCT_SaveTrainNum_B1 = true;

    //ParasettingPara->set("/TrainCode/Code",this->database->HMiCT_TrainNum_U8);

    //this->database->DefaultTrainCode = this->database->HMiCT_TrainNum_U8;
    ui->btn_numberConfirm->setStyleSheet(MY_BUTTON_DOWN);
    ui->btn_numberConfirm->setEnabled(false);

}
