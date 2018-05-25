#ifndef VEHICLEMONITORPAGE_H
#define VEHICLEMONITORPAGE_H

#include "basepage.h"
#include "global.h"
#include "qt_interface.h"
#include "QPushButton"
#include "QTimer"

enum cameraIndex
{
    CAMERA_CAB_MC1 = 0,
    CAMERA_FORWARD_MC1,
    CAMERA_TOP_MC1,
    CAMERA_P_MC1,
    CAMERA_P_T1,
    CAMERA_P_T2,
    CAMERA_P_MC2,
    CAMERA_CAB_MC2,
    CAMERA_FORWARD_MC2,
    CAMERA_TOP_MC2
};

namespace Ui {
class VehicleMonitorPage;
}

class VehicleMonitorPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleMonitorPage(QWidget *parent = 0);
    ~VehicleMonitorPage();
    void showEvent(QShowEvent *);
    
private slots:

    void ButtonClickEvent();

    void Poll3sEvent();
//    void on_btn_mc1_pressed();

//    void on_btn_mc1_released();

//    void on_btn_mc2_pressed();

//    void on_btn_mc2_released();

//    void on_btn_t1_pressed();

//    void on_btn_t1_released();

//    void on_btn_t2_pressed();

//    void on_btn_t2_released();

//    void on_btn_poll_pressed();

//    void on_btn_poll_released();

private:
    Ui::VehicleMonitorPage *ui;
    char const *cameraURL_0,*cameraURL_1,*cameraURL_2,*cameraURL_3;
    int cameraID_0,cameraID_1,cameraID_2,cameraID_3;
    char const *cameraIP_CAB_MC1,*cameraIP_FORWARD_MC1,*cameraIP_TOP_MC1,
                *cameraIP_P_MC1,*cameraIP_P_T1,*cameraIP_P_T2,*cameraIP_P_MC2,
                *cameraIP_CAB_MC2,*cameraIP_FORWARD_MC2,*cameraIP_TOP_MC2;
    QList<QPushButton*> buttons;

#ifndef USER_DEBUG_MODE
    region cameraPosition_0,cameraPosition_1,cameraPosition_2,cameraPosition_3,cameraPosition_fullScreen;
#endif
    QTimer poll3stimer;
};

#endif // VEHICLEMONITORPAGE_H
