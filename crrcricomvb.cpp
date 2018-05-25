#include "crrcricomvb.h"
#include "RiCo_Api/rico_mvbapi.h"
#include "global.h"

#define CRRC_MVB_DEBUG_MODE
CrrcRicoMvb::CrrcRicoMvb()
{

}
bool CrrcRicoMvb::initializeMvb()
{
     RiCo.RiCo_InitMVB("192.168.1.110",502);//初始化连接TCP或者Uart 实际应用中IP？
#ifndef USER_DEBUG_MODE
    RiCo.RiCo_Set_Addr(0x0032);//设置设备地址为0x0031
#endif
}
bool CrrcRicoMvb::InitReadPortData()
{
    return this->RiCo.RiCo_ReadPortData();
}
bool CrrcRicoMvb::setMvbStop()
{
    RiCo.RiCo_MVBClose();
}

bool CrrcRicoMvb::addPort(unsigned short port, FCode size, PortType type, unsigned short cycle)
{
    if (port > 0x0FFF && type != MVB_Virtual)
    {
        qDebug() << "port" << port << " is a invalid, please check it";

        return false;
    }

    if (MVB_Sink == type)
    {
        RiCo.RiCo_Set_Port(port,size,MVB_Sink);
    }
    else if (MVB_Source == type)
    {
        RiCo.RiCo_Set_Port(port,size,MVB_Source);
    }
    else if (MVB_Virtual == type)
    {
        // if the port is a virtual port, there is no need to add it to the mvb board.
    }

    if (this->portData.contains(port) == false)
    {
        this->portData.insert(port, new crrc_port_data(cycle));
        this->portConfigure << new struct crrc_port(port, size, type, cycle);
    }
    else
    {
        qDebug() << "the port has already been in the port list"<< __FILE__ << __LINE__;;
    }
}

bool CrrcRicoMvb::addSourcePort(unsigned short port, enum FCode size, unsigned short cycle)
{
    return this->addPort(port, size, MVB_Source, cycle);
}

bool CrrcRicoMvb::addSinkPort(unsigned short port, enum FCode size, unsigned short cycle)
{
    return this->addPort(port, size, MVB_Sink, cycle);
}

bool CrrcRicoMvb::addVirtualPort(unsigned short port, FCode size)
{
    return this->addPort(port, size, MVB_Virtual, 65535);
}

void CrrcRicoMvb::synchronizeMvbData()
{
     bool value = false;

    foreach (struct crrc_port *pointer, this->portConfigure)
    {

        if (portData.contains(pointer->port) == false)
        {
            qDebug() << "there is not port" << pointer->port << "in the list, please add it before use";
        }

        if (MVB_Sink == pointer->type)
        {
            value = RiCo.RiCo_ReadPort_data(pointer->port, portData[pointer->port]->data);
        }
        else if (MVB_Source == pointer->type)
        {
            value = RiCo.RiCo_SendPort_data(pointer->port, portData[pointer->port]->data);
        }

        if (false != value)
        {
#ifndef CRRC_MVB_DEBUG_MODE
    qDebug() << "fail to synchronize port" << pointer->port << "with the mvb bus, the error code is" << value;
#endif
        }
    }
}


// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// unsigned short int bitOffset: the bit offset in data stream
bool CrrcRicoMvb::getBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset)
{
    unsigned char *pointer = NULL, value = 0;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset - 1);
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset + 1);
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return false;
    }

    if (bitOffset < 8)
    {
        value = value & (0x80 >> bitOffset);
    }
    else
    {
        qDebug() << "the bit offset is too long" << port;

        return false;
    }

    if (value == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
unsigned char CrrcRicoMvb::getUnsignedChar(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL, value = 0;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset - 1);
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            value = *(pointer + byteOffset + 1);
        }

        return value;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
unsigned short int CrrcRicoMvb::getUnsignedInt(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL;
    unsigned short int value = 0;

    if (this->portData.contains(port) && byteOffset < 31)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        value = *(unsigned short int *)(pointer + byteOffset);

        return value;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
quint32 CrrcRicoMvb::getUnsignedInt32(unsigned short int port, unsigned short int byteOffset)
{
    // unsigned char *pointer = NULL;
    // quint32 value = 0;

    if (this->portData.contains(port) && byteOffset < 29)
    {
        // pointer = (unsigned char *)(this->portData[port]->data);
        // value = *(quint32 *)(pointer + byteOffset);
        unsigned short int temp[2] = {0};

        temp[0] = this->getUnsignedInt(port, byteOffset + 2);
        temp[1] = this->getUnsignedInt(port, byteOffset);

        return *(quint32 *)temp;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
qint32 CrrcRicoMvb::getSignedInt32(unsigned short int port, unsigned short int byteOffset)
{
    // unsigned char *pointer = NULL;
    // qint32 value = 0;

    if (this->portData.contains(port) && byteOffset < 31)
    {
        // pointer = (unsigned char *)(this->portData[port]->data);
        // value = *(qint32 *)(pointer + byteOffset);
        unsigned short int temp[2] = {0};

        temp[0] = this->getUnsignedInt(port, byteOffset + 2);
        temp[1] = this->getUnsignedInt(port, byteOffset);

        return *(qint32 *)temp;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
signed short int CrrcRicoMvb::getSignedInt(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL;
    signed short int value = 0;

    if (this->portData.contains(port) && byteOffset < 31)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        value = *(signed short int *)(pointer + byteOffset);

        return value;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// unsigned short int bitOffset: the bit offset in data stream
// bool signal: the signal would be sent on mvb bus
void CrrcRicoMvb::setBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset, bool signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            pointer = pointer + byteOffset - 1;
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            pointer = pointer + byteOffset + 1;
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
        return ;
    }

    if (bitOffset > 8)
    {
        qDebug() << "the bit offset is too long" << port;

        return;
    }

    if (true == signal)
    {
        *pointer = *pointer | (0x80 >> bitOffset);
    }
    else
    {
        *pointer = *pointer & ~(0x80 >> bitOffset);
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// unsigned char signal: the signal would be sent on mvb bus
void CrrcRicoMvb::setUnsignedChar(unsigned short int port, unsigned short int byteOffset, unsigned char signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            *(pointer + byteOffset - 1) = signal;
        }
        else
        {
            pointer = (unsigned char *)(this->portData[port]->data);
            *(pointer + byteOffset + 1) = signal;
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
        return ;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed char signal: the signal would be sent on mvb bus
void CrrcRicoMvb::setSignedChar(unsigned short int port, unsigned short int byteOffset, signed char signal)
{
    signed char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (signed char *)(this->portData[port]->data);
            *(pointer + byteOffset - 1) = signal;
        }
        else
        {
            pointer = (signed char *)(this->portData[port]->data);
            *(pointer + byteOffset + 1) = signal;
        }
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
        return ;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed short int signal: the signal would be sent on mvb bus
void CrrcRicoMvb::setUnsignedInt(unsigned short int port, unsigned short int byteOffset, unsigned short int signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 31)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        *(unsigned short int *)(pointer + byteOffset) = signal;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
        return ;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed short int signal: the signal would be sent on mvb bus
void CrrcRicoMvb::setSignedInt(unsigned short int port, unsigned short int byteOffset, signed short int signal)
{
    unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 31)
    {
        pointer = (unsigned char *)(this->portData[port]->data);
        *(signed short int *)(pointer + byteOffset) = signal;
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
        return ;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed short int signal: the signal would be sent on mvb bus
void CrrcRicoMvb::setSignedInt32(unsigned short int port, unsigned short int byteOffset, qint32 signal)
{
    // unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 29)
    {
        // pointer = (unsigned char *)(this->portData[port]->data);
        // *(qint32 *)(pointer + byteOffset) = signal;
        this->setUnsignedInt(port, byteOffset, *((unsigned short int *)(&signal) + 1));
        this->setUnsignedInt(port, byteOffset + 2, *(unsigned short int *)(&signal));
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
        return ;
    }
}

// paramerters
// unsigned short int port: the port in data stream
// unsigned short int byteOffset: the byte offset in data stream
// signed short int signal: the signal would be sent on mvb bus
void CrrcRicoMvb::setUnsignedInt32(unsigned short int port, unsigned short int byteOffset, quint32 signal)
{
    // unsigned char *pointer = NULL;

    if (this->portData.contains(port) && byteOffset < 29)
    {
        // pointer = (unsigned char *)(this->portData[port]->data);
        // *(quint32 *)(pointer + byteOffset) = signal;
        this->setUnsignedInt(port, byteOffset, *((unsigned short int *)(&signal) + 1));
        this->setUnsignedInt(port, byteOffset + 2, *(unsigned short int *)(&signal));
    }
    else
    {
        qDebug() << "there no port in the databse or byte offset is too long" << port;
        return ;
    }
}

// no parameter
unsigned short int CrrcRicoMvb::getPortSum()
{
    return this->portConfigure.size();
}

unsigned short int CrrcRicoMvb::getPortCycle(unsigned short int port)
{
    if (this->portData.contains(port) == false)
    {
        qDebug() << "the port" << port << "is not in the list, please check it";

        return 65535;
    }
    else
    {
        return 65535 - this->portData[port]->cycle;
    }
}

bool CrrcRicoMvb::isPortTimeout(unsigned short int port)
{
    if (this->portData.contains(port) == false)
    {
        qDebug() << "the port" << port << "is not in the list, please check it";

        return false;
    }
    else
    {
        int res = 0;
        for(int i=0;i<this->portConfigure.size();i++)
        {
            if(this->portConfigure[i]->port == port)
            {
                res = i;
                break;
            }else
            {
                res = 0;
            }
        }

        return (65535 - this->portData[port]->cycle) > (this->portConfigure[res]->cycle) ? true:false;
    }
}

QString CrrcRicoMvb::getVersion()
{
    return QString::number(_CRRC_MVB_VERSION);
}

bool CrrcRicoMvb::getportexist(unsigned short port)
{
    if(this->portData.contains(port))
    {
        return true;
    }else
    {
        return false;
    }
}
