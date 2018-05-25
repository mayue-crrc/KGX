#include "modbus_rev.h"

Modbus_Rev::Modbus_Rev()
{

}
//初始化Modbus函数变量
void Modbus_Rev::_Init_Modbus_data()
{
    Modbus_Rev_03.AddressID = 0;
    Modbus_Rev_03.CommID = 3;
    Modbus_Rev_03.Revdata.clear();
    //
    Modbus_Rev_04.AddressID = 0;
    Modbus_Rev_04.CommID = 4;
    Modbus_Rev_04.Revdata.clear();
    //
    Modbus_Rev_01.AddressID = 0;
    Modbus_Rev_01.CommID = 1;
    Modbus_Rev_01.Revdata.clear();
    //
    Modbus_Rev_02.AddressID = 0;
    Modbus_Rev_02.CommID = 2;
    Modbus_Rev_02.Revdata.clear();
    Modbus_Timeout = 1000;
    //
    Modbus_Thread.Owner = this;
    //
    AffaitNo = 0;
    NowComID = 0;
    NowAdress = 0;
}
//设置Modbus地址
void Modbus_Rev::_Set_Modbus_Address(int _Address)
{
    Modbus_Rev_03.AddressID = _Address;
    Modbus_Rev_04.AddressID = _Address;
    Modbus_Rev_01.AddressID = _Address;
    Modbus_Rev_02.AddressID = _Address;
}
//设置Modbus以太网信息
void Modbus_Rev::_Set_Modbus_IP(char* _IP,int _Port,int _Timeout)
{
    Modbus_IP = _IP;
    Modbus_Port = _Port;
    Modbus_Timeout = _Timeout;
}
bool Modbus_Rev::_Link_Modbus()
{
    bool Type;
    mb = modbus_new_tcp(Modbus_IP,Modbus_Port);
    modbus_set_slave(mb,Modbus_Rev_03.AddressID);
    modbus_set_response_timeout(mb,0,Modbus_Timeout*1000);
    Type = modbus_connect(mb);
    return Type;
}
//启动Modbus接收线程
void Modbus_Rev::_Star_Modbus_Poll()
{
    if(!Modbus_Thread.isRunning())
        Modbus_Thread.start();
    delaymsec(200);
}
//工作线程
void Modbus_Rev::_Thread_Run_Function()
{
    uint16_t Regtabreg[2048]={0};
    uint8_t Bittabreg[2048]={0};
    int regs;
    //
    if(TCP_SendList.count()<=0)
    {
        _Send_Modbus_03Function();
        _Send_Modbus_04Function();
        _Send_Modbus_01Function();
        _Send_Modbus_02Function();
    }
    else
    {
        Modbus_Read Data;
        Data = TCP_SendList.at(0);
        NowComID = Data.ComID;
        NowAdress = Data.StarAddr;
        NowReadNum = Data.ReadAddr;
        Sendmutex.lock();
        if(NowComID == 4)
            regs = modbus_read_input_registers(mb,NowAdress,NowReadNum,Regtabreg);
        else if(NowComID == 3)
            regs = modbus_read_registers(mb,NowAdress,NowReadNum,Regtabreg);
        else if(NowComID == 1)
            regs = modbus_read_bits(mb,NowAdress,NowReadNum,Bittabreg);
        else if(NowComID == 2)
            regs = modbus_read_input_bits(mb,NowAdress,NowReadNum,Bittabreg);
        //
        TCP_SendList.removeFirst();
        Sendmutex.unlock();
        //
        qDebug("regs === %d",regs);
        if(regs == -1)
        {
            modbus_close(mb);
            delaymsec(2000);
            modbus_connect(mb);
            delaymsec(2000);
        }
        else if(regs == NowReadNum)
        {
            if(NowComID == 1)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_01.Revdata[NowAdress+i].Type = true;
                    Modbus_Rev_01.Revdata[NowAdress+i].Data = Bittabreg[i];
                }
            }
            else if(NowComID == 2)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_02.Revdata[NowAdress+i].Type = true;
                    Modbus_Rev_02.Revdata[NowAdress+i].Data = Bittabreg[i];
                }
            }
            else if(NowComID == 3)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_03.Revdata[NowAdress+i].Type = true;
                    Modbus_Rev_03.Revdata[NowAdress+i].Data = Regtabreg[i];
                }
            }
            else if(NowComID == 4)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_04.Revdata[NowAdress+i].Type = true;
                    Modbus_Rev_04.Revdata[NowAdress+i].Data = Regtabreg[i];
                }
            }
        }
        else
        {
            if(NowComID == 1)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_01.Revdata[NowAdress+i].Type = false;
                }
            }
            else if(NowComID == 2)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_02.Revdata[NowAdress+i].Type = false;
                }
            }
            else if(NowComID == 3)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_03.Revdata[NowAdress+i].Type = false;
                }
            }
            else if(NowComID == 4)
            {
                for(int i=0;i<NowReadNum;i++)
                {
                    Modbus_Rev_04.Revdata[NowAdress+i].Type = false;
                }
            }
        }
    }
}
//设置点位
void Modbus_Rev::_Set_Modbus_Point(int _CommID,unsigned short _Address)
{
    Modbus_int16 M_int16;
    Modbus_bool M_bool;
    M_int16.Data = 0;
    M_int16.Type = false;
    M_bool.Data = 0;
    M_bool.Type = false;
    //
    if(_CommID == 3)
        Modbus_Rev_03.Revdata.insert(_Address,M_int16);
    else if(_CommID == 4)
        Modbus_Rev_04.Revdata.insert(_Address,M_int16);
    else if(_CommID == 1)
        Modbus_Rev_01.Revdata.insert(_Address,M_bool);
    else if(_CommID == 2)
        Modbus_Rev_02.Revdata.insert(_Address,M_bool);
}
//发送03点位数据
void Modbus_Rev::_Send_Modbus_03Function()
{
    Modbus_Read Data;
    unsigned short u_s,next_u_s,use_u_s;
    int Readled,Allled;
    QMap<unsigned short,Modbus_int16>::const_iterator it,it1;
    Allled = 0;
    Readled = 0;
    for(it= Modbus_Rev_03.Revdata.constBegin(); it!=Modbus_Rev_03.Revdata.constEnd();++it)
    {
        if(Readled == 0)
            use_u_s = it.key();
        u_s = it.key();
        //=================================================
        Readled++;
        if(it != Modbus_Rev_03.Revdata.constEnd())
        {
            it1 = it + 1;
            next_u_s = it1.key();
        }
        if(it1.key()!= ++u_s || Readled>=100 || Allled >= Modbus_Rev_03.Revdata.count())
        {
            Data.ComID = Modbus_Rev_03.CommID;
            Data.StarAddr = use_u_s;
            Data.ReadAddr = Readled;
            TCP_SendList.append(Data);
            AffaitNo++;
            if(AffaitNo>=0xffffffff)
                AffaitNo = 0;
            Allled = Allled + Readled;
            Readled = 0;
        }
    }
}
//发送04点位数据
void Modbus_Rev::_Send_Modbus_04Function()
{
    Modbus_Read Data;
    unsigned short u_s,next_u_s,use_u_s;
    int Readled,Allled;
    QMap<unsigned short,Modbus_int16>::const_iterator it,it1;
    Allled = 0;
    Readled = 0;
    for(it= Modbus_Rev_04.Revdata.constBegin(); it!=Modbus_Rev_04.Revdata.constEnd();++it)
    {
        if(Readled == 0)
            use_u_s = it.key();
        u_s = it.key();
        //=================================================
        Readled++;
        if(it != Modbus_Rev_04.Revdata.constEnd())
        {
            it1 = it + 1;
            next_u_s = it1.key();
        }
        if(it1.key()!= ++u_s || Readled>=100 || Allled >= Modbus_Rev_04.Revdata.count())
        {
            Data.ComID = Modbus_Rev_04.CommID;
            Data.StarAddr = use_u_s;
            Data.ReadAddr = Readled;
            TCP_SendList.append(Data);
            AffaitNo++;
            if(AffaitNo>=0xffffffff)
                AffaitNo = 0;
            Allled = Allled + Readled;
            Readled = 0;
        }
    }
}
//发送01点位数据
void Modbus_Rev::_Send_Modbus_01Function()
{
    Modbus_Read Data;
    unsigned short u_s,next_u_s,use_u_s;
    int Readled,Allled;
    QMap<unsigned short,Modbus_bool>::const_iterator it,it1;
    Readled = 0;
    Allled = 0;
    for(it= Modbus_Rev_01.Revdata.constBegin(); it!=Modbus_Rev_01.Revdata.constEnd();++it)
    {
        if(Readled == 0)
            use_u_s = it.key();
        u_s = it.key();
        //=================================================
        Readled++;
        if(it != Modbus_Rev_01.Revdata.constEnd())
        {
            it1 = it + 1;
            next_u_s = it1.key();
        }
        if(it1.key()!= ++u_s || Readled>=100 || Allled >= Modbus_Rev_01.Revdata.count())
        {
            Data.ComID = Modbus_Rev_01.CommID;
            Data.StarAddr = use_u_s;
            Data.ReadAddr = Readled;
            TCP_SendList.append(Data);
            AffaitNo++;
            if(AffaitNo>=0xffffffff)
                AffaitNo = 0;
            Allled = Allled + Readled;
            Readled = 0;
        }
    }
}
//发送02点位数据
void Modbus_Rev::_Send_Modbus_02Function()
{
    Modbus_Read Data;
    unsigned short u_s,next_u_s,use_u_s;
    int Readled,Allled;
    QMap<unsigned short,Modbus_bool>::const_iterator it,it1;
    Allled = 0;
    Readled = 0;
    for(it= Modbus_Rev_02.Revdata.constBegin(); it!=Modbus_Rev_02.Revdata.constEnd();++it)
    {
        if(Readled == 0)
            use_u_s = it.key();
        u_s = it.key();
        //=================================================
        Readled++;
        if(it != Modbus_Rev_02.Revdata.constEnd())
        {
            it1 = it + 1;
            next_u_s = it1.key();
        }
        if(it1.key()!= ++u_s || Readled>=100 || Allled >= Modbus_Rev_02.Revdata.count())
        {
            Data.ComID = Modbus_Rev_02.CommID;
            Data.StarAddr = use_u_s;
            Data.ReadAddr = Readled;
            TCP_SendList.append(Data);
            AffaitNo++;
            if(AffaitNo>=0xffffffff)
                AffaitNo = 0;
            Allled = Allled + Readled;
            Readled = 0;
        }
    }
}
//关闭Modbus
void Modbus_Rev::_Set_Modbus_Stop()
{
    Modbus_Thread.stop = true;
    delaymsec(1000);
    modbus_close(mb);
    modbus_free(mb);
}
//延时函数
void Modbus_Rev::delaymsec(int msec)
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
//设置03 寄存器
bool Modbus_Rev::_Send_Modbus_SingleFunction(unsigned short addre,unsigned short value)
{
    bool Type;
    Sendmutex.lock();
    Type = modbus_write_register(mb,addre,value);
    //qDebug("_Send_Modbus_SingleFunction Type == %d,addre == %d,value == %X",Type,addre,value);
    Sendmutex.unlock();
    return Type;
}
bool Modbus_Rev::_Send_Modbus_SingleFunctions(int addr, int nb,uint16_t *dest)
{
    bool Type;
    Sendmutex.lock();
    Type = modbus_write_registers(mb,addr,nb,dest);
    //qDebug("_Send_Modbus_SingleFunctions Type == %d",Type);
    Sendmutex.unlock();
    return Type;
}
bool Modbus_Rev::_Get_Modbus_SingleFunctions(int addr, int nb,uint16_t *dest)
{
    bool Type;
    Sendmutex.lock();
    Type = modbus_read_registers(mb,addr,nb,dest);
    //qDebug("_Get_Modbus_SingleFunctions Type == %d",Type);
    Sendmutex.unlock();
    return Type;
}
bool Modbus_Rev::_Get_Modbus_Inputregisters_Functions(int addr, int nb,uint16_t *dest)
{
    bool Type;
    Sendmutex.lock();
    Type = modbus_read_input_registers(mb,addr,nb,dest);
    //qDebug("_Get_Modbus_Inputregisters_Functions Type == %d,addre == %d,value == %X",Type,addr,nb);
    Sendmutex.unlock();
    return Type;
}
//设置01 IO量
bool Modbus_Rev::_Send_Modbus_CoilFunction(unsigned short addre,bool value)
{
    bool Type;
    Sendmutex.lock();
    Type = modbus_write_bit(mb,addre,value);
    Sendmutex.unlock();
    return Type;
}
//
bool Modbus_Rev::_Get_Modbus_02Function(unsigned short addre)
{
    QMap<unsigned short,Modbus_bool>::const_iterator it;
    if(!Modbus_Rev_02.Revdata.contains(addre))
        return false;
    it = Modbus_Rev_02.Revdata.find(addre);
    return it.value().Data;
}
bool Modbus_Rev::_Get_Modbus_01Function(unsigned short addre)
{
    QMap<unsigned short,Modbus_bool>::const_iterator it;
    if(!Modbus_Rev_01.Revdata.contains(addre))
        return false;
    it = Modbus_Rev_01.Revdata.find(addre);
    return it.value().Data;
}
unsigned short Modbus_Rev::_Get_Modbus_03Function(unsigned short addre)
{
    QMap<unsigned short,Modbus_int16>::const_iterator it;
    if(!Modbus_Rev_03.Revdata.contains(addre))
        return 0;
    it = Modbus_Rev_03.Revdata.find(addre);
    return it.value().Data;
}
unsigned short Modbus_Rev::_Get_Modbus_04Function(unsigned short addre)
{
    QMap<unsigned short,Modbus_int16>::const_iterator it;
    if(!Modbus_Rev_04.Revdata.contains(addre))
        return 0;
    it = Modbus_Rev_04.Revdata.find(addre);
    return it.value().Data;
}
