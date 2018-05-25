#include "crrccan.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <QDebug>

#define CAN_MAX_MESSAGE 100
#define CAN_OUTPUT

CrrcCan::CrrcCan()
{
    handle = open("/dev/can0", O_RDWR | O_NONBLOCK);

    if (handle >= 0)
    {
        this->connection = true;
        qDebug() << "connect to the can board card successfully, please check it";
    }
    else
    {
        this->connection = false;
        qDebug() << "fail to connect to the can board card, please check it";
    }
}

void CrrcCan::synchronize()
{
    canmsg_t pointer[CAN_MAX_MESSAGE];
    int counter = read(handle, pointer, CAN_MAX_MESSAGE);

#ifdef CAN_OUTPUT
    qDebug() << "there are" << counter << "message got";
#endif

    for (int i = 0; i < counter; i ++)
    {
        if (this->data.contains(pointer[i].id) == true)
        {
            this->data[pointer[i].id] = pointer[i];
        }
        else
        {
            this->data.insert(pointer[i].id, pointer[i]);
        }
    }
}

unsigned char CrrcCan::getUnsignedChar(unsigned short port, unsigned char byteOffset)
{
    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list";

        return 0;
    }
    else if (byteOffset > 8)
    {
        qDebug() << "the byte offset is larger than 8";

        return 0;
    }

    return this->data[port].data[byteOffset];
}

unsigned short int CrrcCan::getUnsignedInt(unsigned short int port, unsigned char byteOffset)
{
    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list";

        return 0;
    }
    else if (byteOffset > 8)
    {
        qDebug() << "the byte offset is larger than 8";

        return 0;
    }

    void *pointer = this->data[port].data + byteOffset;

    return *(unsigned short int *)pointer;
}

signed short int CrrcCan::getSignedInt(unsigned short int port, unsigned char byteOffset)
{
    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list";

        return 0;
    }
    else if (byteOffset > 8)
    {
        qDebug() << "the byte offset is larger than 8";

        return 0;
    }

    void *pointer = this->data[port].data + byteOffset;

    return *(signed short int *)pointer;
}

bool CrrcCan::getBool(unsigned short int port, unsigned char byteOffset, unsigned short int bitOffset)
{
    if (this->data.contains(port) == false)
    {
        qDebug() << "no port" << port << "in the list";

        return false;
    }
    else if (byteOffset > 8)
    {
        qDebug() << "the byte offset is larger than 8";

        return false;
    }
    else if (bitOffset > 8)
    {
        qDebug() << "the bit offset is larger than 8";

        return false;
    }

    unsigned char value = this->data[port].data[byteOffset] & (0x01 << bitOffset);

    if (0 == value)
    {
        return false;
    }
    else
    {
        return true;
    }
}

QList<unsigned short int> CrrcCan::getAllPorts()
{
    return this->data.keys();
}

int CrrcCan::getCanSize()
{
    return this->data.size();
}

bool CrrcCan::getCanportexist(unsigned short port)
{
    if(this->data.contains(port))
    {
        return true;
    }else
    {
        return false;
    }
}
