#ifndef VEHICLENETWORKPAGE_H
#define VEHICLENETWORKPAGE_H

#include "basepage.h"
#include "QLabel"

namespace Ui {
class VehicleNetworkPage;
}

class VehicleNetworkPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleNetworkPage(QWidget *parent = 0);
    ~VehicleNetworkPage();
    void updatePage();
private:
    Ui::VehicleNetworkPage *ui;
    void setlabelstates(QLabel* lbl,bool state);
    void setlabelstates(QLabel* lbl,QList<bool> state);
    void setlabelstates(QLabel* lbl,bool state1,bool state2);
    void setlabelstates(QLabel* lbl,bool state,int runstate);
};

#endif // VEHICLENETWORKPAGE_H
