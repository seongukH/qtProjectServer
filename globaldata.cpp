#include "globaldata.h"

static GlobalData *instance;

static bool instanceFlag;

GlobalData::GlobalData()
{

}

GlobalData *GlobalData::getInstance()
{
    if(!instance){
        instance = new GlobalData();
        instanceFlag = true;
    }

    return instance;
}

GlobalData::~GlobalData()
{
    instanceFlag = false;
}
