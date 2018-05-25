#include "vehiclehvacpage.h"
#include "ui_vehiclehvacpage.h"
#include "global.h"
#define MY_HVACBUTTON_DOWN  ("font: 75 16px ;color: rgb(255, 255, 255);background-color: rgb(0, 32, 96);border:2px  rgb(216, 216, 216);border-radius:10px;padding:2px 4px;")
#define MY_HVACBUTTON_UP    ("font: 75 16px ;color: rgb(0, 0, 0);background-color: rgb(98, 176, 255);border:2px  rgb(216, 216, 216);border-radius:10px;padding:2px 4px;")


VehicleHVACPage::VehicleHVACPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleHVACPage)
{
    ui->setupUi(this);
    allPage = 5;
    curPage = 1;
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}

VehicleHVACPage::~VehicleHVACPage()
{
    delete ui;
}

void VehicleHVACPage::on_btn_prePage_pressed()
{
    ui->btn_prePage->setStyleSheet(PAGE_BUTTON_DOWN);
}

void VehicleHVACPage::on_btn_nextPage_pressed()
{
    ui->btn_nextPage->setStyleSheet(PAGE_BUTTON_DOWN);
}

void VehicleHVACPage::on_btn_prePage_released()
{
    ui->btn_prePage->setStyleSheet(PAGE_BUTTON_UP);
    if(curPage > 1)
    {
        curPage--;
    }
    else {}
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}

void VehicleHVACPage::on_btn_nextPage_released()
{
    ui->btn_nextPage->setStyleSheet(PAGE_BUTTON_UP);
    if(curPage < allPage)
    {
       curPage++;
    }
    else {   }
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}

void VehicleHVACPage::on_VHVAC_Button_heat1_clicked()
{
    ui->VHVAC_Button_heat1->setStyleSheet(MY_HVACBUTTON_DOWN);
    ui->VHVAC_Button_heat2->setStyleSheet(MY_HVACBUTTON_UP);
}
void VehicleHVACPage::on_VHVAC_Button_heat2_clicked()
{
    ui->VHVAC_Button_heat2->setStyleSheet(MY_HVACBUTTON_DOWN);
    ui->VHVAC_Button_heat1->setStyleSheet(MY_HVACBUTTON_UP);
}

void VehicleHVACPage::on_VHVAC_Button_Tempplus2_pressed()
{
    ui->VHVAC_Button_Tempplus2->setStyleSheet(MY_HVACBUTTON_DOWN);
}

void VehicleHVACPage::on_VHVAC_Button_Tempplus2_released()
{
     ui->VHVAC_Button_Tempplus2->setStyleSheet(MY_HVACBUTTON_UP);
}
