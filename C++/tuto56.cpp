#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1 The value of var_base is:" << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 The value of var_base is:" << var_base << endl;
        cout << "2 The value of var_derived is:" << var_derived << endl;
    }
};

int main()
{
    Base *class_base_pointer;
    Base obj_base;
    Derived obj_derived;
    class_base_pointer = &obj_derived;
    class_base_pointer->display();
    return 0;
}