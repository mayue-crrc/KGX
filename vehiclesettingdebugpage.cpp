#include "vehiclesettingdebugpage.h"
#include "ui_vehiclesettingdebugpage.h"

VehicleSettingDebugPage::VehicleSettingDebugPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleSettingDebugPage)
{
    ui->setupUi(this);
}

VehicleSettingDebugPage::~VehicleSettingDebugPage()
{
    delete ui;
}

void VehicleSettingDebugPage::on_btn_back_clicked()
{
    changePage(uVehicleSettingSelectPage);
}

void VehicleSettingDebugPage::on_btn_set1_IO_clicked()
{
      changePage(uVehicleDebugIOPage);
}

void VehicleSettingDebugPage::on_btn_set2_RIOM_clicked()
{
    changePage(uVehicleDebugRIOMPage);
}

void VehicleSettingDebugPage::on_btn_set3_refreshTime_clicked()
{
     changePage(uVehicleDebugRefreshTimePage);
}

void VehicleSettingDebugPage::on_btn_set4_portData_clicked()
{
    changePage(uVehicleDebugPortDataPage);
}

void VehicleSettingDebugPage::on_btn_set5_level_clicked()
{
    changePage(uVehicleDebugLevelPage);
}
