#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData()
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void Process();
    void display();
};

void Derived::Process()
{
    setData();
    data3 = data2 * getData1();
}

void Derived::display()
{
    cout << "\nThe value od Data1 is" << getData1();
    cout << "\nThe value od Data2 is" << data2;
    cout << "\nThe value od Data3 is" << data3;
}
int main()
{
    Derived p;
    //p.setData();
    p.Process();
    p.display();
    return 0;
}