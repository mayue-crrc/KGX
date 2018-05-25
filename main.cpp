#include <QtGui/QApplication>
#include <QWSServer>
#include "mainwidget.h"
#include "global.h"
#include "qt_interface.h"
#include "log4qt/propertyconfigurator.h"

// a recall function when there is a signal or a message
void customMessageHandler(QtMsgType type, const char *msg)
{
    if (type == QtDebugMsg)
    {
        QFile file("./log.txt");
        file.open(QIODevice::WriteOnly | QIODevice::Append);

        QTextStream textStream(&file);
        textStream << QString("%1").arg(msg) << endl;

        file.close();
    }
}
void delaymsec(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    QTime NowTime = QTime::currentTime();
    while(QTime::currentTime()<dieTime)
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents,100);
        if(QTime::currentTime()<NowTime)
            break;
    }
}
int main(int argc, char *argv[])
{
#ifndef USER_DEBUG_MODE
    live555_init();

    delaymsec(5000);
    QWSServer::setBackground(QColor(0,0,0,0));
#endif
    QApplication a(argc, argv);

    // use a special character set which could show Chinese correctively
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));


    QDir tempDir;
    if(!tempDir.exists("OperationRecord/"))
    {
        tempDir.mkpath("OperationRecord/");
    }

    Log4Qt::PropertyConfigurator::configure(a.applicationDirPath()+ "/log4j.properties");


    // hide the mouse cursor and change the output stream to log file
#ifndef USER_DEBUG_MODE
    QApplication::setOverrideCursor(QCursor(Qt::BlankCursor));

    if (QWSServer::isCursorVisible())
    {
        QWSServer::setCursorVisible(false);
    }

    // a recall function used by QDebug
    //qInstallMsgHandler(customMessageHandler);
#endif

    MainWidget w;

    w.setWindowFlags(Qt::FramelessWindowHint);
    w.show();

    return a.exec();
}
