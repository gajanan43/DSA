#include <iostream>
using namespace std;
// Ambiguity 1
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "kyeso ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    // This is solution of ambiguity
    void greet()
    {
        Base1::greet();
    }
};
// Ambiguity 2

class B
{
public:
    void say()
    {
        cout << "Hello World!" << endl;
    }
};

class D : public B
{
public:
    // This is solution of ambiguity
    void say()
    {
        cout << "Hello my beutiful people" << endl;
    }
};

int main()
{
    // Ambiguity 1
    //  Base1 obj1;
    //  Base2 obj2;
    //  obj1.greet();
    //  obj2.greet();
    //  Derived d;
    //  d.greet();

    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}