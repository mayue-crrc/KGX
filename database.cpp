#include "database.h"
#include "crrcricomvb.h"
#include <QDebug>
#include "MainGetDefaultPara.h"


#define HMISOURCESINKPORTS 8
#define SOURCEPORT1 0
#define SOURCEPORT2 1
#define SOURCEPORT3 2
#define SOURCEPORT4 3
#define SINKPORT1 4
#define SINKPORT2 5
#define SINKPORT3 6
#define SINKPORT4 7
Database::Database()
{
    //this->crrcCan = NULL;
    HmiLifeSignal_U8 = 0;
}

void Database::getHMISourcePost(QList<unsigned short int> &ports)
{
    //0~3 source ports 4~7 sink ports
    this->m_HMISourcePorts = ports;

}

bool Database::CheckLifesignal(unsigned char lifeSignal)
{
    static unsigned short int temp = 0;
    static int counter = 0;

    if (temp == lifeSignal)
    {
        counter --;
    }
    else if (temp != lifeSignal)
    {
        counter ++;
    }

    temp = lifeSignal;

    if (counter >= 10)
    {
        counter = 10;

        return true;
    }
    else if (counter <= 0)
    {
        counter = 0;

        return false;
    }
    else
    {
        return false;
    }

}
void Database::updateDatabse(CrrcRicoMvb *t_crrcRicoMvb)
{
    this->crrcRicoMvb = t_crrcRicoMvb;
    this->HmiLifeSignal_U8++;

    //HMI-CCU
    //0~3 source ports 4~7 sink ports

    if(m_HMISourcePorts.size() != HMISOURCESINKPORTS)
        return;
    this->crrcRicoMvb->setUnsignedChar(m_HMISourcePorts.at(SOURCEPORT1),0,this->HmiLifeSignal_U8);


    this->CTHM_CCU1On_B1 = this->crrcRicoMvb->getBool(0x308,0,7);
    this->CTHM_CCU2On_B1 = this->crrcRicoMvb->getBool(0x308,0,6);
    this->CTHM_ERM1On_B1 = this->crrcRicoMvb->getBool(0x308,0,5);
    this->CTHM_ERM2On_B1 = this->crrcRicoMvb->getBool(0x308,0,4);
    this->CTHM_HMI1On_B1 = this->crrcRicoMvb->getBool(0x308,0,3);
    this->CTHM_HMI2On_B1 = this->crrcRicoMvb->getBool(0x308,0,2);

    this->CTHM_RIOM1GWOnline_B1 = this->crrcRicoMvb->getBool(0x308,1,7);
    this->CTHM_RIOM1DI1Online_B1 = this->crrcRicoMvb->getBool(0x308,1,6);
    this->CTHM_RIOM1DI2Online_B1 = this->crrcRicoMvb->getBool(0x308,1,5);
    this->CTHM_RIOM1DI3Online_B1 = this->crrcRicoMvb->getBool(0x308,1,4);
    this->CTHM_RIOM1DI4Online_B1 = this->crrcRicoMvb->getBool(0x308,1,3);
    this->CTHM_RIOM1DOOnline_B1 = this->crrcRicoMvb->getBool(0x308,1,2);
    this->CTHM_RIOM1AXOnline_B1 = this->crrcRicoMvb->getBool(0x308,1,1);

    this->CTHM_RIOM2GWOnline_B1 = this->crrcRicoMvb->getBool(0x308,2,7);
    this->CTHM_RIOM2DI1Online_B1 = this->crrcRicoMvb->getBool(0x308,2,6);
    this->CTHM_RIOM2DOOnline_B1 = this->crrcRicoMvb->getBool(0x308,2,5);

    this->CTHM_RIOM1GWOnline_B1 = this->crrcRicoMvb->getBool(0x308,3,7);
    this->CTHM_RIOM1DI1Online_B1 = this->crrcRicoMvb->getBool(0x308,3,6);
    this->CTHM_RIOM1DI2Online_B1 = this->crrcRicoMvb->getBool(0x308,3,5);
    this->CTHM_RIOM1DI3Online_B1 = this->crrcRicoMvb->getBool(0x308,3,4);
    this->CTHM_RIOM1DI4Online_B1 = this->crrcRicoMvb->getBool(0x308,3,3);
    this->CTHM_RIOM1DOOnline_B1 = this->crrcRicoMvb->getBool(0x308,3,2);
    this->CTHM_RIOM1AXOnline_B1 = this->crrcRicoMvb->getBool(0x308,3,1);

    this->CTHM_BCU1On_B1 = this->crrcRicoMvb->getBool(0x308,4,7);
    this->CTHM_BCU2On_B1 = this->crrcRicoMvb->getBool(0x308,4,6);
    this->CTHM_BCU3On_B1 = this->crrcRicoMvb->getBool(0x308,4,5);
    this->CTHM_TCU1On_B1 = this->crrcRicoMvb->getBool(0x308,5,7);
    this->CTHM_TCU2On_B1 = this->crrcRicoMvb->getBool(0x308,5,6);
    this->CTHM_TCU3On_B1 = this->crrcRicoMvb->getBool(0x308,5,5);
    this->CTHM_TCU4On_B1 = this->crrcRicoMvb->getBool(0x308,5,4);
    this->CTHM_ACU1On_B1 = this->crrcRicoMvb->getBool(0x308,6,7);
    this->CTHM_ACU2On_B1 = this->crrcRicoMvb->getBool(0x308,6,6);
    this->CTHM_BCCU1On_B1 = this->crrcRicoMvb->getBool(0x308,6,5);
    this->CTHM_BCCU2On_B1 = this->crrcRicoMvb->getBool(0x308,6,4);

    this->CTHM_MDCU1On_B1 = this->crrcRicoMvb->getBool(0x308,7,7);
    this->CTHM_MDCU2On_B1 = this->crrcRicoMvb->getBool(0x308,7,6);
    this->CTHM_MDCU3On_B1 = this->crrcRicoMvb->getBool(0x308,7,5);
    this->CTHM_MDCU4On_B1 = this->crrcRicoMvb->getBool(0x308,7,4);
    this->CTHM_MDCU5On_B1 = this->crrcRicoMvb->getBool(0x308,7,3);
    this->CTHM_MDCU6On_B1 = this->crrcRicoMvb->getBool(0x308,7,2);

    this->CTHM_PIS1On_B1 = this->crrcRicoMvb->getBool(0x308,8,7);
    this->CTHM_PIS2On_B1 = this->crrcRicoMvb->getBool(0x308,8,6);
    this->CTHM_HVAC1On_B1 = this->crrcRicoMvb->getBool(0x308,9,7);
    this->CTHM_HVAC2On_B1 = this->crrcRicoMvb->getBool(0x308,9,6);
    this->CTHM_HVAC3On_B1 = this->crrcRicoMvb->getBool(0x308,9,5);
    this->CTHM_ATC1On_B1 = this->crrcRicoMvb->getBool(0x308,10,7);
    this->CTHM_ATC2On_B1 = this->crrcRicoMvb->getBool(0x308,10,6);
    this->CTHM_BMS1On_B1 = this->crrcRicoMvb->getBool(0x308,11,7);
    this->CTHM_BMS2On_B1 = this->crrcRicoMvb->getBool(0x308,11,6);

    this->CTHM_CCU1Active_B1 = this->crrcRicoMvb->getBool(0x308,12,7);
    this->CTHM_CCU2Active_B1 = this->crrcRicoMvb->getBool(0x308,12,6);
    this->CTHM_PIS1Active_B1 = this->crrcRicoMvb->getBool(0x308,12,5);
    this->CTHM_PIS2Active_B1 = this->crrcRicoMvb->getBool(0x308,12,4);

    this->CTHM_MC1Active_B1 = this->crrcRicoMvb->getBool(0x308,20,7);
    this->CTHM_MC2Active_B1 = this->crrcRicoMvb->getBool(0x308,20,6);
    this->CTHM_Traction_B1 = this->crrcRicoMvb->getBool(0x308,20,5);
    this->CTHM_Brake_B1 = this->crrcRicoMvb->getBool(0x308,20,4);
    this->CTHM_FastBrake_B1 = this->crrcRicoMvb->getBool(0x308,20,3);
    this->CTHM_EmgyBrake_B1 = this->crrcRicoMvb->getBool(0x308,20,2);
    this->CTHM_Backward_B1 = this->crrcRicoMvb->getBool(0x308,20,1);
    this->CTHM_Forward_B1 = this->crrcRicoMvb->getBool(0x308,20,0);

    this->CTHM_Grade_U8 = this->crrcRicoMvb->getUnsignedChar(0x308,25);
    this->CTHM_TrainSpeed_U16 = this->crrcRicoMvb->getUnsignedInt(0x308,26);
    this->CTHM_Voltage_U16 = this->crrcRicoMvb->getUnsignedInt(0x308,28);
    this->CTHM_Current_I16 = this->crrcRicoMvb->getSignedInt(0x308,30);

    this->CTHM_CCU1SWVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,0);
    this->CTHM_CCU1MVBVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,1);
    this->CTHM_CCU1SDBVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,2);
    this->CTHM_CCU1VxWorksVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,3);
    this->CTHM_CCU2SWVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,4);
    this->CTHM_CCU2MVBVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,5);
    this->CTHM_CCU2SDBVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,6);
    this->CTHM_CCU2VxWorksVer_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,7);
    this->CTHM_CCU1VerOK_B1 = this->crrcRicoMvb->getBool(0x309,8,7);
    this->CTHM_CCU2VerOK_B1 = this->crrcRicoMvb->getBool(0x309,8,6);

    this->CTHM_CCU1DevIPa_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,9);
    this->CTHM_CCU1DevIPb_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,10);
    this->CTHM_CCU1DevIPc_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,11);
    this->CTHM_CCU1DevIPd_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,12);
    this->CTHM_CCU2DevIPa_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,13);
    this->CTHM_CCU2DevIPb_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,14);
    this->CTHM_CCU2DevIPc_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,15);
    this->CTHM_CCU2DevIPd_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,16);
    this->CTHM_WheelDig1FedBk_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,24);
    this->CTHM_WheelDig2FedBk_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,25);
    this->CTHM_WheelDig3FedBk_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,26);
    this->CTHM_WheelDig4FedBk_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,27);
    this->CTHM_WheelDig5FedBk_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,28);
    this->CTHM_WheelDig6FedBk_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,29);
    this->CTHM_HMI1Ver_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,30);
    this->CTHM_HMI2Ver_U8 = this->crrcRicoMvb->getUnsignedChar(0x309,31);

}
