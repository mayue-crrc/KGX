#include "rico_mvbapi.h"

RiCo_MVBApi::RiCo_MVBApi()
{
    LinkType = false;
    Sinkoffset = 0;
    Sourceoffset = 0;
    SinkPortMessage.clear();
    SourcePortMessage.clear();
    SetPortMessage.clear();
    MaxPortNum = 0;
    Sendoffset=0;
    Revoffset=0;
}

void RiCo_MVBApi::RiCo_SetDefaultPoint()
{
    SendCount = 0;
    Modbus_Tcp._Set_Modbus_Point(3,1100);//发送Count控制
    Modbus_Tcp._Set_Modbus_Point(4,199);
    Modbus_Tcp._Set_Modbus_Point(4,200);//Life Counter
    Modbus_Tcp._Set_Modbus_Point(4,201);//Device_status 0x4740
    Modbus_Tcp._Set_Modbus_Point(4,203);//Line A Error
    Modbus_Tcp._Set_Modbus_Point(4,204);//Line A Error
    Modbus_Tcp._Set_Modbus_Point(4,205);//Line B Error
    Modbus_Tcp._Set_Modbus_Point(4,206);//Line B Error
    Modbus_Tcp._Set_Modbus_Point(3,1099);//master_ready
}
bool RiCo_MVBApi::RiCo_InitMVB(char* IP,int Port)
{
    Modbus_Tcp._Init_Modbus_data();
    Modbus_Tcp._Set_Modbus_Address(1);
    Modbus_Tcp._Set_Modbus_IP(IP,Port,500);
    LinkType = Modbus_Tcp._Link_Modbus();
    if(LinkType != -1)
    {
        qDebug("Link OK");
        //RiCo_SetDefaultPoint();
        //Modbus_Tcp._Star_Modbus_Poll();
    }
    else
        qDebug("Link NG");
    return LinkType;
}
bool RiCo_MVBApi::RiCo_ReadPortData()
{

    uint16_t Regtabreg[2048]={0};
    if(Modbus_Tcp._Get_Modbus_SingleFunctions(9999,1,Regtabreg)==-1)
        return false;
    RiCo_SetPDPortConfig();
    for(int i=0;i<SetPortMessage.count();i++)
    {
        if(SetPortMessage.at(i).Type == MVB_Source)
            SourcePortMessage.append(SetPortMessage.at(i));
        else
            SinkPortMessage.append(SetPortMessage.at(i));
    }
    for(int i=0;i<MaxPortNum;i++)
    {
        if(Modbus_Tcp._Get_Modbus_SingleFunctions(10000+i*4,4,&Regtabreg[0+i*4])==-1)
            return false;
    }

//    //
//    for(int i=0;i<MaxPortNum;i++)
//    {
//        Port_Data portdata;
//        portdata.PortNow = Regtabreg[0+i*4+1] &0x0fff;
//        if(Regtabreg[0+i*4+1]&0x4000)
//            portdata.Code = MVB_FCode4;
//        else if(Regtabreg[0+i*4+1]&0x3000)
//            portdata.Code = MVB_FCode3;
//        else if(Regtabreg[0+i*4+1]&0x2000)
//            portdata.Code = MVB_FCode2;
//        else if(Regtabreg[0+i*4+1]&0x1000)
//            portdata.Code = MVB_FCode1;
//        else if(Regtabreg[0+i*4+1]&0x0000)
//            portdata.Code = MVB_FCode0;
//        portdata.offset = Regtabreg[0+i*4+2];
//        if(Regtabreg[0+i*4]==1)
//            SourcePortMessage.append(portdata);
//        else
//            SinkPortMessage.append(portdata);
//    }
    if(Modbus_Tcp._Get_Modbus_SingleFunctions(9999,1,Regtabreg)==-1)
        return false;

    return true;
}
void RiCo_MVBApi::RiCo_MVBClose()
{
    Modbus_Tcp._Set_Modbus_Stop();
}
bool RiCo_MVBApi::RiCo_ReadPort_data(uint16_t PortNum,uint16_t *dest)
{
    int ListAt = -1;
    for(int i=0;i<SinkPortMessage.count();i++)
    {
        if(SinkPortMessage.at(i).PortNow == PortNum)
        {
            ListAt = i;
            break;
        }
    }
    if(ListAt == -1)
        return false;
    int readlenght=0;
    if(SinkPortMessage.at(ListAt).Code == MVB_FCode0)
        readlenght = 1;
    else if(SinkPortMessage.at(ListAt).Code == MVB_FCode1)
        readlenght = 2;
    else if(SinkPortMessage.at(ListAt).Code == MVB_FCode2)
        readlenght = 4;
    else if(SinkPortMessage.at(ListAt).Code == MVB_FCode3)
        readlenght = 8;
    else if(SinkPortMessage.at(ListAt).Code == MVB_FCode4)
        readlenght = 16;
    return Modbus_Tcp._Get_Modbus_Inputregisters_Functions(29999+SinkPortMessage.at(ListAt).offset,readlenght,dest);
}
bool RiCo_MVBApi::RiCo_SendPort_data(uint16_t PortNum,uint16_t *dest)
{
    int ListAt = -1;
    for(int i=0;i<SourcePortMessage.count();i++)
    {
        if(SourcePortMessage.at(i).PortNow == PortNum)
        {
            ListAt = i;
            break;
        }
    }
    if(ListAt == -1)
        return false;
    int readlenght=0;
    if(SourcePortMessage.at(ListAt).Code == MVB_FCode0)
        readlenght = 1;
    else if(SourcePortMessage.at(ListAt).Code == MVB_FCode1)
        readlenght = 2;
    else if(SourcePortMessage.at(ListAt).Code == MVB_FCode2)
        readlenght = 4;
    else if(SourcePortMessage.at(ListAt).Code == MVB_FCode3)
        readlenght = 8;
    else if(SourcePortMessage.at(ListAt).Code == MVB_FCode4)
        readlenght = 16;
    Modbus_Tcp._Send_Modbus_SingleFunctions(39999+SourcePortMessage.at(ListAt).offset,readlenght,dest);
    SendCount++;
    if(SendCount > 0xffff)
        SendCount = 0;
    Modbus_Tcp._Send_Modbus_SingleFunction(1100,SendCount);
    return true;
}
bool RiCo_MVBApi::RiCo_Set_Port(uint16_t PortNum,FCode Code,PortType Type)
{
    Port_Data portdata;
    portdata.PortNow = PortNum;
    portdata.Type = Type;
    portdata.Code = Code;
    if(Type == MVB_Source)
    {
        portdata.offset = Sendoffset;
        if(Code == MVB_FCode0)
            Sendoffset=Sendoffset+1;
        else if(Code == MVB_FCode1)
            Sendoffset=Sendoffset+2;
        else if(Code == MVB_FCode2)
            Sendoffset=Sendoffset+4;
        else if(Code == MVB_FCode3)
            Sendoffset=Sendoffset+8;
        else if(Code == MVB_FCode4)
            Sendoffset=Sendoffset+16;
    }
    else
    {
        portdata.offset = Revoffset;
        if(Code == MVB_FCode0)
            Revoffset=Revoffset+1;
        else if(Code == MVB_FCode1)
            Revoffset=Revoffset+2;
        else if(Code == MVB_FCode2)
            Revoffset=Revoffset+4;
        else if(Code == MVB_FCode3)
            Revoffset=Revoffset+8;
        else if(Code == MVB_FCode4)
            Revoffset=Revoffset+16;
    }
    SetPortMessage.append(portdata);
}
bool RiCo_MVBApi::RiCo_Set_Addr(uint16_t DevAddr)
{
    uint16_t Regtabreg[2048]={0};
    Modbus_Tcp._Send_Modbus_SingleFunction(1200,DevAddr);
    do {
        Modbus_Tcp._Get_Modbus_SingleFunctions(1200,1,Regtabreg);
    }while(Regtabreg[0] != DevAddr);
}
bool RiCo_MVBApi::RiCo_SetPDPortConfig()
{
    uint16_t Regtabreg[2048]={0};
    uint16_t SetRegtabreg[2048]={0};
    uint16_t Code;
    int DataSize,NowCount;
    MaxPortNum = SetPortMessage.count();
    if(MaxPortNum > 30)
        DataSize = 30;
    else
        DataSize =  MaxPortNum;

    //
    for(int i=0;i<DataSize;i++)
    {
        Code = 0;
        if(SetPortMessage.at(i).Type == MVB_Source)
            SetRegtabreg[0+4*i] = 1;
        else
            SetRegtabreg[0+4*i] = 0;
        //
        SetRegtabreg[2+4*i] = SetPortMessage.at(i).offset;
        SetRegtabreg[3+4*i] = 0;
        //
        if(SetPortMessage.at(i).Code == MVB_FCode0)
            Code = 0x0000;
        else if(SetPortMessage.at(i).Code == MVB_FCode1)
            Code = 0x1000;
        else if(SetPortMessage.at(i).Code == MVB_FCode2)
            Code = 0x2000;
        else if(SetPortMessage.at(i).Code == MVB_FCode3)
            Code = 0x3000;
        else if(SetPortMessage.at(i).Code == MVB_FCode4)
            Code = 0x4000;
        Code = Code + SetPortMessage.at(i).PortNow;
        SetRegtabreg[1+4*i] = Code;
    }
    Regtabreg[0] = DataSize|BIT14|BIT15;
    Modbus_Tcp._Send_Modbus_SingleFunction(9999,Regtabreg[0]);
    //
    Modbus_Tcp._Send_Modbus_SingleFunctions(10000,4*DataSize,SetRegtabreg);
    //
    do {
        delaymsec(5);
        Modbus_Tcp._Get_Modbus_SingleFunctions(9999,1,Regtabreg);
    }while(Regtabreg[0]>>15);
    //
    NowCount = DataSize;
    if(NowCount >= MaxPortNum)
        return true;
    //
    delaymsec(100);
    while(1)
    {
        if(NowCount >= MaxPortNum)
            break;
        if((MaxPortNum-NowCount) > 30)
            DataSize = 30;
        else
            DataSize =  MaxPortNum-NowCount;
        //
        for(int i=NowCount;i<(DataSize+NowCount);i++)
        {
            Code = 0;
            if(SetPortMessage.at(i).Type == MVB_Source)
                SetRegtabreg[0+4*(i-NowCount)] = 1;
            else
                SetRegtabreg[0+4*(i-NowCount)] = 0;
            //
            SetRegtabreg[2+4*(i-NowCount)] = SetPortMessage.at(i).offset;
            SetRegtabreg[3+4*(i-NowCount)] = 0;
            //
            if(SetPortMessage.at(i).Code == MVB_FCode0)
                Code = 0x0000;
            else if(SetPortMessage.at(i).Code == MVB_FCode1)
                Code = 0x1000;
            else if(SetPortMessage.at(i).Code == MVB_FCode2)
                Code = 0x2000;
            else if(SetPortMessage.at(i).Code == MVB_FCode3)
                Code = 0x3000;
            else if(SetPortMessage.at(i).Code == MVB_FCode4)
                Code = 0x4000;
            Code = Code + SetPortMessage.at(i).PortNow;
            SetRegtabreg[1+4*(i-NowCount)] = Code;
        }
        //
        Regtabreg[0] = DataSize;
        Regtabreg[0] = Regtabreg[0]|BIT15;
        Modbus_Tcp._Send_Modbus_SingleFunction(9999,Regtabreg[0]);
        //
        Modbus_Tcp._Send_Modbus_SingleFunctions(10000,4*DataSize,SetRegtabreg);
        //
        do {
            delaymsec(5);
            Modbus_Tcp._Get_Modbus_SingleFunctions(9999,1,Regtabreg);
        }while(Regtabreg[0]>>15);
        delaymsec(100);
        //
        NowCount = NowCount + DataSize;
    }
    //
    return true;
}
void RiCo_MVBApi::delaymsec(int msec)
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
