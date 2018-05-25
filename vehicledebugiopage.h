#ifndef VEHICLEDEBUGIOPAGE_H
#define VEHICLEDEBUGIOPAGE_H

#include "basepage.h"
#include "global.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"

namespace Ui {
class VehicleDebugIOPage;
}

class VehicleDebugIOPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleDebugIOPage(QWidget *parent = 0);
    ~VehicleDebugIOPage();
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
    Ui::VehicleDebugIOPage *ui;
    int maxpage,currentpage;
    DiControl* dicontrol1;
    DiControl* dicontrol2;
    DoControl* docontrol1;
};

#endif // VEHICLEDEBUGIOPAGE_H
