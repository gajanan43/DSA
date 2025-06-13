#include<iostream>
using namespace std;

int main()
{
    int a=3,b=5;
    cout<<"\noperator in c++ ";
    cout<<"\nfollowing are the types of operator in c++";
    //Arithmetic operator 
    cout<<"\nthe value of a+b is "<<a+b;
    cout<<"\nthe value of a-b is "<<a-b;
    cout<<"\nthe value of a*b is "<<a*b;
    cout<<"\nthe value of a/b is "<<a/b;
    cout<<"\nthe value of a%b is "<<a%b;
    cout<<"\nthe value of a++ is "<<a++;
    cout<<"\nthe value of a-- is "<<a--;
    cout<<"\nthe value of ++a is "<<++a;
    cout<<"\nthe value of --a is "<<--a;

    //Assingment operator --used to assing to variables
    //int a=3,b=5;
    //char d='g';

    //comparison operator 
    cout<<"\nfollowing are the types of comparison  operator in c++";
    cout<<"\nthe value of a==b "<<(a==b);
    cout<<"\nthe value of a>=b "<<(a>=b);
    cout<<"\nthe value of a<=b "<<(a<=b);
    cout<<"\nthe value of a>b "<<(a>b);
    cout<<"\nthe value of a<b "<<(a<b);
    cout<<"\nthe value of a!=b "<<(a!=b);

    //logical oprator
    cout<<"\nfollowing are the types of logical  operator in c++";
    cout<<"\nthe value of (a==b)&& (a<b) "<<((a==b)&& (a<b));
    cout<<"\nthe value of (a==b) || (a<b) "<<((a==b) || (a<b));
    cout<<"\nthe value of !(a==b) "<<(!(a==b));
    return 0;
}