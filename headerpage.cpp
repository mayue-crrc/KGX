#include "headerpage.h"
#include "ui_headerpage.h"

HeaderPage::HeaderPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::HeaderPage)
{
    ui->setupUi(this);
}

HeaderPage::~HeaderPage()
{
    delete ui;
}
void HeaderPage::updatePage()
{
    ui->headerlabel_Date->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd"));
    ui->headerlabel_Time->setText(QDateTime::currentDateTime().time().toString("hh:mm:ss"));
    ui->headerlabel_Voltage->setText(QString::number(this->database->CTHM_CatenaryVoltage_U16)+"V");
    ui->headerlabel_Current->setText(QString::number(this->database->CTHM_CatenaryCurrent_I16)+"A");
    ui->headerlabel_CurStation->setText("万达广场");
    ui->headerlabel_TrainNum->setText(QString::number(this->database->Test_U32));

}

void HeaderPage::setPageName(QString pagename)
{
    ui->headerlabel_PagePosition->setText(pagename);
}

void HeaderPage::showEvent(QShowEvent *e)
{

}

void HeaderPage::on_pushButton_pressed()
{

}

void HeaderPage::on_pushButton_clicked()
{
    lastPage = currentPage;
    changePage(uVehicleCurrentFaultPage);
}
