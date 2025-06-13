#include<iostream>
using namespace std;

int main(){
    int a=4;
    int*ptr=&a;
    //Basic exmple
    cout<<"The value of a is:"<<*ptr<<endl;
    cout<<"The address of a is:"<<&a<<endl;

    //use new operator
    int*q=new int(40);//------>1
    float*p=new float(40.78);//------>2
    cout<<"After this statement new operator will be run:"<<endl;
    cout<<"The value of p is:"<<*q<<endl;
    cout<<"The value of p is:"<<*p<<endl;

    int*arr=new int [3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    cout<<"The value of arr[0] is:"<<arr[0]<<endl;
    cout<<"The value of arr[1] is:"<<arr[1]<<endl;
    cout<<"The value of arr[2] is:"<<arr[2]<<endl;

    
    int*ar=new int [3];
    ar[0]=10;
    ar[1]=20;
    ar[2]=30;
    delete[] ar;
    cout<<"After this statement delete operator will be run:"<<endl;
    cout<<"The value of arr[0] is:"<<ar[0]<<endl;
    cout<<"The value of arr[1] is:"<<ar[1]<<endl;
    cout<<"The value of arr[2] is:"<<ar[2]<<endl;
    
    return 0;
}