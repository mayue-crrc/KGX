#ifndef VEHICLEACUPAGE_H
#define VEHICLEACUPAGE_H

#include "basepage.h"

namespace Ui {
class VehicleACUPage;
}

class VehicleACUPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleACUPage(QWidget *parent = 0);
    ~VehicleACUPage();

private slots:

    void on_btn_prePage_pressed();

    void on_btn_nextPage_pressed();

    void on_btn_prePage_released();

    void on_btn_nextPage_released();
    
private:
    Ui::VehicleACUPage *ui;
    int allPage,curPage;
};

#endif // VEHICLEACUPAGE_H
