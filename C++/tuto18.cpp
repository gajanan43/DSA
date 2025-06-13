#include<iostream>
using namespace std;

// int factorial(int n)
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

//steps for factoral 
// factorial(4)=4*factorial(3);
// factorial(4)=4*3*factorial(2);
// factorial(4)=4*3*2*factorial(1);
// factorial(4)=4*3*2*1=24;
int main(){
    int a;
    cout<<"\nEnter a number:";
    cin>>a;
    //cout<<"\nthe factorial of"<<a<<" is "<<factorial(a);
    cout<<"\nthe term in fibonacci sequence at position"<<a<<" is "<<fib(a);

    return 0;
}