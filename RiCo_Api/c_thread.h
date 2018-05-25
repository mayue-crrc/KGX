#ifndef C_THREAD_H
#define C_THREAD_H
#include <QThread>
#include <QWaitCondition>
#include <QMutex>
#include <QTextEdit>
#include <QObject>

class c_thread:public QThread
{
public:
    c_thread();
    ~c_thread();
    static void Sleep(int stime);
    bool Wait(int stime);
    void Set();
    bool IsWaiting();
private :
    QWaitCondition wait;    //线程同步
    QMutex mutex;
protected:
    void run();             //运行
public :
    QObject *Owner;
    bool stop;
    enum {ModbusRev = 0};
    int OwnerType;
    int WaitTime;
    void delaymsec(int msec);
private:
    bool iswait;
};
#endif // CTHREAD_H
