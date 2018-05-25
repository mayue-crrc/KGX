#include "vehicledebuglevelpage.h"
#include "ui_vehicledebuglevelpage.h"

VehicleDebugLevelPage::VehicleDebugLevelPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDebugLevelPage)
{
    ui->setupUi(this);
}

VehicleDebugLevelPage::~VehicleDebugLevelPage()
{
    delete ui;
}

void VehicleDebugLevelPage::on_btn_back_clicked()
{
    changePage(uVehicleSettingDebugPage);
}
