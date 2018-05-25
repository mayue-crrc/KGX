#ifndef VEHICLEDEBUGIOPAGE3_H
#define VEHICLEDEBUGIOPAGE3_H
#include "basepage.h"
#include "global.h"
#include "dicontrol.h"
#include "docontrol.h"
#include "axcontrol.h"


namespace Ui {
class VehicleDebugIOPage3;
}

class VehicleDebugIOPage3 : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleDebugIOPage3(QWidget *parent = 0);
    ~VehicleDebugIOPage3();
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
    Ui::VehicleDebugIOPage3 *ui;
    int maxpage,currentpage;
};

#endif // VEHICLEDEBUGIOPAGE3_H
