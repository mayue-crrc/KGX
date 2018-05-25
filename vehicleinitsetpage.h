#ifndef VEHICLEINITSETPAGE_H
#define VEHICLEINITSETPAGE_H

#include "basepage.h"
#include "ctrlinputmodule.h"
#include "MainGetDefaultPara.h"


namespace Ui {
class VehicleInitsetPage;
}

class VehicleInitsetPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleInitsetPage(QWidget *parent = 0);
    ~VehicleInitsetPage();
    void updatePage();
    
private slots:
    void on_btn_back_clicked();

    void on_btn_MC1_pressed();

    void on_btn_MC1_released();

    void on_btn_MC2_pressed();

    void on_btn_MC2_released();

    void on_btn_rebootHMI_pressed();

    void on_btn_rebootHMI_released();

private:
    Ui::VehicleInitsetPage *ui;
    MainGetDefaultPara *HMIPos;
    QString currentpos;
};

#endif // VEHICLEINITSETPAGE_H
