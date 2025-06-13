#include <iostream>
using namespace std;

// forward declaration
class c2;

class c1
{
    int val1;

public:
    void setValue(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }

    friend void exchange(c1 &, c2 &);
};

class c2
{
    int val2;

public:
    void setValue(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }

    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x , c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
};
int main()
{
    c1 a1;
    c2 b1;

    a1.setValue(34);
    b1.setValue(67);
    exchange(a1, b1);

    cout << "The value of after changing a is:";
    a1.display();

    cout << "The value of after changing b is:";
    b1.display();
    return 0;
}