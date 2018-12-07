#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include "Network/udpnetwork.h"


class Thread : public QThread
{
public:
    Thread();


private:
    void run();


};

#endif // THREAD_H
