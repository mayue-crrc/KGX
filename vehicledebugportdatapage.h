#ifndef VEHICLEDEBUGPORTDATAPAGE_H
#define VEHICLEDEBUGPORTDATAPAGE_H

#include "basepage.h"
#include "global.h"
#include "QPushButton"
#include "crrcricomvb.h"
namespace Ui {
class VehicleDebugPortDataPage;
}

class VehicleDebugPortDataPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleDebugPortDataPage(QWidget *parent = 0);
    ~VehicleDebugPortDataPage();
    void paintEvent(QPaintEvent *);
    void updatePage();
    void installMvb(CrrcRicoMvb* crrcRicoMvb);
    
private slots:
    void on_btn_back_clicked();
    void ButtonsPressEvent();
private:
    Ui::VehicleDebugPortDataPage *ui;
    int currentpage;
    CrrcRicoMvb* m_crrcRicoMvb;
    QList <int>m_PortsList;
    QList <int> CCUAPorts,CCUBPorts,ERMPorts,RIOMPorts,ACUPorts,TCUPorts,BCUPorts,PISHVACPorts,EDCUPorts,ATCBCCUPorts,HMIPorts,BMSPorts;
    QList<QPushButton*> buttons;
};

#endif // VEHICLEDEBUGPORTDATAPAGE_H
