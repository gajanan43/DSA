#include <iostream>
using namespace std;

class Simple_calculator
{
public:
    int a, b;

    void set_values(int, int);
    int display();
};

void Simple_calculator::set_values(int m, int n)
{
    a = m;
    b = n;
}

int Simple_calculator::display()
{
    int ch;
    cout << "The frist value is:" << a << endl;
    cout << "The second value is:" << b << endl;
    cout << "Perform the operations: \n1.add \n2.sub \n3.div \n4.mul" << endl;
    cout << "Enter Your choice:" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << a + b;
        break;

    case 2:
        cout << a - b;
        break;

    case 3:
        cout << a / b;
        break;

    case 4:
        cout << a * b;
        break;

    default:
        cout << "Wrong choice" << endl;
        break;
    }
}

/*class Scientific_calculator
{
public:
    int a;
    
    int display();
    void calculator();
};

int Scientific_calculator ::display()
{
    
    void sin(int);
    void cos(int);
    void tan(int);
    void log(int);
    int ch,h;
    cout << "Enter the value for perfom follwoing operators:" << endl;
    cin >> h;
    cout << "Perform the operations: \n1.sine \n2.cos\n3.tan \n4.log" << endl;
    cout << "Enter Your choice:" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "Enter the value for sin trignometric operator" << endl;
        cin >> h;
        sin(h);
        break;

    case 2:
        cout << "Enter the value for cos trignometric operator" << endl;
        cin >> h;
        cos(h);
        break;

    case 3:
        cout << "Enter the value for tan trignometric operator" << endl;
        cin >> h;
        tan(h);
        break;

    case 4:
        cout << "Enter the value for log trignometric operator" << endl;
        cin >> h;
        log(h);
        break;
    
    default:
        cout << "Wrong choice" << endl;
        break;
    }

    
}

void  Scientific_calculator ::calculator()
{
    void sin(int x)
    {
        int s;
        s=sin(x);
        cout<<s;
    }

    void cos(int a)
    {
        int s;
        s=cos(a);
        cout<<s;
    }

    void tan(int a)
    {
        int s;
        s=tan(a);
        cout<<s;
    }

    void log(int a)
    {
        int s;
        s=log(a);
        cout<<s;
    }
}
*/
int main()
{
    Simple_calculator s;
    s.set_values(5, 4);
    s.display();

    
    return 0;
}