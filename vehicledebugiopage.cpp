#include "vehicledebugiopage.h"
#include "ui_vehicledebugiopage.h"

VehicleDebugIOPage::VehicleDebugIOPage(QWidget *parent) :
    BasePage(parent),
    ui(new Ui::VehicleDebugIOPage)
{
    ui->setupUi(this);
    currentpage = 1;
    maxpage = 10;
    ui->btn_MC1->setStyleSheet(MY_BUTTON_DOWN);
    ui->btn_MC2->setStyleSheet(MY_BUTTON_UP);
    ui->btn_T->setStyleSheet(MY_BUTTON_UP);

    dicontrol1 = new DiControl(this);
    dicontrol1->setGeometry(40,5,dicontrol1->width(),dicontrol1->height());
    dicontrol1->hide();

    dicontrol2 = new DiControl(this);
    dicontrol2->setGeometry(40,230,dicontrol2->width(),dicontrol2->height());
    dicontrol2->hide();

    docontrol1 = new DoControl(this);
    docontrol1->setGeometry(40,5,docontrol1->width(),docontrol1->height());
    docontrol1->hide();
}

VehicleDebugIOPage::~VehicleDebugIOPage()
{
    delete ui;
}

void VehicleDebugIOPage::on_btn_back_clicked()
{
    changePage(uVehicleSettingDebugPage);
}

void VehicleDebugIOPage::on_btn_MC1_clicked()
{

}
void VehicleDebugIOPage::on_btn_T_clicked()
{
    changePage(uVehicleDebugIOPage2);
}

void VehicleDebugIOPage::on_btn_MC2_clicked()
{
    changePage(uVehicleDebugIOPage3);
}

void VehicleDebugIOPage::on_btn_prepage_clicked()
{
    if(currentpage > 1)
    {
        currentpage--;
    }
}

void VehicleDebugIOPage::on_btn_nextpage_clicked()
{
    if(currentpage < maxpage)
    {
        currentpage ++;
    }
}

void VehicleDebugIOPage::showEvent(QShowEvent *)
{
    QList<QString> M1name;

    M1name << QString("DI1")
         << QString("I1 备用") << QString("I2 备用") << QString("I3 备用") << QString("I4 备用")
         << QString("I5 客室电热") << QString("I6 牵引熔断器2状态") << QString("I7 备用") << QString("I8 辅助熔断器2状态")
         << QString("I9 撒砂风泵状态") << QString("I10 备用") << QString("I11 制动全部缓解") << QString("I12 牵引冷却风机空开")
         << QString("I13 牵引安全") << QString("I14 备用") << QString("I15 牵引准备就绪") << QString("I16 电制动1正常")
         << QString("I17 电制动2正常") << QString("I18 保持制动施加") << QString("I19 车辆滑行指示") << QString("I20 辅助逆变器正常")
         << QString("I21 备用") << QString("I22 制动无故障(M)") << QString("I23 左侧沙箱沙位") << QString("I24 右侧沙箱沙位");
    dicontrol1->initialName(M1name);
    M1name.clear();


    M1name << QString("SGN1")
         << QString("I1 备用") << QString("I2 备用") << QString("I3 备用") << QString("I4 制动缓解(M)")
         << QString("I5 安全制动") << QString("I6 磁轨制动(M)") << QString("I7  制动手动缓解（M)") << QString("I8 备用")
         << QString("I9 蓄电池接触器") << QString("I10 备用") << QString("I11 蓄电池电热") << QString("I12 交流输出接触器")
         << QString("I13 备用") << QString("I14 备用") << QString("I15 本车升弓到位") << QString("I16 本车降弓到位")
         << QString("I17 他车升弓到位") << QString("I18 他车降弓到位") << QString("I19 本车升弓空开(TP)") << QString("I20 备用")
         << QString("I21 备用") << QString("I22 备用") << QString("I23 备用") << QString("I24 备用");
    dicontrol2->initialName(M1name);
    M1name.clear();


    M1name << QString("DO1")
         << QString("O1 备用") << QString("O2 强迫泵风") << QString("O3 撒沙信号") << QString("O4 备用")
         << QString("O5 替代制动") << QString("O6 备用") << QString("O7  备用") << QString("O8 电热1路")
         << QString("O9 电热2路") << QString("O10 蓄电池伴热") << QString("O11 备用") << QString("O12 备用")
         << QString("O13 备用") << QString("O14 备用") << QString("O15 备用") << QString("O16 备用");
    docontrol1->initialName(M1name);
    M1name.clear();

}

void VehicleDebugIOPage::updatePage()
{
    ui->btn_MC1->setStyleSheet(MY_BUTTON_DOWN);
    ui->btn_MC2->setStyleSheet(MY_BUTTON_UP);
    ui->btn_T->setStyleSheet(MY_BUTTON_UP);
    ui->lbl_Page->setText(QString::number(currentpage)+ "/"+QString::number(maxpage));

    dicontrol1->show();
    dicontrol2->show();
}
