#include<iostream>
using namespace std;

void Array(int arr[],int size)
{
    cout<<"Printing the array"<<endl;
    for(int i=1;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing is completed"<<endl;
}
int main()
{
    //This is randam access of array 
    // int number[15];

    // cout<<"The value at 0 index is:"<<number[0]<<endl;

    // cout<<"The value at 2 index is:"<<number[2]<<endl;

    // cout<<"The value at 14 index is:"<<number[14]<<endl;


    //This is a proper way to access array
    // int dost[3]={5,7,11};

    // cout<<"The value at o th index is:"<<dost[0]<<endl;

    // cout<<"The value at 1 th index is:"<<dost[1]<<endl;

    // cout<<"The value at 2 th index is:"<<dost[2]<<endl;


    int third[15]={2,7};

    int n=15;
    Array(third,15);//Array  Function call 
    // for(int i=0;i<=n;i++)
    // {
    //     cout<<third[i]<<" ";
    // }


    //This is all the index value become a zero
    int fourth[10]={0};
    n=10;
    Array(fourth,10);//Array  Function call 
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<fourth[i]<<" ";
    // }
     
  


    int fifth[10]={1};
    n=10;
    Array(fifth,10);//Array  Function call 
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<fifth[i]<<" ";
    // }




}