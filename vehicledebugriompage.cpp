#include "vehicledebugriompage.h"
#include "ui_vehicledebugriompage.h"

VehicleDebugRIOMPage::VehicleDebugRIOMPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDebugRIOMPage)
{
    ui->setupUi(this);
}

VehicleDebugRIOMPage::~VehicleDebugRIOMPage()
{
    delete ui;
}

void VehicleDebugRIOMPage::on_btn_back_clicked()
{
     changePage(uVehicleSettingDebugPage);
}
