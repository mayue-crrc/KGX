#include "vehicledebugiopage2.h"
#include "ui_vehicledebugiopage2.h"

VehicleDebugIOPage2::VehicleDebugIOPage2(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDebugIOPage2)
{
    ui->setupUi(this);
    ui->btn_MC1->setStyleSheet(MY_BUTTON_UP);
    ui->btn_T->setStyleSheet(MY_BUTTON_DOWN);
    ui->btn_MC2->setStyleSheet(MY_BUTTON_UP);
    currentpage = 1;
    maxpage = 10;
}

VehicleDebugIOPage2::~VehicleDebugIOPage2()
{
    delete ui;
}

void VehicleDebugIOPage2::on_btn_back_clicked()
{
    changePage(uVehicleSettingDebugPage);
}

void VehicleDebugIOPage2::on_btn_MC1_clicked()
{
    changePage(uVehicleDebugIOPage);
}
void VehicleDebugIOPage2::on_btn_T_clicked()
{

}

void VehicleDebugIOPage2::on_btn_MC2_clicked()
{
     changePage(uVehicleDebugIOPage3);
}

void VehicleDebugIOPage2::on_btn_prepage_clicked()
{
    if(currentpage > 1)
    {
        currentpage--;
    }
}

void VehicleDebugIOPage2::on_btn_nextpage_clicked()
{
    if(currentpage < maxpage)
    {
        currentpage ++;
    }
}

void VehicleDebugIOPage2::showEvent(QShowEvent *)
{

}

void VehicleDebugIOPage2::updatePage()
{
    ui->btn_MC1->setStyleSheet(MY_BUTTON_UP);
    ui->btn_T->setStyleSheet(MY_BUTTON_DOWN);
    ui->btn_MC2->setStyleSheet(MY_BUTTON_UP);

    ui->lbl_Page->setText(QString::number(currentpage)+ "/"+QString::number(maxpage));
}
