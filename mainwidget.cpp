#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "database.h"
#include "crrccan.h"
#include "basepage.h"
#include "vehiclerunpage.h"
#include "navigatorpage.h"
#include "headerpage.h"
#include "vehiclenetworkpage.h"
#include "vehicletcupage.h"
#include "vehiclebcupage.h"
#include "vehicleacupage.h"
#include "vehiclehvacpage.h"
#include "vehiclemonitorpage.h"
#include "vehiclesettingpage.h"
#include "vehiclesettingselectpage.h"
#include "vehiclesettingdebugpage.h"
#include "vehicledebugiopage.h"
#include "vehicledebugiopage2.h"
#include "vehicledebugiopage3.h"
#include "vehicledebuglevelpage.h"
#include "vehicledebugportdatapage.h"
#include "vehicledebugrefreshtimepage.h"
#include "vehicledebugriompage.h"
#include "vehicleparasetpage.h"
#include "vehicleaccumulatesetpage.h"
#include "vehicleinitsetpage.h"
#include "vehicledatetimesetpage.h"
#include "vehiclevisionpage.h"
#include "vehiclecurrentfaultpage.h"
#include "vehiclehistoryfaultpage.h"
#include "crrcfault.h"
#include "crrcricomvb.h"



MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    QDesktopWidget *desktop = QApplication::desktop();

    this->move((desktop->width() - this->width()) / 2, (desktop->height() - this->height()) / 2);

    //初始化配置类
    if(MainGetDefaultPara::configureValid())
    {
        logger()->info("read configure.ini OK!");
    }else
    {
        logger()->info("configure.ini error!");
    }
    // initialize the dababase at first
    this->database = new Database();

    // binding the database with MyBase
    // this time the database is unavailiable because there is no operation of sychronization
    BasePage::database = this->database;

    //crrcCan = new CrrcCan();
    crrcRicoMvb = new CrrcRicoMvb();
    //crrcFault = new CrrcFault("./ErrorList.txt","./HisFaultList.txt");

    if(CrrcFault::initCrrcFault("fault_type_SY9.db","fault_DB_SY9.db"))
    {
        crrcFault = CrrcFault::getCrrcFault();
        crrcFault->installMvb(crrcRicoMvb);
    }else
    {
        logger()->error("故障文件初始化错误");
    }

    this->timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(updatePage()));


    this->headerPage = new HeaderPage(this);
    this->headerPage->setMyBase(uTop, QString("标题栏"));
    this->headerPage->show();

    this->navigatorPage = new NavigatorPage(this);
    this->navigatorPage->setMyBase(uBottom, QString("导航栏"));
    this->navigatorPage->show();

    this->vehicleRunPage = new VehicleRunPage(this);
    this->vehicleRunPage->setMyBase(uMiddle, QString("运行页面"));
    this->vehicleRunPage->show();

    this->vehicleNetworkPage= new VehicleNetworkPage(this);
    this->vehicleNetworkPage->setMyBase(uMiddle, QString("网络页面"));

    this->vehicleTCUPage = new  VehicleTCUPage(this);
    this->vehicleTCUPage->setMyBase(uMiddle, QString("牵引页面"));

    this->vehicleBCUPage = new  VehicleBCUPage(this);
    this->vehicleBCUPage->setMyBase(uMiddle, QString("制动页面"));

    this->vehicleACUPage = new  VehicleACUPage(this);
    this->vehicleACUPage->setMyBase(uMiddle, QString("辅助页面"));

    this->vehicleHVACPage = new  VehicleHVACPage(this);
    this->vehicleHVACPage->setMyBase(uMiddle, QString("辅助页面"));

    this->vehicleMonitorPage= new VehicleMonitorPage(this);
    this->vehicleMonitorPage->setMyBase(uMiddle, QString("监控页面"));

    this->vehicleSettingPage = new VehicleSettingPage(this);
    this->vehicleSettingPage->setMyBase(uMiddle, QString("维护页面"));

    this->vehicleSettingSelectPage = new VehicleSettingSelectPage(this);
    this->vehicleSettingSelectPage->setMyBase(uMiddle, QString("维护页面"));

    this->vehicleSettingDebugPage = new VehicleSettingDebugPage(this);
    this->vehicleSettingDebugPage->setMyBase(uMiddle, QString("调试页面"));

    this->vehicleDebugIOPage = new VehicleDebugIOPage(this);
    this->vehicleDebugIOPage->setMyBase(uMiddle, QString("IO详细"));

    this->vehicleDebugIOPage2 = new VehicleDebugIOPage2(this);
    this->vehicleDebugIOPage2->setMyBase(uMiddle, QString("IO详细"));

    this->vehicleDebugIOPage3 = new VehicleDebugIOPage3(this);
    this->vehicleDebugIOPage3->setMyBase(uMiddle, QString("IO详细"));

    this->vehicleDebugRIOMPage = new VehicleDebugRIOMPage(this);
    this->vehicleDebugRIOMPage->setMyBase(uMiddle, QString("RIOM详细"));

    this->vehicleDebugPortDataPage = new VehicleDebugPortDataPage(this);
    this->vehicleDebugPortDataPage->setMyBase(uMiddle, QString("端口数据"));

    this->vehicleDebugRefreshTimePage = new VehicleDebugRefreshTimePage(this);
    this->vehicleDebugRefreshTimePage->setMyBase(uMiddle, QString("刷新时间"));

    this->vehicleDebugLevelPage = new VehicleDebugLevelPage(this);
    this->vehicleDebugLevelPage->setMyBase(uMiddle, QString("级位调试"));

    this->vehicleParaSetPage = new VehicleParaSetPage(this);
    this->vehicleParaSetPage->setMyBase(uMiddle, QString("参数设定"));

    this->vehicleAccumulateSetPage = new VehicleAccumulateSetPage(this);
    this->vehicleAccumulateSetPage->setMyBase(uMiddle, QString("累计设定"));

    this->vehicleInitsetPage = new VehicleInitsetPage(this);
    this->vehicleInitsetPage ->setMyBase(uMiddle, QString("初始设定"));

    this->vehicleDatetimeSetPage = new VehicleDatetimeSetPage(this);
    this->vehicleDatetimeSetPage ->setMyBase(uMiddle, QString("时间设定"));

    this->vehicleVisionPage = new VehicleVisionPage(this);
    this->vehicleVisionPage ->setMyBase(uMiddle, QString("版本信息"));

    this->vehicleCurrentFaultPage = new VehicleCurrentFaultPage(this);
    this->vehicleCurrentFaultPage->setMyBase(uMiddle,QString("当前故障"));
    vehicleCurrentFaultPage->GetcrrcFaultInfo(crrcFault);

    this->vehicleHistoryFaultPage = new VehicleHistoryFaultPage(this);
    this->vehicleHistoryFaultPage->setMyBase(uMiddle,QString("历史故障"));
    vehicleHistoryFaultPage->GetcrrcFaultInfo(crrcFault);

    // connect the window with the enum
    this->widgets.insert(uVehicleRunPage, this->vehicleRunPage);
    this->widgets.insert(uVehicleNetworkPage, this->vehicleNetworkPage); 
    this->widgets.insert(uVehicleTCUPage, this->vehicleTCUPage);
    this->widgets.insert(uVehicleBCUPage, this->vehicleBCUPage);
    this->widgets.insert(uVehicleACUPage, this->vehicleACUPage);
    this->widgets.insert(uVehicleHVACPage, this->vehicleHVACPage);
    this->widgets.insert(uVehicleMonitorPage, this->vehicleMonitorPage);
    this->widgets.insert(uVehicleSettingPage, this->vehicleSettingPage);
    this->widgets.insert(uVehicleSettingSelectPage, this->vehicleSettingSelectPage);
    this->widgets.insert(uVehicleSettingDebugPage, this->vehicleSettingDebugPage);
    this->widgets.insert(uVehicleDebugIOPage, this->vehicleDebugIOPage);
    this->widgets.insert(uVehicleDebugIOPage2, this->vehicleDebugIOPage2);
    this->widgets.insert(uVehicleDebugIOPage3, this->vehicleDebugIOPage3);
    this->widgets.insert(uVehicleDebugRIOMPage, this->vehicleDebugRIOMPage);
    this->widgets.insert(uVehicleDebugPortDataPage, this->vehicleDebugPortDataPage);
    this->widgets.insert(uVehicleDebugRefreshTimePage, this->vehicleDebugRefreshTimePage);
    this->widgets.insert(uVehicleDebugLevelPage, this->vehicleDebugLevelPage);
    this->widgets.insert(uVehicleParaSetPage, this->vehicleParaSetPage);
    this->widgets.insert(uVehicleAccumulateSetPage, this->vehicleAccumulateSetPage);
    this->widgets.insert(uVehicleInitsetPage, this->vehicleInitsetPage);
    this->widgets.insert(uVehicleDatetimeSetPage, this->vehicleDatetimeSetPage);
    this->widgets.insert(uVehicleVisionPage, this->vehicleVisionPage);
    this->widgets.insert(uVehicleCurrentFaultPage,this->vehicleCurrentFaultPage);
    this->widgets.insert(uVehicleHistoryFaultPage,this->vehicleHistoryFaultPage);

}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::updatePage()
{
    static QTime timeStart(QTime::currentTime());

    static int counter = 1;     // a counter uesd to counter time, each one represent 0.33 second

    // update the header and the navigator every 0.33 second
    this->headerPage->updatePage();
    this->navigatorPage->updatePage();

    // update the middle area every 0.33 second
    this->widgets[BasePage::currentPage]->updatePage();

    // refresh the mvb port every 1 second, the code which occupies cpu time a lot should not execute at the same cycle
    if (counter % 3 == 0)
    {
        //crrcCan->synchronize();
        crrcRicoMvb->synchronizeMvbData();

        database->updateDatabse(crrcRicoMvb);
        this->vehicleDebugPortDataPage->installMvb(crrcRicoMvb);
    }


    static int faultdelaycnt = 45;
    //fault scan delay 15s, then start thread!!
   if ((faultdelaycnt++ > 45) && counter%2 == 1)// && this->database->PUBPORT_CCUOnline_B1 )
   {
       crrcFault->start();
       faultdelaycnt = 60;
   }

    // reset the counter, its longest counter time is 10 second
    counter >= 30 ? (counter = 1) : (counter ++);

    if (timeStart.msecsTo(QTime::currentTime()) > 500)
    {
        _LOG << "update page time out fault" << timeStart.msecsTo(QTime::currentTime()) << ", please check it";
    }

    timeStart = QTime::currentTime();
}

void MainWidget::showEvent(QShowEvent *event)
{
    if(MainGetDefaultPara::getInt("/Position/HMI") == 1)//config  sourcePORT and IP
    {
        system("ifconfig eth1 192.168.3.1"); // X7 ETH1
        system("ifconfig eth0 10.1.21.1 netmask 255.0.0.0"); // X9 ETH0

        if(!this->crrcRicoMvb->initializeMvb())
        {
            //logger()->error("MVB板卡初始化失败");

        }

        //HMI-CCU
        this->crrcRicoMvb->addSinkPort(0x320,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x321,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x322,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x323,MVB_FCode4,256);

        this->crrcRicoMvb->addSourcePort(0x310,MVB_FCode4,256);
        this->crrcRicoMvb->addSourcePort(0x311,MVB_FCode4,256);
        this->crrcRicoMvb->addSourcePort(0x312,MVB_FCode4,256);
        this->crrcRicoMvb->addSourcePort(0x313,MVB_FCode4,256);

        QList<unsigned short int> tmp_list;
        tmp_list<<0x310<<0x311<<0x312<<0x313<<0x320<<0x321<<0x322<<0x323;
        this->database->getHMISourcePost(tmp_list);

    }else if(MainGetDefaultPara::getInt("/Position/HMI") == 2)
    {
        system("ifconfig eth1 192.168.3.2"); // X7 ETH1
        system("ifconfig eth0 192.168.10.10 netmask 255.0.0.0"); // X9 ETH0 test
        //system("ifconfig eth0 10.1.26.1 netmask 255.0.0.0"); // X9 ETH0

        if(!crrcRicoMvb->initializeMvb())
        {
            //logger()->error("MVB板卡初始化失败");
        }

        //HMI-CCU
        this->crrcRicoMvb->addSourcePort(0x320,MVB_FCode4,256);
        this->crrcRicoMvb->addSourcePort(0x321,MVB_FCode4,256);
        this->crrcRicoMvb->addSourcePort(0x322,MVB_FCode4,256);
        this->crrcRicoMvb->addSourcePort(0x323,MVB_FCode4,256);

        this->crrcRicoMvb->addSinkPort(0x310,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x311,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x312,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x313,MVB_FCode4,256);

        QList<unsigned short int> tmp_list;
        tmp_list<<0x320<<0x321<<0x322<<0x323<<0x310<<0x311<<0x312<<0x313;
        this->database->getHMISourcePost(tmp_list);

    }else
    {

        qDebug()<<"configure.ini error";
    }

    {
        //CCU-ALL
        this->crrcRicoMvb->addSinkPort(0xF,MVB_FCode3,64);
        //CCU-HMI
        this->crrcRicoMvb->addSinkPort(0x308,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x309,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x30a,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x30b,MVB_FCode4,256);
        //RIOM->CCU
        this->crrcRicoMvb->addSinkPort(0x118,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x128,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x138,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x110,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x111,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x112,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x120,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x121,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x130,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x131,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x132,MVB_FCode4,64);

        //CCU-ERM
        this->crrcRicoMvb->addSinkPort(0x208,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x210,MVB_FCode4,128);
        this->crrcRicoMvb->addSinkPort(0x211,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x212,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x213,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x220,MVB_FCode4,128);
        this->crrcRicoMvb->addSinkPort(0x221,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x222,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x223,MVB_FCode4,512);
        //CCU-BCU
        this->crrcRicoMvb->addSinkPort(0x408,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x409,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x410,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x411,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x412,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x413,MVB_FCode4,1024);
        this->crrcRicoMvb->addSinkPort(0x420,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x421,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x422,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x423,MVB_FCode4,1024);
        this->crrcRicoMvb->addSinkPort(0x430,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x431,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x432,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x433,MVB_FCode4,1024);
        //CCU-TCU
        this->crrcRicoMvb->addSinkPort(0x508,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x510,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x511,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x520,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x521,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x530,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x531,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x540,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x541,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x608,MVB_FCode4,64);
        //CCU-ACU
        this->crrcRicoMvb->addSinkPort(0x610,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x611,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x620,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x621,MVB_FCode4,256);
        //CCU-MDCU
        this->crrcRicoMvb->addSinkPort(0x708,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x710,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x720,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x730,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x740,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x750,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0x760,MVB_FCode4,512);
        //CCU-PIS
        this->crrcRicoMvb->addSinkPort(0x808,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x810,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x811,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x820,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x821,MVB_FCode4,256);
        //CCU-HVAC
        this->crrcRicoMvb->addSinkPort(0x908,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0x910,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x920,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0x930,MVB_FCode4,256);
        //CCU-ATC
        this->crrcRicoMvb->addSinkPort(0xA08,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0xA09,MVB_FCode4,512);
        this->crrcRicoMvb->addSinkPort(0xA10,MVB_FCode3,64);
        this->crrcRicoMvb->addSinkPort(0xA11,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0xA20,MVB_FCode3,64);
        this->crrcRicoMvb->addSinkPort(0xA21,MVB_FCode4,64);
        //CCU-BCCU
        this->crrcRicoMvb->addSinkPort(0xB08,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0xB10,MVB_FCode4,64);
        this->crrcRicoMvb->addSinkPort(0xB20,MVB_FCode3,64);
        //CCU-BMS
        this->crrcRicoMvb->addSinkPort(0xC08,MVB_FCode2,64);
        this->crrcRicoMvb->addSinkPort(0xC10,MVB_FCode3,64);
        this->crrcRicoMvb->addSinkPort(0xC11,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0xC12,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0xC20,MVB_FCode3,64);
        this->crrcRicoMvb->addSinkPort(0xC21,MVB_FCode4,256);
        this->crrcRicoMvb->addSinkPort(0xC22,MVB_FCode4,256);

#ifndef USER_DEBUG_MODE
        this->crrcRicoMvb->InitReadPortData();
#endif
    }

    timer->start(333);

}

// the window type of middle and huge will be set shown and hidden here
void MainWidget::changePage(int page)
{
    foreach (int key, this->widgets.keys())
    {
        if (key == page)
        {
            BasePage::currentPage = page;

            this->widgets[page]->show();

            // add page name to the header
            if(page == uVehicleMonitorPage)
            {
                this->setStyleSheet("background-color:transparent;");
            }else
            {
                this->setStyleSheet("background-color:rgb(210,210,210);");

            }

            _LOG << "change page to" << this->widgets[page]->name;
            headerPage->setPageName(this->widgets[page]->name);
        }
        else
        {
            this->widgets[key]->hide();
        }
    }
}


void MainWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        // close the window
        this->close();
    }
    else if (event->key() == Qt::Key_S)
    {

    }
}
