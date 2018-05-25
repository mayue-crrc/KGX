#ifndef VEHICLEDEBUGIOPAGE2_H
#define VEHICLEDEBUGIOPAGE2_H

#include "basepage.h"
#include "global.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"


namespace Ui {
class VehicleDebugIOPage2;
}

class VehicleDebugIOPage2 : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleDebugIOPage2(QWidget *parent = 0);
    ~VehicleDebugIOPage2();
    void updatePage();
    void showEvent(QShowEvent *);

private slots:
    void on_btn_back_clicked();

    void on_btn_prepage_clicked();

    void on_btn_nextpage_clicked();

    void on_btn_MC1_clicked();

    void on_btn_MC2_clicked();

    void on_btn_T_clicked();
    
private:
    Ui::VehicleDebugIOPage2 *ui;
    int maxpage,currentpage;
};

#endif // VEHICLEDEBUGIOPAGE2_H
