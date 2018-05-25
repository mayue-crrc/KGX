#include "vehiclenetworkpage.h"
#include "ui_vehiclenetworkpage.h"

#define LABEL_ONLINE  ("font: 16px ;color: rgb(0, 0, 0);background-color:rgb(146, 208, 80);border:2px solid;border-color: rgb(0, 0, 0);")
#define LABEL_OFFLINE  ("font: 16px ;color: rgb(0, 0, 0);background-color:rgb(140, 140, 140);border:2px solid;border-color: rgb(0, 0, 0);")

#define DEVICEONLINEM "background-color:rgb(0,255,0)"
#define DEVICEONLINES "background-color:yellow"
#define DEVICEOFFLINE "background-color:white"
#define DEVICEPARTMASTER "background-color:rgb(0,255,255)"

VehicleNetworkPage::VehicleNetworkPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleNetworkPage)
{
    ui->setupUi(this);

}

VehicleNetworkPage::~VehicleNetworkPage()
{
    delete ui;
}
void VehicleNetworkPage::updatePage()
{

}
void VehicleNetworkPage::setlabelstates(QLabel* lbl,bool state)
{
    if(state)
    {
        lbl->setStyleSheet(DEVICEONLINEM);
    }else
    {
        lbl->setStyleSheet(DEVICEOFFLINE);
    }
}
//riom
void VehicleNetworkPage::setlabelstates(QLabel* lbl,QList<bool> state)
{
    for(int i = 0; i<state.size();i++)
    {
        if(!state.at(i))
        {
            lbl->setStyleSheet(DEVICEOFFLINE);
            return;
        }else
        {
            lbl->setStyleSheet(DEVICEONLINEM);
        }
    }

}
//door
void VehicleNetworkPage::setlabelstates(QLabel* lbl,bool state,int runstate)
{
    if(state)
    {
        if(runstate == 1)
        {
            lbl->setStyleSheet(DEVICEONLINEM);

        }else if(runstate == 3)
        {
            lbl->setStyleSheet(DEVICEPARTMASTER);

        }else
        {
            lbl->setStyleSheet(DEVICEONLINES);
        }
    }else
    {
        lbl->setStyleSheet(DEVICEOFFLINE);
    }
}
//bcu
void VehicleNetworkPage::setlabelstates(QLabel* lbl,bool state1,bool state2)
{
    if(state1)
    {
        if(state2)
        {
            lbl->setStyleSheet(DEVICEONLINEM);
        }else
        {
            lbl->setStyleSheet(DEVICEONLINES);
        }
    }else
    {
        lbl->setStyleSheet(DEVICEOFFLINE);
    }
}
