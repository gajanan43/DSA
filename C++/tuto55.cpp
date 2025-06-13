#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of var_base is:" << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of var_base is:" << var_base << endl;
        cout << "The value of var_derived is:" << var_derived << endl;
    }
};

int main()
{
    Base *class_base_pointer;
    Base obj_base;
    Derived obj_derived;
    class_base_pointer = &obj_derived;

    // This is run a base class display function
    class_base_pointer->var_base = 34;
    class_base_pointer->display();

    // This is run a derived class display function
    Derived *class_derived_pointer;

    class_derived_pointer->var_base = 94;
    class_derived_pointer->var_derived = 74;
    class_derived_pointer->display();

    return 0;
}