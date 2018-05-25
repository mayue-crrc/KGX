#include "vehicledebugiopage3.h"
#include "ui_vehicledebugiopage3.h"

VehicleDebugIOPage3::VehicleDebugIOPage3(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDebugIOPage3)
{
    ui->setupUi(this);
    ui->btn_MC1->setStyleSheet(MY_BUTTON_UP);
    ui->btn_T->setStyleSheet(MY_BUTTON_UP);
    ui->btn_MC2->setStyleSheet(MY_BUTTON_DOWN);
    currentpage = 1;
    maxpage = 10;
}

VehicleDebugIOPage3::~VehicleDebugIOPage3()
{
    delete ui;
}

void VehicleDebugIOPage3::on_btn_back_clicked()
{
    changePage(uVehicleSettingDebugPage);
}

void VehicleDebugIOPage3::on_btn_MC1_clicked()
{
     changePage(uVehicleDebugIOPage);
}
void VehicleDebugIOPage3::on_btn_T_clicked()
{
     changePage(uVehicleDebugIOPage2);
}

void VehicleDebugIOPage3::on_btn_MC2_clicked()
{

}

void VehicleDebugIOPage3::on_btn_prepage_clicked()
{
    if(currentpage > 1)
    {
        currentpage--;
    }
}

void VehicleDebugIOPage3::on_btn_nextpage_clicked()
{
    if(currentpage < maxpage)
    {
        currentpage ++;
    }
}

void VehicleDebugIOPage3::showEvent(QShowEvent *)
{

}

void VehicleDebugIOPage3::updatePage()
{
    ui->btn_MC1->setStyleSheet(MY_BUTTON_UP);
    ui->btn_T->setStyleSheet(MY_BUTTON_UP);
    ui->btn_MC2->setStyleSheet(MY_BUTTON_DOWN);
    ui->lbl_Page->setText(QString::number(currentpage)+ "/"+QString::number(maxpage));
}
