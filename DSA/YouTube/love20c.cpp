#include<iostream>
using namespace std;

int Order(int arr[],int m)
{
    int NonZeroIndex=0;
    for(int j=0;j<m;j++)
    {
        if(j!=0)
        {
            swap(arr[j],arr[NonZeroIndex]);
            NonZeroIndex++;

        }
    }
}

int main()
{
    int arr[6]={0,1,3,12,0};

    cout<<"Order array first all nonzero value:"<<Order(arr,6)<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}