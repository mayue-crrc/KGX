#include "vehicledebugportdatapage.h"
#include "ui_vehicledebugportdatapage.h"
#include <QPainter>
#include "MainGetDefaultPara.h"
VehicleDebugPortDataPage::VehicleDebugPortDataPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDebugPortDataPage)
{
    ui->setupUi(this);

    this->CCUAPorts<<0xF<<0x118<<0x128<<0x138<<0x208<<0x308<<0x309<<0x30A<<0x30B;
    if(MainGetDefaultPara::getInt("/Position/HMI") == 1)
    {
        this->HMIPorts<<0x320<<0x321<<0x322<<0x323;

    }else
    {
        this->HMIPorts<<0x310<<0x311<<0x312<<0x313;

    }
    this->RIOMPorts<<0x110<<0x111<<0x112<<0x120<<0x121<<0x130<<0x131<<0x132;
    this->ERMPorts<<0x210<<0x211<<0x212<<0x213<<0x220<<0x221<<0x222<<0x223;


    this->m_PortsList = CCUAPorts;

    ui->CCUABtn->setStyleSheet(MY_BUTTON_DOWN);

    buttons<<ui->CCUABtn<<ui->CCUBBtn<<ui->RIOMBtn<<ui->HMIBtn<<ui->ERMBtn<<ui->BCUBtn<<ui->TCUBtn
           <<ui->ACUBtn<<ui->EDCUBtn<<ui->PISHVACBtn<<ui->ATCBCCUBtn<<ui->BMSBtn;

    foreach (QPushButton *button, buttons)
    {
        connect(button, SIGNAL(clicked()), this, SLOT(ButtonsPressEvent()));
    }
}

VehicleDebugPortDataPage::~VehicleDebugPortDataPage()
{
    delete ui;
}
void VehicleDebugPortDataPage::ButtonsPressEvent()
{
    QString BtnName = ((QPushButton *)this->sender())->text();
    if(BtnName == "CCUA")
    {
        this->m_PortsList = CCUAPorts;
    }else if(BtnName == "CCUB")
    {
        this->m_PortsList = CCUBPorts;

    }else if(BtnName == "RIOM")
    {
        this->m_PortsList = RIOMPorts;

    }else if(BtnName == "HMI")
    {
        this->m_PortsList = HMIPorts;

    }else if(BtnName == "ERM")
    {
        this->m_PortsList = ERMPorts;

    }else if(BtnName == "ACU")
    {
        this->m_PortsList = ACUPorts;

    }else if(BtnName == "TCU")
    {
        this->m_PortsList = TCUPorts;

    }else if(BtnName == "BCU")
    {
        this->m_PortsList = BCUPorts;

    }else if(BtnName == "EDCU")
    {
        this->m_PortsList = EDCUPorts;

    }else if(BtnName == "PISHVAC")
    {
        this->m_PortsList = PISHVACPorts;

    }else if(BtnName == "EDCU")
    {
        this->m_PortsList = EDCUPorts;

    }else if(BtnName == "ATCBCCU")
    {
        this->m_PortsList = ATCBCCUPorts;

    }else if(BtnName == "BMS")
    {
        this->m_PortsList = BMSPorts;

    }


    for(int i = 0; i < buttons.size();i++)
    {
       buttons[i]->setStyleSheet(MY_BUTTON_UP);
    }
    ((QPushButton *)this->sender())->setStyleSheet(MY_BUTTON_DOWN);


}
void VehicleDebugPortDataPage::on_btn_back_clicked()
{
     changePage(uVehicleSettingDebugPage);
}
void VehicleDebugPortDataPage::updatePage()
{
    update();
}
void VehicleDebugPortDataPage::installMvb(CrrcRicoMvb* crrcRicoMvb)
{
    this->m_crrcRicoMvb = crrcRicoMvb;
}
void VehicleDebugPortDataPage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect rect;
    QFont font;
    font.setFamily("微软雅黑");
    font.setPixelSize(13);
    painter.setFont(font);
    painter.setPen(QPen(Qt::black,2));
    painter.setBrush(QBrush(Qt::transparent));

    // draw title
    for(int i = 0; i < 34 ; i++)
    {

        QString text1;
        QRect rect1;
        if(i == 0)
        {
            text1 = "port";
            rect1 = QRect(1,2,39,25);
            painter.drawRect(rect1);

        }else if(i == 33)
        {
            text1 = "cycle";
            rect1 = QRect(26*32+40,2,50,25);

        }else
        {
            QString tmp;
            tmp.sprintf("%02d",i-1);
            text1 = tmp;
            rect1 = QRect(i*26+14,2,26,25);

        }
        if(i%2==1)
        {
            painter.drawRect(QRect(i*26+14,2,52,25));
        }
        painter.drawText(rect1,Qt::AlignCenter,text1);

    }

    //draw data
    for(int j = 0 ;j < 22 ;j++)
    {
        for(int i = 0; i < 34 ; i++)
        {
            QString text2;
            QRect rect2,rect3;

            if(j%3 == 0)// set pen color
            {
                painter.setPen(QPen(Qt::darkBlue,2));
            }else if(j%3 == 1)
            {
                painter.setPen(QPen(Qt::blue,2));
            }else
            {
                painter.setPen(QPen(Qt::black,2));
            }
            //portaddress
            if(i == 0)
            {
                if(j<m_PortsList.size())
                {
                    QString tmp;
                    tmp.sprintf("%03x",m_PortsList[j]);

                    text2 = tmp.toUpper();
                }else
                {
                    text2 = "";
                }
                rect2 = QRect(1,2+(j+1)*24,39,25);
                painter.drawRect(rect2);
                painter.drawText(rect2,Qt::AlignCenter,text2);
            }else if(i == 33)//cycle
            {
                painter.save();
                painter.setPen(QPen(Qt::black,2));

                if(j<m_PortsList.size())
                {
                    QString tmp;
                    tmp.sprintf("%02d",m_crrcRicoMvb->getPortCycle(m_PortsList[j]));


                    if(m_crrcRicoMvb->isPortTimeout(m_PortsList[j]))
                    {
                        painter.setBrush(QBrush(Qt::red));
                    }else
                    {
                        painter.setBrush(QBrush(Qt::transparent));
                    }
                    text2 = tmp.toUpper();
                }else
                {
                    painter.setBrush(QBrush(Qt::transparent));
                    text2 = "";
                }
                rect2 = QRect(32*26+40,2+(j+1)*24,51,25);

                painter.drawRect(rect2);
                painter.drawText(rect2,Qt::AlignCenter,text2);
                painter.restore();

            }else//data
            {
                QString tmp;

                if(j<m_PortsList.size())
                {
                    tmp.sprintf("%02x",m_crrcRicoMvb->getUnsignedChar(m_PortsList[j],i-1));

                    text2 = tmp.toUpper();
                }else
                {
                    text2 = "";
                }
                rect3 = QRect(i*26+14,2+(j+1)*24,26,25);
                painter.drawText(rect3,Qt::AlignCenter,text2);
            }


            if(i%2==1)
            {
                painter.drawRect(QRect(i*26+14,2+(j+1)*24,52,25));
            }

        }
    }

    painter.end();
}
