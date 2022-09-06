#include "single.h"
Singleton* Singleton::single = nullptr;
Singleton* Singleton::getinstance ()
{
    if (single == nullptr)
    {
        single = new Singleton;
    }
    return single;

}