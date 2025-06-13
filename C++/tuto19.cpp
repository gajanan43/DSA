#include<iostream>
using namespace std;

int sum(int a,int b)
{
    cout<<"using 2 arguments:";
    return a+b;
}

int sum(int a,int b,int c)
{
    cout<<"using 3 arguments:";
    return a+b+c;
}

//volume of a cylinder
int volume(double a,int h)
{
    return (3.14*a*a*h);
}

//volume of a rectangle
int volume(int a,int b,int c)
{
    return a*b*c;
}

//volume of a cube
int volume(int a)
{
    return a*a*a;
}
int main(){
    cout<<"\nthe sum 3 and 6 is "<<sum(3,6);
    cout<<"\nthe sum 3,4 and 6 is "<<sum(3,4,6);
    cout<<"\nthe volume of culinder is:"<<volume(3,5);
    cout<<"\nthe volume of rectangle is:"<<volume(3,4,5);
    cout<<"\nthe volume of cube is:"<<volume(3);
    return 0;
}