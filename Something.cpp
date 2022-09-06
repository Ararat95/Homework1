#include "something.h"

class Copy
{
public:
    Copy () : topSecretValue {42} {}
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
    int get_value (Something* src)
    {
        const Copy* tmp = reinterpret_cast<const Copy*>(src);
        return tmp->topSecretValue;
    }
private:
    int topSecretValue;
};

int main ()
{
    Something ob;
    Copy ob1;
    std::cout << ob1.get_value(&ob);

    return 0;
}