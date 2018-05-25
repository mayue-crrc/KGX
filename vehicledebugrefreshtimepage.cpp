#include "vehicledebugrefreshtimepage.h"
#include "ui_vehicledebugrefreshtimepage.h"
#include <QPainter>

VehicleDebugRefreshTimePage::VehicleDebugRefreshTimePage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDebugRefreshTimePage)
{
    ui->setupUi(this);
    currentpage = 1;
    maxpage = 10;
}

VehicleDebugRefreshTimePage::~VehicleDebugRefreshTimePage()
{
    delete ui;
}

void VehicleDebugRefreshTimePage::on_btn_back_clicked()
{
     changePage(uVehicleSettingDebugPage);
}

void VehicleDebugRefreshTimePage::on_btn_prepage_clicked()
{
    if(currentpage > 1)
    {
        currentpage--;
    }
}

void VehicleDebugRefreshTimePage::on_btn_nextpage_clicked()
{
    if(currentpage < maxpage)
    {
        currentpage ++;
    }
}

void VehicleDebugRefreshTimePage::updatePage()
{
    update();
}
void VehicleDebugRefreshTimePage::paintEvent(QPaintEvent *)
{
    QPainter *painter = new QPainter(this);
    QRect rect;
    ui->lbl_Page->setText(QString::number(currentpage)+ "/"+QString::number(maxpage));
    for (int i = 0; i < 11; i ++)
    {
        for (int j = 0; j < 16; j ++)
        {
            rect = QRect(40 + 45 * j, 30 + 30 * i, 45, 30);

            // draw rect
            painter->setPen(Qt::darkGray);
            QLinearGradient gradient(rect.left(), rect.top(), rect.right(), rect.bottom());
            gradient.setColorAt(0, Qt::white);
            gradient.setColorAt(1, Qt::gray);
            painter->setBrush(gradient);
            painter->drawRect(rect);
            if (i == 0)
            {
                painter->setPen(QPen(Qt::black, 1));
                if (j % 2 == 0)
                {
                    painter->setPen(QPen(Qt::black, 1));
                    painter->drawText(rect, Qt::AlignCenter, QString("Port"));
                }
                else
                {
                    painter->setPen(QPen(Qt::blue, 1));
                    painter->drawText(rect, Qt::AlignCenter,  QString("Refresh"));
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    painter->setPen(QPen(Qt::black, 1));
                    painter->drawText(rect, Qt::AlignCenter, QString("0x11"));
                }
                else
                {
                    painter->setPen(QPen(Qt::blue, 1));
                    painter->drawText(rect, Qt::AlignCenter, QString("0000"));
                }
            }

        }
    }
    painter->end();
}
