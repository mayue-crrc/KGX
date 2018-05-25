#ifndef HEADERPAGE_H
#define HEADERPAGE_H

#include "basepage.h"
#include "QDateTime"
namespace Ui {
    class HeaderPage;
}

class HeaderPage : public BasePage
{
    Q_OBJECT

public:
    explicit HeaderPage(QWidget *parent = 0);
    ~HeaderPage();
    void updatePage();
    void showEvent(QShowEvent *);
    void setPageName(QString);

private:
    Ui::HeaderPage *ui;

private slots:
    void on_pushButton_pressed();
    void on_pushButton_clicked();
};

#endif // HEADERPAGE_H
