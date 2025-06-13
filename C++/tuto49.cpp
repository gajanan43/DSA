#include<iostream>
using namespace std;
/*
Initialization list in constructor:

syntax:---->

constructor(arguments_list):intilaition_section
{
    construcotr_body
}


*/

class Test
{
    //int a,b;------------>>>>1
    int a;
    int b;
    public:
    //There are many way to repersent the construcotr initliation 
    //Test(int i,int j):a(i),b(j)
    //Test(int i,int j):a(i),b(i+j)
    //Test(int i,int j):a(i),b(2*j)
    //Test(int i,int j):b(j),a(i)
    //Test(int i,int j):a(i),b(a+j)
    Test(int i,int j):b(j),a(i+b)
    {
        cout<<"constructor is called"<<endl;
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;
    }
    
};

int main(){
    Test t(4,6);
    return 0;
}