#include "vehiclevisionpage.h"
#include "ui_vehiclevisionpage.h"
#include <QPainter>
VehicleVisionPage::VehicleVisionPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleVisionPage)
{
    ui->setupUi(this);
    currentpage = 1;
    maxpage = 10;
}

VehicleVisionPage::~VehicleVisionPage()
{
    delete ui;
}
void VehicleVisionPage::on_btn_back_clicked()
{
     changePage(uVehicleSettingSelectPage);
}
void VehicleVisionPage::on_btn_prepage_clicked()
{
    if(currentpage > 1)
    {
        currentpage--;
    }
}

void VehicleVisionPage::on_btn_nextpage_clicked()
{
    if(currentpage < maxpage)
    {
        currentpage ++;
    }
}
void VehicleVisionPage::updatePage()
{
    update();
}
void VehicleVisionPage::paintEvent(QPaintEvent *)
{
    ui->lbl_Page->setText(QString::number(currentpage)+ "/"+QString::number(maxpage));
}
