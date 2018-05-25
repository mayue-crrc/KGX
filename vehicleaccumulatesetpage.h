#ifndef VEHICLEACCUMULATESETPAGE_H
#define VEHICLEACCUMULATESETPAGE_H
#include "basepage.h"
#include "ctrlinputmodule.h"
#include "MainGetDefaultPara.h"

namespace Ui {
class VehicleAccumulateSetPage;
}

class VehicleAccumulateSetPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleAccumulateSetPage(QWidget *parent = 0);
    ~VehicleAccumulateSetPage();
    void updatePage();
    
private slots:
    void on_btn_back_clicked();

    void on_btn_accumulateMileConfirm_clicked();

    void on_btn_accumulateMile_clicked();

private:
    Ui::VehicleAccumulateSetPage *ui;
    CtrlInputModule *inputmodule;
    int timer3scount;
};

#endif // VEHICLEACCUMULATESETPAGE_H
