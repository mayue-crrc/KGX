#ifndef VEHICLERUNPAGE_H
#define VEHICLERUNPAGE_H

#include "basepage.h"
#include "ctrlspeedometer.h"

namespace Ui {
    class VehicleRunPage;
}

class VehicleRunPage : public BasePage
{
    Q_OBJECT

public:
    explicit VehicleRunPage(QWidget *parent = 0);
    ~VehicleRunPage();
    void showEvent(QShowEvent *);
    void updatePage();
    void setLowVoltageBarValue(int value);
    void setTracBrakeBarValue(int value);

private slots:

    void on_btn_VehicleRun_help_clicked();


private:
    Ui::VehicleRunPage *ui;
    int count ;
    CtrlSpeedometer *Speedometer;
};

#endif // VEHICLERUNPAGE_H
