#ifndef VEHICLEVISIONPAGE_H
#define VEHICLEVISIONPAGE_H

#include "basepage.h"
#include "global.h"

namespace Ui {
class VehicleVisionPage;
}

class VehicleVisionPage : public BasePage
{
    Q_OBJECT
    
public:
    explicit VehicleVisionPage(QWidget *parent = 0);
    ~VehicleVisionPage();
    void paintEvent(QPaintEvent *);
    void updatePage();

private slots:
    void on_btn_back_clicked();

    void on_btn_prepage_clicked();

    void on_btn_nextpage_clicked();
    
private:
    Ui::VehicleVisionPage *ui;
    int maxpage,currentpage;
};

#endif // VEHICLEVISIONPAGE_H
