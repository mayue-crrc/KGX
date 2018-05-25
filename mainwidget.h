#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QtGui>
#include <QWidget>
#include <QMap>
#include "log4qt/logger.h"
namespace Ui {
    class MainWidget;
}

class QTimer;
class BasePage;
class CrrcCan;
class Database;
class NavigatorPage;
class HeaderPage;
class VehicleRunPage;
class VehicleNetworkPage;
class VehicleMonitorPage;
class VehicleTCUPage;
class VehicleBCUPage;
class VehicleACUPage;
class VehicleHVACPage;
class VehicleSettingPage;
class VehicleSettingSelectPage;
class VehicleSettingDebugPage;
class VehicleDebugIOPage;
class VehicleDebugIOPage2;
class VehicleDebugIOPage3;
class VehicleDebugRIOMPage;
class VehicleDebugPortDataPage;
class VehicleDebugRefreshTimePage;
class VehicleDebugLevelPage;
class VehicleParaSetPage;
class VehicleAccumulateSetPage;
class VehicleInitsetPage;
class VehicleDatetimeSetPage;
class VehicleVisionPage;
class VehicleCurrentFaultPage;
class VehicleHistoryFaultPage;
class CrrcFault;
class CrrcRicoMvb;

class MainWidget : public QWidget
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
    void showEvent(QShowEvent *event);
    void keyPressEvent(QKeyEvent *event);
    QMap<int, BasePage *> widgets;

public:
    Database *database;
    CrrcCan *crrcCan;
    CrrcFault *crrcFault;
    HeaderPage *headerPage;
    NavigatorPage *navigatorPage;
    VehicleRunPage *vehicleRunPage;
    VehicleNetworkPage *vehicleNetworkPage;
    VehicleMonitorPage *vehicleMonitorPage;
    VehicleTCUPage *vehicleTCUPage;
    VehicleBCUPage *vehicleBCUPage;
    VehicleACUPage *vehicleACUPage;
    VehicleHVACPage *vehicleHVACPage;
    VehicleSettingPage *vehicleSettingPage;
    VehicleSettingSelectPage *vehicleSettingSelectPage;
    VehicleSettingDebugPage *vehicleSettingDebugPage;
    VehicleDebugIOPage *vehicleDebugIOPage;
    VehicleDebugIOPage2 *vehicleDebugIOPage2;
    VehicleDebugIOPage3 *vehicleDebugIOPage3;
    VehicleDebugRIOMPage *vehicleDebugRIOMPage;
    VehicleDebugPortDataPage *vehicleDebugPortDataPage;
    VehicleDebugRefreshTimePage *vehicleDebugRefreshTimePage;
    VehicleDebugLevelPage *vehicleDebugLevelPage;
    VehicleParaSetPage *vehicleParaSetPage;
    VehicleAccumulateSetPage *vehicleAccumulateSetPage;
    VehicleInitsetPage *vehicleInitsetPage;
    VehicleDatetimeSetPage *vehicleDatetimeSetPage;
    VehicleVisionPage *vehicleVisionPage;
    VehicleCurrentFaultPage *vehicleCurrentFaultPage;
    VehicleHistoryFaultPage *vehicleHistoryFaultPage;
    CrrcRicoMvb *crrcRicoMvb;

public slots:
    void changePage(int page);
    void updatePage();
signals:

private:
    Ui::MainWidget *ui;
    QTimer *timer;
};

#endif // MAINWIDGET_H
