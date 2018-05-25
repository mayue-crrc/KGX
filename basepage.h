#ifndef BASEPAGE_H
#define BASEPAGE_H

#include <QWidget>
#include <global.h>
#include "database.h"
#include "log4qt/logger.h"

class BasePage : public QWidget
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER

public:
    explicit BasePage(QWidget *parent = 0);
    void setMyBase(enum pagePosition position, QString name);
    virtual void updatePage();
    virtual void showEvent(QShowEvent *);

public:
    static int currentPage;
    static int lastPage;
    static Database *database;
    QString name;

public slots:
signals:
    void changePage(int);
};

#endif // BASEPAGE_H
