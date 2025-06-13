#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};

class complex
{

    int a, b;
    //individually decalre function as friend
    // friend int calculator::sumcomplex(complex, complex);
    // friend int calculator::sumcomcomplex(complex, complex);

    //alter many function access data it mens declare friend class
    friend class calculator;
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your number is:" << a << " + " << b << "i" << endl;
    }
};

int calculator::sumcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    complex o1, o2;
    o1.setnumber(1, 2);
    o2.setnumber(5, 6);

    calculator cal;
    int res = cal.sumcomplex(o1, o2);
    cout << "The sum of real part of o1 & o2 is:" << res << endl;

    int resc= cal.sumcomcomplex(o1, o2);
    cout << "The sum of imaginary part of o1 & o2 is:" << resc << endl;
    return 0;
}