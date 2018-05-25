#ifndef VEHICLESETTINGDEBUGPAGE_H
#define VEHICLESETTINGDEBUGPAGE_H

#include "basepage.h"
#include "global.h"

namespace Ui {
class VehicleSettingDebugPage;
}

class VehicleSettingDebugPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleSettingDebugPage(QWidget *parent = 0);
    ~VehicleSettingDebugPage();
    
private slots:
    void on_btn_back_clicked();

    void on_btn_set1_IO_clicked();

    void on_btn_set2_RIOM_clicked();

    void on_btn_set3_refreshTime_clicked();

    void on_btn_set4_portData_clicked();

    void on_btn_set5_level_clicked();

private:
    Ui::VehicleSettingDebugPage *ui;
};

#endif // VEHICLESETTINGDEBUGPAGE_H
