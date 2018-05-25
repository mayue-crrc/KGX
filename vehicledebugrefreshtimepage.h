#ifndef VEHICLEDEBUGREFRESHTIMEPAGE_H
#define VEHICLEDEBUGREFRESHTIMEPAGE_H

#include "basepage.h"
#include "global.h"

namespace Ui {
class VehicleDebugRefreshTimePage;
}

class VehicleDebugRefreshTimePage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleDebugRefreshTimePage(QWidget *parent = 0);
    ~VehicleDebugRefreshTimePage();
    void paintEvent(QPaintEvent *);
    void updatePage();
    
private slots:
    void on_btn_back_clicked();

    void on_btn_prepage_clicked();

    void on_btn_nextpage_clicked();

private:
    Ui::VehicleDebugRefreshTimePage *ui;
    int maxpage,currentpage;
};

#endif // VEHICLEDEBUGREFRESHTIMEPAGE_H
