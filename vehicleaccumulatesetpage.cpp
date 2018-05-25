#include "vehicleaccumulatesetpage.h"
#include "ui_vehicleaccumulatesetpage.h"

VehicleAccumulateSetPage::VehicleAccumulateSetPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleAccumulateSetPage)
{
    ui->setupUi(this);
    timer3scount = 0;
    inputmodule = new CtrlInputModule(this);
    inputmodule->setGeometry(150,50,inputmodule->width(),inputmodule->height());
    inputmodule->hide();
}

VehicleAccumulateSetPage::~VehicleAccumulateSetPage()
{
    delete ui;
}

void VehicleAccumulateSetPage::on_btn_back_clicked()
{
    changePage(uVehicleSettingSelectPage);
}

void VehicleAccumulateSetPage::on_btn_accumulateMileConfirm_clicked()
{
    ui->btn_accumulateMileConfirm->setStyleSheet(MY_BUTTON_DOWN);
    ui->btn_accumulateMileConfirm->setEnabled(false);
}

void VehicleAccumulateSetPage::on_btn_accumulateMile_clicked()
{
    inputmodule->setInputmode(3);
    inputmodule->show();
}
void VehicleAccumulateSetPage::updatePage()
{
     inputmodule->setInputmode(3);
     ui->btn_accumulateMile->setText(QString::number(inputmodule->getInputmodulevalue().toInt()));
     if(1)//this->database->HMiCT_WheelSet_B1)
     {
         if(timer3scount++ > 10)
         {
             timer3scount = 0;
             //this->database->HMiCT_WheelSet_B1  =false;
             ui->btn_accumulateMileConfirm->setStyleSheet(MY_BUTTON_UP);
             ui->btn_accumulateMileConfirm->setEnabled(true);
         }
     }else
     {
         timer3scount = 0;
         ui->btn_accumulateMileConfirm->setStyleSheet(MY_BUTTON_UP);
         ui->btn_accumulateMileConfirm->setEnabled(true);
     }

}
