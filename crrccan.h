#ifndef CRRCCAN_H
#define CRRCCAN_H

#include <QMap>
#include "can4linux.h"

class CrrcCan
{
public:
    CrrcCan();
    void synchronize();
    unsigned char getUnsignedChar(unsigned short int port, unsigned char byteOffset);
    unsigned short int getUnsignedInt(unsigned short int port, unsigned char byteOffset);
    signed short int getSignedInt(unsigned short int port, unsigned char byteOffset);
    bool getBool(unsigned short int port, unsigned char byteOffset, unsigned short int bitOffset);
    bool setBool(unsigned short int port, unsigned char byteOffset, unsigned char bitOffset, bool signal);
    bool setUnsignedInt(unsigned short int port, unsigned char byteOffset, unsigned short int signal);
    bool setUnsignedInt(unsigned short int port, unsigned char byteOffset, signed short int signal);
    bool setUnsignedChar(unsigned short int port, unsigned char byteOffset, unsigned char signal);
    QList<unsigned short int> getAllPorts();
    int getCanSize();
    bool getCanportexist(unsigned short int port);

private:
    int handle;
    bool connection;
    QMap<unsigned short int, canmsg_t> data;
};

#endif // CRRCCAN_H
