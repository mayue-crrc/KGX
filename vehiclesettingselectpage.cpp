#include "vehiclesettingselectpage.h"
#include "ui_vehiclesettingselectpage.h"


VehicleSettingSelectPage::VehicleSettingSelectPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleSettingSelectPage)
{
    ui->setupUi(this);
    vehicleeditpwpage = new VehicleEditPWPage(this);
    vehicleeditpwpage->setGeometry(140,2,vehicleeditpwpage->width(),vehicleeditpwpage->height());
    vehicleeditpwpage->hide();
}

VehicleSettingSelectPage::~VehicleSettingSelectPage()
{
    delete ui;
}


void VehicleSettingSelectPage::on_btn_set1_para_clicked()
{
    changePage(uVehicleParaSetPage);
}

void VehicleSettingSelectPage::on_btn_set7_debug_clicked()
{
    changePage(uVehicleSettingDebugPage);
}

void VehicleSettingSelectPage::on_btn_set2_accumulate_clicked()
{
     changePage(uVehicleAccumulateSetPage);
}

void VehicleSettingSelectPage::on_btn_set3_init_clicked()
{
    changePage(uVehicleInitsetPage);
}

void VehicleSettingSelectPage::on_btn_set4_time_clicked()
{
    changePage(uVehicleDatetimeSetPage);
}

void VehicleSettingSelectPage::on_btn_set5_password_clicked()
{
    vehicleeditpwpage->show();
}

void VehicleSettingSelectPage::on_btn_set6_version_clicked()
{
    changePage(uVehicleVisionPage);
}
