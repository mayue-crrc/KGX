#include "vehicletcupage.h"
#include "ui_vehicletcupage.h"
#include "global.h"



VehicleTCUPage::VehicleTCUPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleTCUPage)
{
    ui->setupUi(this);
    allPage = 5;
    curPage = 1;
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}

VehicleTCUPage::~VehicleTCUPage()
{
    delete ui;
}

void VehicleTCUPage::on_btn_prePage_pressed()
{
    ui->btn_prePage->setStyleSheet(PAGE_BUTTON_DOWN);
}

void VehicleTCUPage::on_btn_prePage_released()
{
    ui->btn_prePage->setStyleSheet(PAGE_BUTTON_UP);
    if(curPage > 1)
    {
        curPage--;
    }
    else {}
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");

}

void VehicleTCUPage::on_btn_nextPage_pressed()
{
     ui->btn_nextPage->setStyleSheet(PAGE_BUTTON_DOWN);
}

void VehicleTCUPage::on_btn_nextPage_released()
{
    ui->btn_nextPage->setStyleSheet(PAGE_BUTTON_UP);
    if(curPage < allPage)
    {
       curPage++;
    }
    else {   }
    ui->lbl_pageInfo->setText("当前第"+QString::number(curPage)+"页/ 共"+QString::number(allPage)+"页");
}
