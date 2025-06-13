#include<iostream>
using namespace std;

int main(){
    //what is pointers 
    int a=3;
    int*b=&a;

    //&---->(address of) operator
    cout<<"the address of a is:"<<&a<<endl;
    cout<<"the address of a is:"<<b<<endl;

    //*------->(value at) dereference operator
    cout<<"the address of b is:"<<*b<<endl;
    cout<<"the address of a is:"<<a<<endl;

    //pointer to pointer
    int**c=&b;
    
    cout<<"the address of b is:"<<&b<<endl;
    cout<<"the address of b is:"<<c<<endl;
    
    cout<<"the value of b is:"<<*b<<endl;
    cout<<"the value of b is:"<<**c<<endl;
    cout<<"the address of c is:"<<*c<<endl;
    return 0;
}