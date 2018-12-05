#ifndef GLOBALDATA_H
#define GLOBALDATA_H

#include <QDebug>
#include <QtMath>
#include <QQueue>


class GlobalData
{
public:
    virtual ~GlobalData();

    static GlobalData *getInstance();

    QQueue<QString> queue;

private:
    GlobalData();
};

#endif // GLOBALDATA_H
