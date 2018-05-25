#include "vehicleinitsetpage.h"
#include "ui_vehicleinitsetpage.h"

VehicleInitsetPage::VehicleInitsetPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleInitsetPage)
{
    ui->setupUi(this);
    currentpos = HMIPos->getString("/Position/HMI");
}

VehicleInitsetPage::~VehicleInitsetPage()
{
    delete ui;
}

void VehicleInitsetPage::on_btn_back_clicked()
{
    changePage(uVehicleSettingSelectPage);
}

void VehicleInitsetPage::updatePage()
{
    currentpos = HMIPos->getString("/Position/HMI");

    if(currentpos == "1")
    {
        ui->lbl_curPositon->setText("当前位置 ： MC1");
    }else if(currentpos == "2")
    {
        ui->lbl_curPositon->setText("当前位置 ： MC2");
    }else
    {
        ui->lbl_curPositon->setText("配置文件错误");
    }
}

void VehicleInitsetPage::on_btn_MC1_pressed()
{
    ui->btn_MC1->setStyleSheet(MY_BUTTON_DOWN);
}

void VehicleInitsetPage::on_btn_MC1_released()
{
    ui->btn_MC1->setStyleSheet(MY_BUTTON_UP);
    HMIPos->set("/Position/HMI",1);
}

void VehicleInitsetPage::on_btn_MC2_pressed()
{
    ui->btn_MC2->setStyleSheet(MY_BUTTON_DOWN);
}

void VehicleInitsetPage::on_btn_MC2_released()
{
    ui->btn_MC2->setStyleSheet(MY_BUTTON_UP);
    HMIPos->set("/Position/HMI",2);
}

void VehicleInitsetPage::on_btn_rebootHMI_pressed()
{
    ui->btn_rebootHMI->setStyleSheet(MY_BUTTON_DOWN);
}

void VehicleInitsetPage::on_btn_rebootHMI_released()
{
    ui->btn_rebootHMI->setStyleSheet(MY_BUTTON_UP);
    system("reboot");
}
