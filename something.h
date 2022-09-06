#ifndef SOMETHING_H
#define SOMETHING_H

#include <iostream>
#include <string>

class Something 
{
public:
    Something() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

#endif //SOMETHING_H