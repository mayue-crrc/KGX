#ifndef CRRCRICOMVB_H
#define CRRCRICOMVB_H
#include "RiCo_Api/rico_mvbapi.h"

#define _CRRC_MVB_VERSION 1
#define _CRRC_MVB_SUPERVISION_TIME 1

typedef uint16_t RICO_DATA[16];

//enum crrc_port_size
//{
//    uFCode1 = 1,
//    uFCode2,
//    uFCode3,
//    uFCode4
//};

//enum crrc_port_type
//{
//    uSinkPort,
//    uSourcePort,
//    uVirtualPort
//};

struct crrc_port
{
    unsigned short int port;
    enum FCode size;
    enum PortType type;
    unsigned short int cycle;

    crrc_port(unsigned short int port, enum FCode size, enum PortType type, unsigned short int cycle)
    {
        this->port = port;
        this->size = size;
        this->type = type;
        this->cycle = cycle;
    }
};

struct crrc_port_data
{
    RICO_DATA data;
    unsigned short int cycle;

    crrc_port_data(unsigned short int cycle)
    {
        this->cycle = cycle;

        memset(data, 0, sizeof data);
    }
};
class CrrcRicoMvb
{
public:
    CrrcRicoMvb();
    bool initializeMvb();
    bool setMvbStop();
    bool addPort(unsigned short int port, enum FCode size, enum PortType type, unsigned short int cycle);
    bool addSourcePort(unsigned short int port, enum FCode size, unsigned short int cycle);
    bool addSinkPort(unsigned short int port, enum FCode size, unsigned short int cycle);
    bool addVirtualPort(unsigned short int port, enum FCode size);

    void synchronizeMvbData();

    bool getBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset);
    unsigned char getUnsignedChar(unsigned short int port, unsigned short int byteOffset);
    unsigned short int getUnsignedInt(unsigned short int port, unsigned short int byteOffset);
    signed short int getSignedInt(unsigned short int port, unsigned short int byteOffset);
    qint32 getSignedInt32(unsigned short int port, unsigned short int byteOffset);
    quint32 getUnsignedInt32(unsigned short int port, unsigned short int byteOffset);
    void setBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset, bool signal);
    void setUnsignedChar(unsigned short int port, unsigned short int byteOffset, unsigned char signal);
    void setSignedChar(unsigned short int port, unsigned short int byteOffset, signed char signal);
    void setUnsignedInt(unsigned short int port, unsigned short int byteOffset, unsigned short int signal);
    void setSignedInt(unsigned short int port, unsigned short int byteOffset, signed short int signal);
    void setUnsignedInt32(unsigned short int port, unsigned short int byteOffset, quint32 signal);
    void setSignedInt32(unsigned short int port, unsigned short int byteOffset, qint32 signal);

    unsigned short int getPortSum();
    unsigned short int getPortCycle(unsigned short int port);
    bool isPortTimeout(unsigned short int port);
    QString getVersion();
    bool getportexist(unsigned short int port);

    //add b20180521 initmvb
    bool InitReadPortData();



private:
    RiCo_MVBApi RiCo;

    QList<struct crrc_port *> portConfigure;
    QMap<int, struct crrc_port_data *> portData;

    uint16_t Regtabreg[16];
    uint16_t SRegtabreg[16];
};

#endif // CRRCRICOMVB_H
