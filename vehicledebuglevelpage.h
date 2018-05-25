#ifndef VEHICLEDEBUGLEVELPAGE_H
#define VEHICLEDEBUGLEVELPAGE_H

#include "basepage.h"
#include "global.h"

namespace Ui {
class VehicleDebugLevelPage;
}

class VehicleDebugLevelPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleDebugLevelPage(QWidget *parent = 0);
    ~VehicleDebugLevelPage();
    
private slots:
    void on_btn_back_clicked();

private:
    Ui::VehicleDebugLevelPage *ui;
};

#endif // VEHICLEDEBUGLEVELPAGE_H
