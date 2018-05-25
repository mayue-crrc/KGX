#ifndef RICO_MVBAPI_H
#define RICO_MVBAPI_H
#include "modbus_rev.h"
#define BIT0 0x0001
#define BIT1 0x0002
#define BIT2 0x0004
#define BIT3 0x0008
#define BIT4 0x0010
#define BIT5 0x0020
#define BIT6 0x0040
#define BIT7 0x0080
#define BIT8 0x0100
#define BIT9 0x0200
#define BIT10 0x0400
#define BIT11 0x0800
#define BIT12 0x1000
#define BIT13 0x2000
#define BIT14 0x4000
#define BIT15 0x8000
enum PortType
{
    MVB_Sink,//接收
    MVB_Source,//发送
    MVB_Virtual
};
enum FCode
{
    MVB_FCode0,//2byte
    MVB_FCode1,//4byte
    MVB_FCode2,//8byte
    MVB_FCode3,//16byte
    MVB_FCode4//32byte
};
struct Port_Data
{
    int16_t PortNow;
    int offset;
    FCode Code;
    PortType Type;
};
class RiCo_MVBApi
{
public:
    RiCo_MVBApi();
    bool RiCo_InitMVB(char* IP,int Port);//设置连接MVB
    void RiCo_MVBClose();//关闭MVB
    bool RiCo_ReadPortData();//读取预设MVB数据
    bool RiCo_ReadPort_data(uint16_t PortNum,uint16_t *dest);//读取端口数据
    bool RiCo_SendPort_data(uint16_t PortNum,uint16_t *dest);//写端口数据
    bool RiCo_Set_Port(uint16_t PortNum, FCode Code, PortType Type);//设置端口信息
    bool RiCo_Set_Addr(uint16_t DevAddr);
    bool RiCo_SetPDPortConfig();
    void delaymsec(int msec);
    QList<Port_Data> SetPortMessage;
    QList<Port_Data> SinkPortMessage;
    QList<Port_Data> SourcePortMessage;
private:
    Modbus_Rev Modbus_Tcp;
    int SendCount;
    bool LinkType;
    int Sinkoffset;
    int Sourceoffset;
    int MaxPortNum;
    uint16_t Sendoffset;
    uint16_t Revoffset;
    //
    void RiCo_SetDefaultPoint();//初始数据值
};

#endif // RICO_MVBAPI_H
