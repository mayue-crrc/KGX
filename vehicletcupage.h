#ifndef VEHICLETCUPAGE_H
#define VEHICLETCUPAGE_H

#include "basepage.h"

namespace Ui {
class VehicleTCUPage;
}

class VehicleTCUPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleTCUPage(QWidget *parent = 0);
    ~VehicleTCUPage();
    
private slots:
    void on_btn_prePage_pressed();

    void on_btn_prePage_released();

    void on_btn_nextPage_pressed();

    void on_btn_nextPage_released();

private:
    Ui::VehicleTCUPage *ui;
    int allPage,curPage;

};

#endif // VEHICLETCUPAGE_H
