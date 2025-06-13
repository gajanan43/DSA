#include<iostream>
using namespace std;

//This question is for whole array reverse 
/*int  reverse(int arr[],int n)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[5]={11,7,3,12,4};

    cout<<"Before reverse array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverse(arr,5);
    cout<<"After reverse of array:"<<endl;
     for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}*/

//This question for reverse array elemnt after a M element 
int  reverse(int arr[],int n,int m)//m is the 2nd index of array after that reverse of array 
{
    int s=m+1,e=n-1;
    while(s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[5]={11,7,3,12,4};

    cout<<"Before reverse array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverse(arr,5,2);//2 is repersent a 2nd index of array 
    cout<<"After reverse of array:"<<endl;
     for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}