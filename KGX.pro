#-------------------------------------------------
#
# Project created by QtCreator 2018-01-26T10:50:36
#
#-------------------------------------------------
DEFINES += USER_DEBUG_MODE

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KGX
TEMPLATE = app
LIBS += -L$$PWD/../../../lib/ -lmodbus
LIBS += -L$$PWD/../../../lib/ -lsqlite3

if(!contains(DEFINES, USER_DEBUG_MODE)){
LIBS += -L$$PWD/../../../lib/ -ltestRTSPClient_lib
}


INCLUDEPATH += $$PWD/../../../
DEPENDPATH += $$PWD/../../../

DEPENDPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia
INCLUDEPATH += . log4qt log4qt/helpers log4qt/spi log4qt/varia

SOURCES += main.cpp\
        mainwidget.cpp \
    vehiclerunpage.cpp \
    navigatorpage.cpp \
    headerpage.cpp \
    database.cpp \
    crrccan.cpp \
    basepage.cpp \
    ctrllevelbar.cpp \
    ctrlspeedometer.cpp \
    vehiclenetworkpage.cpp \
    vehiclemonitorpage.cpp \
    vehicletcupage.cpp \
    vehiclebcupage.cpp \
    vehicleacupage.cpp \
    vehiclehvacpage.cpp \
    vehiclesettingpage.cpp \
    warnningdialog.cpp \
    MainGetDefaultPara.cpp \
    vehiclesettingselectpage.cpp \
    vehiclesettingdebugpage.cpp \
    vehicledebugiopage.cpp \
    vehicledebugriompage.cpp \
    vehicledebugrefreshtimepage.cpp \
    vehicledebugportdatapage.cpp \
    vehicledebuglevelpage.cpp \
    vehicledebugiopage2.cpp \
    vehicledebugiopage3.cpp \
    docontrol.cpp \
    dicontrol.cpp \
    axcontrol.cpp \
    vehicleparasetpage.cpp \
    ctrlinputmodule.cpp \
    vehicleaccumulatesetpage.cpp \
    vehicleinitsetpage.cpp \
    vehicledatetimesetpage.cpp \
    vehicleeditpwpage.cpp \
    vehiclevisionpage.cpp \
    crrcfault.cpp \
    ctrlfaultdetails.cpp \
    vehiclehistoryfaultpage.cpp \
    vehiclecurrentfaultpage.cpp \
    crrcricomvb.cpp \
    RiCo_Api/c_thread.cpp \
    RiCo_Api/modbus_rev.cpp \
    RiCo_Api/rico_mvbapi.cpp \
    log4qt/writerappender.cpp \
    log4qt/ttcclayout.cpp \
    log4qt/simplelayout.cpp \
    log4qt/rollingfileappender.cpp \
    log4qt/propertyconfigurator.cpp \
    log4qt/patternlayout.cpp \
    log4qt/ndc.cpp \
    log4qt/mdc.cpp \
    log4qt/logmanager.cpp \
    log4qt/loggingevent.cpp \
    log4qt/loggerrepository.cpp \
    log4qt/logger.cpp \
    log4qt/log4qt.cpp \
    log4qt/level.cpp \
    log4qt/layout.cpp \
    log4qt/hierarchy.cpp \
    log4qt/fileappender.cpp \
    log4qt/dailyrollingfileappender.cpp \
    log4qt/consoleappender.cpp \
    log4qt/basicconfigurator.cpp \
    log4qt/appenderskeleton.cpp \
    log4qt/helpers/properties.cpp \
    log4qt/helpers/patternformatter.cpp \
    log4qt/helpers/optionconverter.cpp \
    log4qt/helpers/logobjectptr.cpp \
    log4qt/helpers/logobject.cpp \
    log4qt/helpers/logerror.cpp \
    log4qt/helpers/initialisationhelper.cpp \
    log4qt/helpers/factory.cpp \
    log4qt/helpers/datetime.cpp \
    log4qt/helpers/configuratorhelper.cpp \
    log4qt/helpers/classlogger.cpp \
    log4qt/spi/filter.cpp \
    log4qt/varia/stringmatchfilter.cpp \
    log4qt/varia/nullappender.cpp \
    log4qt/varia/listappender.cpp \
    log4qt/varia/levelrangefilter.cpp \
    log4qt/varia/levelmatchfilter.cpp \
    log4qt/varia/denyallfilter.cpp \
    log4qt/varia/debugappender.cpp \
    faulttypebean.cpp \
    faultbean.cpp \
    crrcfaultmapper.cpp


HEADERS  += mainwidget.h \
    navigatorpage.h \
    headerpage.h \
    global.h \
    database.h \
    crrccan.h \
    can4linux.h \
    basepage.h \
    vehiclerunpage.h \
    ctrllevelbar.h \
    ctrlspeedometer.h \
    vehiclenetworkpage.h \
    vehiclemonitorpage.h \
    vehicletcupage.h \
    vehiclebcupage.h \
    vehicleacupage.h \
    vehiclehvacpage.h \
    vehiclesettingpage.h \
    warnningdialog.h \
    MainGetDefaultPara.h \
    vehiclesettingselectpage.h \
    vehiclesettingdebugpage.h \
    vehicledebugiopage.h \
    vehicledebugriompage.h \
    vehicledebugrefreshtimepage.h \
    vehicledebugportdatapage.h \
    vehicledebuglevelpage.h \
    vehicledebugiopage2.h \
    vehicledebugiopage3.h \
    docontrol.h \
    dicontrol.h \
    axcontrol.h \
    vehicleparasetpage.h \
    ctrlinputmodule.h \
    vehicleaccumulatesetpage.h \
    vehicleinitsetpage.h \
    vehicledatetimesetpage.h \
    vehicleeditpwpage.h \
    vehiclevisionpage.h \
    crrcfault.h \
    ctrlfaultdetails.h \
    vehiclehistoryfaultpage.h \
    vehiclecurrentfaultpage.h \
    crrcricomvb.h \
    RiCo_Api/libmodbus/config.h \
    RiCo_Api/libmodbus/modbus-rtu.h \
    RiCo_Api/libmodbus/modbus-tcp.h \
    RiCo_Api/libmodbus/modbus-version.h \
    RiCo_Api/libmodbus/modbus.h \
    RiCo_Api/c_thread.h \
    RiCo_Api/modbus_rev.h \
    RiCo_Api/rico_mvbapi.h \
    qt_interface.h \
    log4qt/writerappender.h \
    log4qt/ttcclayout.h \
    log4qt/simplelayout.h \
    log4qt/rollingfileappender.h \
    log4qt/propertyconfigurator.h \
    log4qt/patternlayout.h \
    log4qt/ndc.h \
    log4qt/mdc.h \
    log4qt/logmanager.h \
    log4qt/loggingevent.h \
    log4qt/loggerrepository.h \
    log4qt/logger.h \
    log4qt/log4qt.h \
    log4qt/level.h \
    log4qt/layout.h \
    log4qt/hierarchy.h \
    log4qt/fileappender.h \
    log4qt/dailyrollingfileappender.h \
    log4qt/consoleappender.h \
    log4qt/basicconfigurator.h \
    log4qt/appenderskeleton.h \
    log4qt/appender.h \
    log4qt/helpers/properties.h \
    log4qt/helpers/patternformatter.h \
    log4qt/helpers/optionconverter.h \
    log4qt/helpers/logobjectptr.h \
    log4qt/helpers/logobject.h \
    log4qt/helpers/logerror.h \
    log4qt/helpers/initialisationhelper.h \
    log4qt/helpers/factory.h \
    log4qt/helpers/datetime.h \
    log4qt/helpers/configuratorhelper.h \
    log4qt/helpers/classlogger.h \
    log4qt/spi/filter.h \
    log4qt/varia/stringmatchfilter.h \
    log4qt/varia/nullappender.h \
    log4qt/varia/listappender.h \
    log4qt/varia/levelrangefilter.h \
    log4qt/varia/levelmatchfilter.h \
    log4qt/varia/denyallfilter.h \
    log4qt/varia/debugappender.h \
    faulttypebean.h \
    faultbean.h \
    crrcfaultmapper.h

FORMS    += mainwidget.ui \
    vehiclerunpage.ui \
    navigatorpage.ui \
    headerpage.ui \
    ctrllevelbar.ui \
    ctrlspeedometer.ui \
    vehiclenetworkpage.ui \
    vehiclemonitorpage.ui \
    vehicletcupage.ui \
    vehiclebcupage.ui \
    vehicleacupage.ui \
    vehiclehvacpage.ui \
    vehiclesettingpage.ui \
    warnningdialog.ui \
    vehiclesettingselectpage.ui \
    vehiclesettingdebugpage.ui \
    vehicledebugiopage.ui \
    vehicledebugriompage.ui \
    vehicledebugrefreshtimepage.ui \
    vehicledebugportdatapage.ui \
    vehicledebuglevelpage.ui \
    vehicledebugiopage2.ui \
    vehicledebugiopage3.ui \
    docontrol.ui \
    dicontrol.ui \
    axcontrol.ui \
    vehicleparasetpage.ui \
    ctrlinputmodule.ui \
    vehicleaccumulatesetpage.ui \
    vehicleinitsetpage.ui \
    vehicledatetimesetpage.ui \
    vehicleeditpwpage.ui \
    vehiclevisionpage.ui \
    ctrlfaultdetails.ui \
    vehiclehistoryfaultpage.ui \
    vehiclecurrentfaultpage.ui

OTHER_FILES += \
    KGX.pro.user \
    vehiclerunpage.ui.autosave \
    KGX \
    log4qt/log4qt.pri

RESOURCES += \
    Resource.qrc
