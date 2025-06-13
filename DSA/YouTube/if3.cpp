#include<iostream>
using namespace std;

int main()
{
    /*int a;
    cin>>a;
    //cout<<"Value of a is"<<a<<endl;
    if(a>0)
    {
        cout<<"A is a positive number"<<endl;
    }

    else{
        cout<<"A is a negative number"<<endl;
    }*/
    // int a,b;
    // cin>>a>>b;
    // cout<<"Enter the value of A:"<<a<<endl;
    // cout<<"Enter the value of B:"<<b<<endl;

    // if(a>b)
    // {
    //     cout<<"A is greater than B"<<endl;
    // }

    // if(b>a)
    // {
    //     cout<<"B is greater than A"<<endl;
    // }

    int a;
    cout<<"Enter the value of A:"<<endl;
    cin>>a;

    if(a>0)
    {
        cout<<"The number is positive";
    }

    else{
        if(a<0)
        {
            cout<<"The number is negative"<<endl;
        }
        else{
            cout<<"The number is zero"<<endl;
        }
    }
}