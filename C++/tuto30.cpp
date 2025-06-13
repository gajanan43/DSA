#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int,int ); // constructor declaration----->It is parametarized  constructor

    void printnumber()
    {
        cout << "\nYour number is:" << a << " + " << b << "i" << endl;
    }
};

complex::complex(int x,int y) //----->It is default constructor
{
    a = x;
    b = y;
}

int main()
{   
    //implicit call 
    complex c(5,6);
    c.printnumber();

    //Explicit call
    complex b=complex(5,6);
    b.printnumber();
    return 0;
}