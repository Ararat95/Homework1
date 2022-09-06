#include <iostream>

class Parent 
{
protected:
    int base_data = 55;
};

class Child1 : public Parent
{

};
class Child2 : public Parent
{

};
class Grandchild : public Child1, public Child2
{

public:
    int get_data ()
    {
        return Child2::base_data;
    }
};

int main ()
{
    Grandchild ob;
    std::cout << ob.get_data ();

    return 0;
}