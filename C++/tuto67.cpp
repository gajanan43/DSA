#include<iostream>
using namespace std;

// float avgerage(int a,int b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }

// float avgerage2(int a,float b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
//}

template <class T>
void swapp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

template <class T1,class T2>
float avgerage(T1 a,T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}


int main(){
    float a,b;
    a=avgerage(1,2);
    b=avgerage(1,2.4);
    cout<<"The avgerage value is:"<<a<<endl;
    cout<<"The avgerage value is:"<<b<<endl;
    cout<<endl;
    
    int x=2,y=5;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}