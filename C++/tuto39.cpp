#include<iostream>
using namespace std;

class Base
{
    protected:
        int a;
    
    private:
        int b;
};

class Derived:protected Base
{

};


int main(){
    Base b;
    Derived d;
   // cout<<b.a;//this will not invoked becuse the protctd have protected data members

    return 0;
}