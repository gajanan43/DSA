#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // int a=15;
    // cout<<"\nthe value of a is:"<<a;
    // a=45;
    // cout<<"\nthe value of a is:"<<a;

    //*************constants ***********
    // const int a=15;
    // cout<<"the value of a is:"<<a;

    // a=45; //ypu will get error beacuse the constant 
    // cout<<"the value of a is:"<<a;

    //*************Manipulators ***********
    // int a=5,b=45,c=23578;

    // cout<<"\nthe value of a without manipulate is:"<<a;
    // cout<<"\nthe value of b without manipulate is:"<<b;
    // cout<<"\nthe value of c without manipulate is:"<<c;

    // cout<<"\nthe value of a with manipulate is:"<<setw(4)<<a;
    // cout<<"\nthe value of b with manipulate is:"<<setw(4)<<b;
    // cout<<"\nthe value of c with manipulate is:"<<setw(4)<<c;

    //*************operator precedenece ***********

    int a=3,b=4;
    //int c=(a*5)+b;

    int c=((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}