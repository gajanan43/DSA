#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // constructor declaration----->It is default constructor

    void printnumber()
    {
        cout << "Your number is:" << a << " + " << b << "i" << endl;
    }
};

complex::complex(void)//----->It is default constructor
{
    a = 10;
    b = 0;
}

int main()
{
    complex c,c1,c2,c3;
    c.printnumber();
    // c1.printnumber();//this are run because the ehenever the object is created at that time
    // c2.printnumber();//this are run because the ehenever the object is created at that time
    // c3.printnumber();//this are run because the ehenever the object is created at that time
    return 0;
}