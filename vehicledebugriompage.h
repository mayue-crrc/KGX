#ifndef VEHICLEDEBUGRIOMPAGE_H
#define VEHICLEDEBUGRIOMPAGE_H

#include "basepage.h"
#include "global.h"

namespace Ui {
class VehicleDebugRIOMPage;
}

class VehicleDebugRIOMPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleDebugRIOMPage(QWidget *parent = 0);
    ~VehicleDebugRIOMPage();
    
private slots:
    void on_btn_back_clicked();

private:
    Ui::VehicleDebugRIOMPage *ui;
};

#endif // VEHICLEDEBUGRIOMPAGE_H
