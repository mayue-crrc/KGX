#ifndef DATABASE_H
#define DATABASE_H

#include "QList"
class CrrcRicoMvb;

class Database
{
public:
    Database();
    void updateDatabse(CrrcRicoMvb *crrcRicoMvb);
    bool CheckLifesignal(unsigned char lifeSignal);
    void getHMISourcePost(QList<unsigned short int> &ports);

private:
    CrrcRicoMvb* crrcRicoMvb;
    QList<unsigned short int> m_HMISourcePorts;
public:
    unsigned short int HmiLifeSignal_U8;

    // CCU-HMI 308 309
    //**************** online
    bool CTHM_CCU1On_B1 ,CTHM_CCU2On_B1,CTHM_ERM1On_B1,CTHM_ERM2On_B1,CTHM_HMI1On_B1,CTHM_HMI2On_B1,
    CTHM_RIOM1GWOnline_B1,CTHM_RIOM1DI1Online_B1,CTHM_RIOM1DI2Online_B1,CTHM_RIOM1DI3Online_B1,CTHM_RIOM1DI4Online_B1,
    CTHM_RIOM1DOOnline_B1,CTHM_RIOM1AXOnline_B1,CTHM_RIOM2GWOnline_B1,CTHM_RIOM2DI1Online_B1,CTHM_RIOM2DOOnline_B1,
    CTHM_RIOM3GWOnline_B1,CTHM_RIOM3DI1Online_B1,CTHM_RIOM3DI2Online_B1,CTHM_RIOM3DI3Online_B1,CTHM_RIOM3DI4Online_B1,
    CTHM_RIOM3DOOnline_B1,CTHM_RIOM3AXOnline_B1,CTHM_BCU1On_B1,CTHM_BCU2On_B1,CTHM_BCU3On_B1,CTHM_TCU1On_B1,
    CTHM_TCU2On_B1,CTHM_TCU3On_B1,CTHM_TCU4On_B1,CTHM_ACU1On_B1,CTHM_ACU2On_B1,CTHM_BCCU1On_B1,CTHM_BCCU2On_B1,
    CTHM_MDCU1On_B1,CTHM_MDCU2On_B1,CTHM_MDCU3On_B1,CTHM_MDCU4On_B1,CTHM_MDCU5On_B1,CTHM_MDCU6On_B1,
    CTHM_PIS1On_B1,CTHM_PIS2On_B1,CTHM_HVAC1On_B1,CTHM_HVAC2On_B1,CTHM_HVAC3On_B1,CTHM_ATC1On_B1,CTHM_ATC2On_B1,
    CTHM_BMS1On_B1,CTHM_BMS2On_B1,CTHM_CCU1Active_B1,CTHM_CCU2Active_B1,CTHM_PIS1Active_B1,CTHM_PIS2Active_B1,
    //**************** other
    CTHM_MC1Active_B1,CTHM_MC2Active_B1,CTHM_Traction_B1,CTHM_Brake_B1,CTHM_FastBrake_B1,CTHM_EmgyBrake_B1,CTHM_Backward_B1,CTHM_Forward_B1,
    CTHM_CCU1VerOK_B1,CTHM_CCU2VerOK_B1;
    unsigned char CTHM_CCU1SWVer_U8,CTHM_CCU1MVBVer_U8,CTHM_CCU1SDBVer_U8,CTHM_CCU1VxWorksVer_U8,
    CTHM_CCU2SWVer_U8,CTHM_CCU2MVBVer_U8,CTHM_CCU2SDBVer_U8,CTHM_CCU2VxWorksVer_U8,CTHM_Grade_U8,
    CTHM_CCU1DevIPa_U8,CTHM_CCU1DevIPb_U8,CTHM_CCU1DevIPc_U8,CTHM_CCU1DevIPd_U8,
    CTHM_CCU2DevIPa_U8,CTHM_CCU2DevIPb_U8,CTHM_CCU2DevIPc_U8,CTHM_CCU2DevIPd_U8,
    CTHM_WheelDig1FedBk_U8,CTHM_WheelDig2FedBk_U8,CTHM_WheelDig3FedBk_U8,
    CTHM_WheelDig4FedBk_U8,CTHM_WheelDig5FedBk_U8,CTHM_WheelDig6FedBk_U8,
    CTHM_HMI1Ver_U8,CTHM_HMI2Ver_U8;
    unsigned short int CTHM_TrainSpeed_U16,CTHM_Voltage_U16;

    signed short int CTHM_Current_I16;


};

#endif // DATABASE_H
