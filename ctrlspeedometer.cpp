#include "ctrlspeedometer.h"
#include "ui_ctrlspeedometer.h"

CtrlSpeedometer::CtrlSpeedometer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlSpeedometer)
{
    ui->setupUi(this);
    m_value = 0;
}

CtrlSpeedometer::~CtrlSpeedometer()
{
    delete ui;
}
void CtrlSpeedometer::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen pen;
    QFont font;
    QBrush brush;

    painter.setRenderHint(QPainter::Antialiasing,true);

    pen.setColor(QColor(180,180,180,128));
    pen.setWidth(5);
    painter.setPen(pen);

    font.setFamily("vuArial");
    font.setPixelSize(14);
    font.setWeight(QFont::Normal);
    painter.setFont(font);



    painter.setBrush(Qt::black);
    painter.drawEllipse(QPoint(115,115),110,110);
    painter.setBrush(Qt::red);
    pen.setWidth(0);
    painter.setPen(pen);
    painter.drawEllipse(QPoint(115,115),7,7);
    painter.translate(this->width() / 2,this->height() / 2 );




    pen.setColor(QColor(180,180,180));
    painter.setPen(pen);
    painter.drawText(QRect(-70,25,25,20),"0");
    painter.drawText(QRect(-80,-10,25,20),"10");
    painter.drawText(QRect(-75,-45,25,20),"20");
    painter.drawText(QRect(-50,-70,25,20),"30");
    painter.drawText(QRect(-12.5,-85,25,20),"40");
    painter.drawText(QRect(25,-70,25,20),"50");
    painter.drawText(QRect(55,-45,25,20),"60");

    pen.setColor(RED);
    painter.setPen(pen);
    painter.drawText(QRect(60,-10,25,20),"70");
    painter.drawText(QRect(50,25,35,20),"80");

    pen.setColor(YELLOW);
    painter.setPen(pen);
    font.setPixelSize(24);
    painter.setFont(font);
    painter.drawText(QRect(-35,-10,100,25),"");



    painter.rotate(60);
    pen.setWidth(3);
    //pen.setWidth(1);
    for(int i = 0; i <  41; i ++)
    {
        if(i<35)
        {
            pen.setColor(QColor(190,190,190,200));
        }else
        {
            pen.setColor(RED);
        }
        painter.setPen(pen);
        if(i%5 == 0)
        {
            painter.drawLine(0,85,0,98);
        }else
        {
            painter.drawLine(0,90,0,98);
        }
        if (i == (m_value/2))
        {//draw speed pointer by speed value
            static const QPointF points[3] = {
                 QPointF(-3, 5),
                 QPointF(3,5),
                 QPointF(0, 80)
               };
            painter.setBrush(QBrush(QColor(255,0,0,128)));
            painter.setPen(QPen(QColor(255,0,0,128), 0));
            painter.drawPolygon(points, 3);
        }
        painter.rotate(6);
    }
    painter.rotate(54);

    pen.setColor(QColor(140,140,140));
    font.setPixelSize(45);

    painter.setPen(pen);
    painter.setFont(font);
    QString t_speed;
    t_speed.sprintf("%02d",m_value);
    painter.drawText(QRect(-22,45,80,50),t_speed);
    //painter.drawText(QRect(-20,75,45,20),"km/h");


}
void CtrlSpeedometer::setSpeenometerValue(int value)
{
    m_value = value;
    this->update();
}
