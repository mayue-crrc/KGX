#ifndef MODBUS_REV_H
#define MODBUS_REV_H
#include <qmap.h>
#include <QTimer>
#include <QtGui>
#include "libmodbus/modbus.h"
#include "c_thread.h"
struct Modbus_Read
{
    int ComID;
    int StarAddr;
    int ReadAddr;
};
struct Modbus_int16
{
    unsigned short Data;
    bool Type;
};
struct Modbus_bool
{
    bool Data;
    bool Type;
};
struct Modbus_Rev_int16
{
    int AddressID;
    int CommID;
    QMap<unsigned short,Modbus_int16> Revdata;
};

struct Modbus_Rev_bool
{
    int AddressID;
    int CommID;
    QMap<unsigned short,Modbus_bool> Revdata;
};

class Modbus_Rev:public QObject
{
    Q_OBJECT
public:
    Modbus_Rev();
    //
    bool _Link_Modbus();
    void _Init_Modbus_data();
    void _Set_Modbus_Address(int _Address);
    void _Set_Modbus_IP(char *_IP, int _Port, int _Timeout);
    void _Thread_Run_Function();
    void _Star_Modbus_Poll();
    void _Set_Modbus_Point(int _CommID, unsigned short _Address);
    void _Set_Modbus_Stop();
    bool _Send_Modbus_SingleFunction(unsigned short addre, unsigned short value);
    bool _Send_Modbus_CoilFunction(unsigned short addre, bool value);
    bool _Get_Modbus_02Function(unsigned short addre);
    bool _Get_Modbus_01Function(unsigned short addre);
    unsigned short _Get_Modbus_03Function(unsigned short addre);
    unsigned short _Get_Modbus_04Function(unsigned short addre);
    bool _Get_Modbus_SingleFunctions(int addr, int nb, uint16_t *dest);
    bool _Send_Modbus_SingleFunctions(int addr, int nb, uint16_t *dest);
    Modbus_Rev_int16 Modbus_Rev_03;
    Modbus_Rev_int16 Modbus_Rev_04;
    Modbus_Rev_bool Modbus_Rev_01;
    Modbus_Rev_bool Modbus_Rev_02;
    int m_CpuMask;
    bool _Get_Modbus_Inputregisters_Functions(int addr, int nb, uint16_t *dest);
private:
    modbus_t *mb;
    c_thread Modbus_Thread;
    unsigned int AffaitNo;
    char* Modbus_IP;
    int Modbus_Port;
    int Modbus_Timeout;
    QList<Modbus_Read> TCP_SendList;
    QMutex Sendmutex;//对TCP_SendList操作进行锁,防止多线程进行写入
    QMutex Readmutex;
    //
    int NowComID;
    unsigned short NowAdress;
    unsigned int NowAffaitNo;
    unsigned int NowReadNum;
    void delaymsec(int msec);
    void _Send_Modbus_03Function();
    void _Send_Modbus_04Function();
    void _Send_Modbus_01Function();
    void _Send_Modbus_02Function();
    void _TCP_CheckReceived_Data(QByteArray Buf);
private slots:
    //
signals:
    void DoTimeout();
};

#endif // MODBUS_REV_H
