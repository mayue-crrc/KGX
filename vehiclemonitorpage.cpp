#include "vehiclemonitorpage.h"
#include "ui_vehiclemonitorpage.h"
#include "qt_interface.h"
#include "logger.h"
VehicleMonitorPage::VehicleMonitorPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleMonitorPage)
{

    ui->setupUi(this);

//    cameraURL_0 = "rtsp://admin:10hxwxzx@192.168.10.101:554/h264/ch1/sub/av_stream";
//    cameraURL_1 = "rtsp://admin:10hxwxzx@192.168.10.108:554/h264/ch1/sub/av_stream";
//    cameraURL_2 = "rtsp://admin:10hxwxzx@192.168.10.102:554/h264/ch1/sub/av_stream";
//    cameraURL_3 = "rtsp://admin:10hxwxzx@192.168.10.103:554/h264/ch1/sub/av_stream";

    cameraIP_P_MC1 = "rtsp://admin:10hxwxzx@192.168.10.101:554/h264/ch1/sub/av_stream";
    cameraIP_P_T1 = "rtsp://admin:10hxwxzx@192.168.10.108:554/h264/ch1/sub/av_stream";
    cameraIP_P_T2 = "rtsp://admin:10hxwxzx@192.168.10.102:554/h264/ch1/sub/av_stream";
    cameraIP_P_MC2 = "rtsp://admin:10hxwxzx@192.168.10.103:554/h264/ch1/sub/av_stream";

    cameraIP_CAB_MC1 = "rtsp://admin:10hxwxzx@192.168.10.101:554/h264/ch1/sub/av_stream";
    cameraIP_FORWARD_MC1 = "rtsp://admin:10hxwxzx@192.168.10.108:554/h264/ch1/sub/av_stream";
    cameraIP_TOP_MC1 = "rtsp://admin:10hxwxzx@192.168.10.102:554/h264/ch1/sub/av_stream";

    cameraIP_CAB_MC2 = "rtsp://admin:10hxwxzx@192.168.10.103:554/h264/ch1/sub/av_stream";
    cameraIP_FORWARD_MC2 = "rtsp://admin:10hxwxzx@192.168.10.102:554/h264/ch1/sub/av_stream";
    cameraIP_TOP_MC2 = "rtsp://admin:10hxwxzx@192.168.10.108:554/h264/ch1/sub/av_stream";


    buttons<<this->ui->btn_poll<<this->ui->btn_mc1cab<<this->ui->btnpasserager<<this->ui->btn_mc2cab;

    foreach(QPushButton* button, buttons)
    {
        connect(button,SIGNAL(clicked()),this,SLOT(ButtonClickEvent()));
    }

    connect(&poll3stimer,SIGNAL(timeout()),this,SLOT(Poll3sEvent()));

    //***************init *****************//
    cameraID_0 = CAMERA_P_MC1;
    cameraID_1 = CAMERA_P_T1;
    cameraID_2 = CAMERA_P_T2;
    cameraID_3 = CAMERA_P_MC2;

    cameraURL_0 = cameraIP_P_MC1;
    cameraURL_1 = cameraIP_P_T1;
    cameraURL_2 = cameraIP_P_T2;
    cameraURL_3 = cameraIP_P_MC2;
#ifndef USER_DEBUG_MODE
    cameraPosition_0.x = 161;
    cameraPosition_0.y = 157;
    cameraPosition_0.width = 410;
    cameraPosition_0.height = 200;

    cameraPosition_1.x = 572;
    cameraPosition_1.y = 157;
    cameraPosition_1.width = 410;
    cameraPosition_1.height = 200;

    cameraPosition_2.x = 161;
    cameraPosition_2.y = 357;
    cameraPosition_2.width = 410;
    cameraPosition_2.height = 200;

    cameraPosition_3.x = 572;
    cameraPosition_3.y = 357;
    cameraPosition_3.width = 410;
    cameraPosition_3.height = 200;

    cameraPosition_fullScreen.x = 161;
    cameraPosition_fullScreen.y = 157;
    cameraPosition_fullScreen.width = 820;
    cameraPosition_fullScreen.height = 400;

    logger()->info("ready to openconnect");
//    open_connect(CAMERA_CAB_MC1, cameraIP_CAB_MC1, &cameraPosition_0);
//    open_connect(CAMERA_FORWARD_MC1, cameraIP_FORWARD_MC1, &cameraPosition_1);
//    open_connect(CAMERA_TOP_MC1, cameraIP_TOP_MC1, &cameraPosition_2);

    open_connect(CAMERA_P_MC1, cameraIP_P_MC1, &cameraPosition_0);
    open_connect(CAMERA_P_T1, cameraIP_P_T1, &cameraPosition_1);
    open_connect(CAMERA_P_T2, cameraIP_P_T2, &cameraPosition_2);
    open_connect(CAMERA_P_MC2, cameraIP_P_MC2, &cameraPosition_3);

//    open_connect(CAMERA_CAB_MC2, cameraIP_CAB_MC2, &cameraPosition_0);
//    open_connect(CAMERA_FORWARD_MC2, cameraIP_FORWARD_MC2, &cameraPosition_1);
//    open_connect(CAMERA_TOP_MC2, cameraIP_TOP_MC2, &cameraPosition_2);

//    close_chn(CAMERA_CAB_MC1);
//    close_chn(CAMERA_FORWARD_MC1);
//    close_chn(CAMERA_TOP_MC1);
//    close_chn(CAMERA_CAB_MC2);
//    close_chn(CAMERA_FORWARD_MC2);
//    close_chn(CAMERA_TOP_MC2);
#endif



}
void VehicleMonitorPage::ButtonClickEvent()
{
     QString Btnname = ((QPushButton *)this->sender())->text();
     for(int i = 0; i<buttons.size();i++)
     {
         buttons[i]->setStyleSheet(MY_BUTTON_UP);
     }
     ((QPushButton *) this->sender())->setStyleSheet(MY_BUTTON_DOWN);

     // close all channel
#ifndef USER_DEBUG_MODE
     for(int i = 0;i<10;i++)
     {
         close_chn(i);
     }
#endif

     if("轮询" == Btnname)
     {
         if(poll3stimer.isActive())
         {

         }else
         {
             poll3stimer.start(3000);
         }
         this->ui->lblbackground_spare->setStyleSheet("background-color:transparent;");
         //this->ui->lblbackground_spare->hide();
         return ;
     }else if("MC1司机室" == Btnname)
     {
         cameraID_0 = CAMERA_CAB_MC1;
         cameraID_1 = CAMERA_FORWARD_MC1;
         cameraID_2 = CAMERA_TOP_MC1;

         cameraURL_0 = cameraIP_CAB_MC1;
         cameraURL_1 = cameraIP_FORWARD_MC1;
         cameraURL_2 = cameraIP_TOP_MC1;
         this->ui->lblbackground_spare->setStyleSheet("background-color:rgb(210,210,210);");
         //this->ui->lblbackground_spare->show();
         poll3stimer.stop();

     }else if("客室" == Btnname)
     {
         cameraURL_0 = cameraIP_P_MC1;
         cameraURL_1 = cameraIP_P_T1;
         cameraURL_2 = cameraIP_P_T2;
         cameraURL_3 = cameraIP_P_MC2;

         cameraID_0 = CAMERA_P_MC1;
         cameraID_1 = CAMERA_P_T1;
         cameraID_2 = CAMERA_P_T2;
         cameraID_3 = CAMERA_P_MC2;
         this->ui->lblbackground_spare->setStyleSheet("background-color:transparent;");
         //this->ui->lblbackground_spare->hide();
         poll3stimer.stop();

#ifndef USER_DEBUG_MODE
         open_chn(cameraID_3,&cameraPosition_3);
#endif

     }else if("MC2司机室" == Btnname)
     {
         cameraID_0 = CAMERA_CAB_MC2;
         cameraID_1 = CAMERA_FORWARD_MC2;
         cameraID_2 = CAMERA_TOP_MC2;

         cameraURL_0 = cameraIP_CAB_MC2;
         cameraURL_1 = cameraIP_FORWARD_MC2;
         cameraURL_2 = cameraIP_TOP_MC2;
         this->ui->lblbackground_spare->setStyleSheet("background-color:rgb(210,210,210);");
         //this->ui->lblbackground_spare->show();
         poll3stimer.stop();
     }

#ifndef USER_DEBUG_MODE
     open_chn(cameraID_0,&cameraPosition_0);
     open_chn(cameraID_1,&cameraPosition_1);
     open_chn(cameraID_2,&cameraPosition_2);
#endif
}

void VehicleMonitorPage::Poll3sEvent()
{
    static int currentcameraID = cameraID_0;
    static int currentcameraIDold = cameraID_0;
#ifndef USER_DEBUG_MODE
    close_chn(currentcameraIDold);

    open_chn(currentcameraID,&cameraPosition_fullScreen);

    currentcameraIDold = currentcameraID;
#endif
    if(++currentcameraID>9)
        currentcameraID = 0;

}
void VehicleMonitorPage::showEvent(QShowEvent *)
{

}

VehicleMonitorPage::~VehicleMonitorPage()
{
#ifndef USER_DEBUG_MODE
    for(int i = 0;i<10;i++)
    {
        close_chn(i);
    }
#endif
    delete ui;
}


//void VehicleMonitorPage::on_btn_mc1_pressed()
//{
//    ui->btn_mc1->setStyleSheet(MY_BUTTON_DOWN);
//    ui->btn_mc2->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_t1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_t2->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_poll->setStyleSheet(MY_BUTTON_UP);
//}

//void VehicleMonitorPage::on_btn_mc1_released()
//{

//#ifndef USER_DEBUG_MODE
//    close_chn(0);
//    close_chn(1);
//    close_chn(2);
//    close_chn(3);
//    open_chn(0,&cameraPosition_fullScreen);
//#endif
//}

//void VehicleMonitorPage::on_btn_mc2_pressed()
//{
//    ui->btn_mc2->setStyleSheet(MY_BUTTON_DOWN);
//    ui->btn_mc1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_t1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_t2->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_poll->setStyleSheet(MY_BUTTON_UP);
//}

//void VehicleMonitorPage::on_btn_mc2_released()
//{

//#ifndef USER_DEBUG_MODE
//    close_chn(0);
//    close_chn(1);
//    close_chn(2);
//    close_chn(3);
//    open_chn(3,&cameraPosition_fullScreen);
//#endif

//}


//void VehicleMonitorPage::on_btn_t1_pressed()
//{
//    ui->btn_t1->setStyleSheet(MY_BUTTON_DOWN);
//    ui->btn_t2->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_mc1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_mc2->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_poll->setStyleSheet(MY_BUTTON_UP);
//}

//void VehicleMonitorPage::on_btn_t1_released()
//{

//#ifndef USER_DEBUG_MODE
//    close_chn(0);
//    close_chn(1);
//    close_chn(2);
//    close_chn(3);
//    open_chn(1,&cameraPosition_fullScreen);
//#endif
//}

//void VehicleMonitorPage::on_btn_t2_pressed()
//{
//    ui->btn_t2->setStyleSheet(MY_BUTTON_DOWN);
//    ui->btn_t1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_mc1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_mc2->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_poll->setStyleSheet(MY_BUTTON_UP);
//}

//void VehicleMonitorPage::on_btn_t2_released()
//{

//#ifndef USER_DEBUG_MODE
//    close_chn(0);
//    close_chn(1);
//    close_chn(2);
//    close_chn(3);
//    open_chn(2,&cameraPosition_fullScreen);
//#endif
//}

//void VehicleMonitorPage::on_btn_poll_pressed()
//{
//    ui->btn_poll->setStyleSheet(MY_BUTTON_DOWN);
//    ui->btn_t1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_t2->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_mc1->setStyleSheet(MY_BUTTON_UP);
//    ui->btn_mc2->setStyleSheet(MY_BUTTON_UP);
//}

//void VehicleMonitorPage::on_btn_poll_released()
//{
//#ifndef USER_DEBUG_MODE
//    close_chn(0);
//    close_chn(1);
//    close_chn(2);
//    close_chn(3);
//    open_chn(0, &cameraPosition_0);
//    open_chn(1, &cameraPosition_1);
//    open_chn(2, &cameraPosition_2);
//    open_chn(3, &cameraPosition_3);
//#endif

//}
