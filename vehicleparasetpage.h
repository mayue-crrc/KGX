#ifndef VEHICLEPARASETPAGE_H
#define VEHICLEPARASETPAGE_H

#include "basepage.h"
#include "ctrlinputmodule.h"
#include "MainGetDefaultPara.h"

namespace Ui {
class VehicleParaSetPage;
}

class VehicleParaSetPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleParaSetPage(QWidget *parent = 0);
    ~VehicleParaSetPage();
    void updatePage();
    
private slots:
    void on_btn_back_clicked();

    void InputSelectEvent();

    void on_btn_wheelConfirm_clicked();

    void on_btn_numberConfirm_clicked();

private:
    Ui::VehicleParaSetPage *ui;
    CtrlInputModule *inputmodule;
    QString m_inputtype;
    MainGetDefaultPara* ParasettingPara;
    int timer3scount[2];
};

#endif // VEHICLEPARASETPAGE_H
