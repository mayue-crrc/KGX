#include "database.h"
#include "crrcricomvb.h"
#include <QDebug>

Database::Database()
{
    //this->crrcCan = NULL;
    HmiLifeSignal_U8 = 0;
}

void Database::updateDatabse(CrrcRicoMvb *t_crrcRicoMvb)
{
    this->crrcRicoMvb = t_crrcRicoMvb;


    this->HmiLifeSignal_U8++;
    this->crrcRicoMvb->setUnsignedChar(0x320,0,HmiLifeSignal_U8);

    this->CTHM_CCU1On_B1 = this->crrcRicoMvb->getBool(0x308,0,7);
    this->CTHM_CCU2On_B1 = this->crrcRicoMvb->getBool(0x308,0,6);
    this->CTHM_ERM1On_B1 = this->crrcRicoMvb->getBool(0x308,0,5);
    this->CTHM_ERM2On_B1 = this->crrcRicoMvb->getBool(0x308,0,4);
    this->CTHM_HMI1On_B1 = this->crrcRicoMvb->getBool(0x308,0,3);
    this->CTHM_HMI2On_B1 = this->crrcRicoMvb->getBool(0x308,0,2);

    this->CTHM_CatenaryVoltage_U16 =  this->crrcRicoMvb->getUnsignedInt(0x308,28);
    this->CTHM_CatenaryCurrent_I16 =  this->crrcRicoMvb->getSignedInt(0x308,30);

    this->CTHM_WheelDig1FedBk_U8 =  this->crrcRicoMvb->getUnsignedChar(0x309,24);
    this->CTHM_WheelDig2FedBk_U8 =  this->crrcRicoMvb->getUnsignedChar(0x309,25);
    this->CTHM_WheelDig3FedBk_U8 =  this->crrcRicoMvb->getUnsignedChar(0x309,26);
    this->CTHM_WheelDig4FedBk_U8 =  this->crrcRicoMvb->getUnsignedChar(0x309,27);
    this->CTHM_WheelDig5FedBk_U8 =  this->crrcRicoMvb->getUnsignedChar(0x309,28);
    this->CTHM_WheelDig6FedBk_U8 =  this->crrcRicoMvb->getUnsignedChar(0x309,29);

    Test_U32 = this->crrcRicoMvb->getUnsignedInt32(0x309,0);
}
