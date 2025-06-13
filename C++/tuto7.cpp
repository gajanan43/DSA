#include<iostream>
using namespace std;

int c=45;
int main()
{
    //int a,b,c;
    //*************biult in datatype **************
    // cout<<"\nEntre the value of a ";
    // cin>>a;
    // cout<<"\nEntre the value of b ";
    // cin>>b;
    // c=a+b;
    // cout<<"\nsum of a+b "<<c;

    // cout<<"\nthe global valuec is:"<<::c;//scope resloving operator 
    
    
    
    //************* float ,doube ,long  literals **************
    // float d=34.4f;
    // cout<<"\nSize of 34.4 is:"<<sizeof(34.4);
    // cout<<"\nSize of 34.4f is:"<<sizeof(34.4f);
    // cout<<"\nSize of 34.4F is:"<<sizeof(34.4F);
    // long double e=34.4l;
    // cout<<"\nSize of 34.4l is:"<<sizeof(34.4l);
    // cout<<"\nSize of 34.4F is:"<<sizeof(34.4L);
    // cout<<"\nthe value of d is:"<<d<<"\nthe value of e is:"<<e;

    
    
    //************* referenace variables **************
    //referenace variables

    // float x=45;
    // float &y=x;
    // cout<<x<<endl;
    //cout<<y<<endl;


    //*************typecasting *************

    int a=45;
    float b=45.56;
    cout<<"\nthe value of a is:"<<(float)a;
    cout<<"\nthe value of a is:"<<float(a);


    cout<<"\nthe value of b is:"<<(int)b;
    cout<<"\nthe value of b is:"<<int(b);

    cout<<"\nthe expression is:"<<a+b;
    cout<<"\nthe expression is:"<<a+int(b);
    cout<<"\nthe expression is:"<<a+(int)b;


    return 0;
}