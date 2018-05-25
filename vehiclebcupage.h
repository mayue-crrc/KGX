#ifndef VEHICLEBCUPAGE_H
#define VEHICLEBCUPAGE_H

#include "basepage.h"

namespace Ui {
class VehicleBCUPage;
}

class VehicleBCUPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleBCUPage(QWidget *parent = 0);
    ~VehicleBCUPage();
    
private slots:
    void on_btn_prePage_pressed();

    void on_btn_nextPage_pressed();

    void on_btn_prePage_released();

    void on_btn_nextPage_released();

private:
    Ui::VehicleBCUPage *ui;
    int allPage,curPage;
};

#endif // VEHICLEBCUPAGE_H
