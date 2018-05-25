#ifndef VEHICLEHVACPAGE_H
#define VEHICLEHVACPAGE_H
#include "basepage.h"


namespace Ui {
class VehicleHVACPage;
}

class VehicleHVACPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleHVACPage(QWidget *parent = 0);
    ~VehicleHVACPage();

private slots:
    void on_btn_prePage_pressed();

    void on_btn_nextPage_pressed();

    void on_btn_prePage_released();

    void on_btn_nextPage_released();
    
    void on_VHVAC_Button_heat1_clicked();

    void on_VHVAC_Button_heat2_clicked();

    void on_VHVAC_Button_Tempplus2_pressed();

    void on_VHVAC_Button_Tempplus2_released();

private:
    Ui::VehicleHVACPage *ui;
    int allPage,curPage;
};

#endif // VEHICLEHVACPAGE_H
