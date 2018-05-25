#ifndef VEHICLESETTINGSELECTPAGE_H
#define VEHICLESETTINGSELECTPAGE_H

#include "basepage.h"
#include "global.h"
#include "vehicleeditpwpage.h"

namespace Ui {
class VehicleSettingSelectPage;
}

class VehicleSettingSelectPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleSettingSelectPage(QWidget *parent = 0);
    ~VehicleSettingSelectPage();
    
private slots:

    void on_btn_set1_para_clicked();

    void on_btn_set7_debug_clicked();

    void on_btn_set2_accumulate_clicked();

    void on_btn_set3_init_clicked();

    void on_btn_set4_time_clicked();

    void on_btn_set5_password_clicked();

    void on_btn_set6_version_clicked();

private:
    Ui::VehicleSettingSelectPage *ui;
    VehicleEditPWPage *vehicleeditpwpage;
};

#endif // VEHICLESETTINGSELECTPAGE_H
