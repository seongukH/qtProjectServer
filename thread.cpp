#include "thread.h"



Thread::Thread()
{

}

void Thread::run()
{
    UDPNetwork network;
    network.readyRead();
}
