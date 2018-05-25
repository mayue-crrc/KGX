#ifndef DATABASE_H
#define DATABASE_H

class CrrcRicoMvb;

class Database
{
public:
    Database();
    void updateDatabse(CrrcRicoMvb *crrcRicoMvb);

private:
    CrrcRicoMvb* crrcRicoMvb;

public:
    unsigned short int HmiLifeSignal_U8;

    // CCU-HMI 308 309
    //**************** online
    bool CTHM_CCU1On_B1 ,CTHM_CCU2On_B1,CTHM_ERM1On_B1,CTHM_ERM2On_B1,CTHM_HMI1On_B1,CTHM_HMI2On_B1,
        CTHM_TC1RIOMGWOn_B1,CTHM_Mp1RIOMGWOn_B1,CTHM_M1RIOMGWOn_B1,CTHM_M2RIOMGWOn_B1,CTHM_Mp2RIOMGWOn_B1,CTHM_TC2RIOMGWOn_B1,
        CTHM_TC1DI1On_B1,CTHM_TC1DI2On_B1,CTHM_TC1DI3On_B1,CTHM_TC1DI4On_B1,CTHM_TC1DI5On_B1,CTHM_TC1DO1On_B1,CTHM_TC1AX1On_B1,
        CTHM_MP1DI1On_B1, CTHM_MP1DO1On_B1,CTHM_M1DI1On_B1,CTHM_M1DO1On_B1,CTHM_M2DI1On_B1,CTHM_M2DO1On_B1, CTHM_MP2DI1On_B1,CTHM_MP2DO1On_B1,
        CTHM_TC2DI1On_B1,CTHM_TC2DI2On_B1,CTHM_TC2DI3On_B1,CTHM_TC2DI4On_B1,CTHM_TC2DI5On_B1,CTHM_TC2DO1On_B1,CTHM_TC2AX1On_B1,
        CTHM_BCU1On_B1,CTHM_BCU2On_B1,CTHM_BCU3On_B1,CTHM_BCU4On_B1
        ,CTHM_DCUM1On_B1,CTHM_DCUM2On_B1,CTHM_DCUM3On_B1,CTHM_DCUM4On_B1
        ,CTHM_ACU1On_B1,CTHM_ACU2On_B1,CTHM_ACU3On_B1,CTHM_ACU4On_B1
        ,CTHM_EDCU1On_B1,CTHM_EDCU2On_B1,CTHM_EDCU3On_B1,CTHM_EDCU4On_B1,CTHM_EDCU5On_B1,CTHM_EDCU6On_B1
        ,CTHM_EDCU7On_B1,CTHM_EDCU8On_B1,CTHM_EDCU9On_B1,CTHM_EDCU10On_B1,CTHM_EDCU11On_B1,CTHM_EDCU12On_B1
        ,CTHM_PIS1On_B1,CTHM_PIS2On_B1
        ,CTHM_HVAC1On_B1,CTHM_HVAC2On_B1,CTHM_HVAC3On_B1,CTHM_HVAC4On_B1,CTHM_HVAC5On_B1,CTHM_HVAC6On_B1
        ,CTHM_ATC1On_B1,CTHM_WMS2On_B1
        ,CTHM_CCUD1On_B1,CTHM_CCUD2On_B1;

    //**************** other
    bool CTHM_ATC1Active_B1,CTHM_PIS1Active_B1,CTHM_PIS2Active_B1,CTHM_CCU1Active_B1,CTHM_CCU2Active_B1
        ,CTHM_TC1Active_B1,CTHM_TC2Active_B1,CTHM_Traction_B1,CTHM_Brake_B1
        ,CTHM_FastBrake_B1,CTHM_EmgyBrake_B1,CTHM_Backward_B1,CTHM_Forward_B1,
        CTHM_SAVETimeFedBk_B1,CTHM_SAVETrainNumFedBk_B1,CTHM_SAVELineNumFedBk_B1,CTHM_SAVEFirstStationFedBk_B1
        ,CTHM_SAVELastStationFedBk_B1,CTHM_WorkshopPowerSupply_B1,CTHM_BatteryLow_B1 ,CTHM_AcDeTestOn_B1;

    unsigned char CTHM_Grade_U8,CTHM_CurrentStation_U8,CTHM_NextStation_U8
                ,CTHM_CCU1SWVer_U8,CTHM_CCU1MVBVer_U8,CTHM_CCU1SDBVer_U8,CTHM_CCU1VxWorksVer_U8,CTHM_CCU1FPGAVer_U8
                ,CTHM_CCU2SWVer_U8,CTHM_CCU2MVBVer_U8,CTHM_CCU2SDBVer_U8,CTHM_CCU2VxWorksVer_U8,CTHM_CCU2FPGAVer_U8
                ,CTHM_WheelDig1FedBk_U8,CTHM_WheelDig2FedBk_U8,CTHM_WheelDig3FedBk_U8
                ,CTHM_WheelDig4FedBk_U8,CTHM_WheelDig5FedBk_U8,CTHM_WheelDig6FedBk_U8,CTHM_WheelDigReFedBk_U8,
                CTHM_LineNum_U8,CTHM_TrainNum_U8,CTHM_FirstStationID_U8,CTHM_LastStationID_U8;
    unsigned short int CTHM_TrainSpeed_U16,CTHM_CatenaryVoltage_U16,CTHM_TrainLimitSpeed_U16;
    signed short int CTHM_CatenaryCurrent_I16;

    unsigned int Test_U32;
    //***** test DWORD

};

#endif // DATABASE_H
