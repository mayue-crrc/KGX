#include "vehiclerunpage.h"
#include "ui_vehiclerunpage.h"


VehicleRunPage::VehicleRunPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleRunPage)
{
    ui->setupUi(this);
    count = 0;
    LevelBar = new CtrlLevelBar(this);
    LevelBar->setGeometry(10,5,LevelBar->width(),LevelBar->height());
    LevelBar->Ctrl_SetLevelvalue(0);

    Speedometer = new CtrlSpeedometer(this);
    Speedometer ->setGeometry(380,250,Speedometer->width(),Speedometer->height());
    Speedometer->setSpeenometerValue(60);

    setTracBrakeBarValue(300);
    setLowVoltageBarValue(20);
}

VehicleRunPage::~VehicleRunPage()
{
    delete ui;
}
void VehicleRunPage::showEvent(QShowEvent *e)
{

}
void VehicleRunPage::updatePage()
{

}
void VehicleRunPage::setLowVoltageBarValue(int value)
{
    int height ;
    if (value >= 0 && value <=30)
    {
        if(value >= 0 && value <= 15)
        {
            height = 2*value;
        }
        else if (value > 15 && value <= 25)
        {
            height = 5*(value-15)+30;
        }
        else if(value > 25 && value <= 28)
        {
            height = 27*(value-25)+80;
        }
        else if (value > 28 && value <= 30)
        {
            height = 10*(value-28)+80+80;
        }
        ui->Barlabel_LowVoltagevalue->setGeometry(40,220-height,10,height);
        ui->Barlabel_LowVoltagevalueLine->setGeometry(31,220-height,40,5);
    }
}
void VehicleRunPage::setTracBrakeBarValue(int value)
{

    float tracBrakeBarValue = (float(value)) / 10;
    int height ;
    if (tracBrakeBarValue > 0 )
    {
        height = (100+tracBrakeBarValue)*180/200;
    }
    else
    {
        tracBrakeBarValue = -tracBrakeBarValue;
        height = (100-tracBrakeBarValue)*180/200;
    }
    ui->Barlabel_TraBrakevalue->setGeometry(40,220-height,10,height+2);
    ui->Barlabel_TraBrakeLine->setGeometry(31,220-height,40,5);

}



void VehicleRunPage::on_btn_VehicleRun_help_clicked()
{

}


