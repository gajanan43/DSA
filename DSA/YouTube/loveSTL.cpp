#include<iostream>
#include<array>//This header file for STL array 
using namespace std;

int main()
{
    //This is repersent one form
    // int arr[4] ={1,2,3};

    // for(int i=0;i<arr[i];i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    //Array can be repersent in another form i.e. STL

    array <int,3> a={1,2,3};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd index:"<<a.at(2)<<endl;
    cout<<"Empty or not:"<<a.empty()<<endl;

    cout<<"First element of array is:"<<a.front()<<endl;
    cout<<"Last elemnt of array is:"<<a.back()<<endl;


}