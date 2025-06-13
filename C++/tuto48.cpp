#include<iostream>
using namespace std;


/*
case1:
class B:public A
    //Order of excution is A()---> then B()

class A:public B,public C
    //Order of excution is B()---> then C() and A()

class A:public B,virtual public C
    //Order of excution is C()---> then B() and A()

*/

class Base1
{
    int Data1;

    public:
    Base1(int i)
    {
        Data1=i;
        cout<<"Base1 consructor is called"<<endl;
    }

    void printdata1(void)
    {
        cout<<"The value of Data1 is:"<<Data1<<endl;
    }
};

class Base2
{
    int Data2;

    public:
    Base2(int i)
    {
        Data2=i;
        cout<<"Base2 consructor is called"<<endl;
    }

    void printdata2(void)
    {
        cout<<"The value of Data2 is:"<<Data2<<endl;
    }
    
};

class Derived:public Base1,public Base2
{
    int Derived1,Derived2;

    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b)
    {
        Derived1=c;
        Derived2=d;
        cout<<"Derived consructor is called"<<endl;

    }
    void printdata3(void)
    {
        cout<<"The value of Derived1 is:"<<Derived1<<endl;
        cout<<"The value of Derived2 is:"<<Derived2<<endl;
    }
};

int main(){
    Derived d(1,2,3,4);
    d.printdata1();
    d.printdata2();
    d.printdata3();
    return 0;
}