#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 100;
    }
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "Copy constructor is called!!!" << endl;
        a = obj.a;
    }
    void show()
    {
        cout << "The value of number is:" << a << endl;
    }
};
int main()
{

    number x, y, z(200), z2;

    x.show();
    y.show();
    z.show();

    // z1 is copy constructor of z
    number z1(x); // copy constructor is invoked
    z1.show();

    z2 = z; // copy constructor is not called becuse the object is alrady created it is like a defult consteuctor
    z2.show();

    number z3 = z; // copy constructor is invoked
    z3.show();
    return 0;
}