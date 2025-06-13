#include <iostream>
#include <cmath>
using namespace std;

class simple_calculator
{
    int a, b;

public:
    void getdata_simple()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }

    void perfromoperation()
    {
        cout << "The add of a+b is:" << a + b << endl;
        cout << "The sub of a-b is:" << a - b << endl;
        cout << "The mul of a*b is:" << a * b << endl;
        cout << "The div of a/b is:" << a / b << endl;
    }
};

class scientific_calculator
{
    int a, b;

public:
    void getdata_sci()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }

    void perfromoperation_sci()
    {
        cout << "This are the basic operations" << endl;
        cout << "The add of a+b is:" << a + b << endl;
        cout << "The sub of a-b is:" << a - b << endl;
        cout << "The mul of a*b is:" << a * b << endl;
        cout << "The div of a/b is:" << a / b << endl;

        cout << "Following are the scienticfic some operation:" << endl;
        cout << "The sine value of a is:" << sin(a) << endl;
        cout << "The tan value of a is:" << tan(a) << endl;
        cout << "The cosine value of a is:" << cos(a) << endl;
        cout << "The log value of a is:" << log(a) << endl;
    }
};

class Hybrid : public simple_calculator, public scientific_calculator
{
};

int main()
{
    //This is before the create a class hybrid
    // simple_calculator s;
    // s.getdata_simple();
    // s.perfromoperation();

    // scientific_calculator g;
    // g.getdata_sci();
    // g.perfromoperation_sci();

    //This is after the hybrid class
    Hybrid h;
    h.getdata_simple();
    h.perfromoperation();

    h.getdata_sci();
    h.perfromoperation_sci();

    return 0;
}