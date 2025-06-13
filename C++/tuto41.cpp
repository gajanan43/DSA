#include<iostream>
using namespace std;

class Base1
{
    protected:
        int base1int;

    public:
        void set_base1int(int a)
        {
            base1int=a;
        }
};

class Base2
{
    protected:
        int base2int;

    public:
        void set_base2int(int a)
        {
            base2int=a;
        }
};

class derived:public Base1,public Base2
{
    public:
        void show(void)
        {
            cout<<"The base1 value is:"<<base1int<<endl;
            cout<<"The base2 value is:"<<base2int<<endl;
            cout<<"The sum of base1 and base2 is:"<<base1int+base2int<<endl;
        }
};

/*
The inherited derived class is look like a:

Data member:
    base1int------>protected
    base2int------>protected

member function:
    set_base1int------>public
    set_base2int------>public
    show----->public

*/
int main(){
    derived d;
    d.set_base1int(25);
    d.set_base2int(5);
    d.show();
    return 0;
}