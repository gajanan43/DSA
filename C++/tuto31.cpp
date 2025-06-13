#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber()
    {
        cout << "Your number is:" << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c(4, 5);
    c.printnumber();

    complex b(4);
    b.printnumber();

    return 0;
}