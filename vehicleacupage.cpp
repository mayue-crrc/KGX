#include "vehicleacupage.h"
#include "ui_vehicleacupage.h"
#include "global.h"

VehicleACUPage::VehicleACUPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleACUPage)
{
    ui->setupUi(this);
    allPage = 5;
    curPage = 1;
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}

VehicleACUPage::~VehicleACUPage()
{
    delete ui;
}
void VehicleACUPage::on_btn_prePage_pressed()
{
    ui->btn_prePage->setStyleSheet(PAGE_BUTTON_DOWN);
}

void VehicleACUPage::on_btn_nextPage_pressed()
{
    ui->btn_nextPage->setStyleSheet(PAGE_BUTTON_DOWN);
}

void VehicleACUPage::on_btn_prePage_released()
{
    ui->btn_prePage->setStyleSheet(PAGE_BUTTON_UP);
    if(curPage > 1)
    {
        curPage--;
    }
    else {}
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}

void VehicleACUPage::on_btn_nextPage_released()
{
    ui->btn_nextPage->setStyleSheet(PAGE_BUTTON_UP);
    if(curPage < allPage)
    {
       curPage++;
    }
    else {   }
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}
