#ifndef GLOBALDATA_H
#define GLOBALDATA_H

#include <QDebug>
#include <QtMath>
#include <QQueue>
#include <QMap>



struct a_state{

    QString a_name;
    qreal a_x = 500.f;
    qreal a_y = 30.f;
    float a_r = 0;
    int status = 1;
};

struct a_message{

    QString a_name;
    QString a_message;
};

class GlobalData
{
public:
    virtual ~GlobalData();

    static GlobalData *getInstance();

    a_message message;

    a_state state;

    QQueue<QString> messageQueue;
    QQueue<QString> statusQueue;


private:
    GlobalData();
};

#endif // GLOBALDATA_H
