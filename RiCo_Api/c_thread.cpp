#include "c_thread.h"
#include "modbus_rev.h"
c_thread::c_thread()
{
    OwnerType = c_thread::ModbusRev;
    iswait = false;
    this->Owner = NULL;
    WaitTime = 10;
}

c_thread::~c_thread()
{

}

void c_thread::Sleep(int stime)
{
   QThread::msleep(stime);
}

bool c_thread::Wait(int stime)
{
    bool res =false;

     iswait = true;
    res = wait.wait(&mutex,stime);
     iswait = false;

     return res;
}

void c_thread::Set()
{
     wait.wakeAll();
     iswait = false;
}

bool c_thread::IsWaiting()
{
    return iswait;
}

void c_thread::run()
{
    Modbus_Rev *Modbus =(Modbus_Rev*)this->Owner;
    stop = false;
    while(true)
    {
        if (stop)
        {
            qDebug("Thread end");
            break;
        }
        if (this->Owner == NULL)
        {
            break;
        }
        if (this->OwnerType == c_thread::ModbusRev)
        {
            Modbus->_Thread_Run_Function();
        }
        delaymsec(WaitTime);
        //QThread::msleep(WaitTime);
    }
}

void c_thread::delaymsec(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    QTime NowTime = QTime::currentTime();
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        if( QTime::currentTime()<NowTime)
            break;
    }
}


