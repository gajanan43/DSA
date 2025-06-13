#include<iostream>
using namespace std;

bool isPossible(int arr[][4],int target,int n,int m)//column value must be include
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;

}

int main()
{
    //intialising of array
    int arr[3][4];
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};//row wise
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};//column wise
    //taking inpunt in a row wise
    //taking input
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }

    /*//taking inpunt in a column wise
    //taking input
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }*/

    //Display output 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int target;
    cout<<"Enter which element to search:"<<endl;
    cin>>target;

    if(isPossible(arr,target,3,4))
    {
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }

    return 0;

}