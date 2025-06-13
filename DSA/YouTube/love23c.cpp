#include<iostream>
using namespace std;

void Sinewave(int arr[][3],int m,int n)
{
    //int ans[3][3]={0};
    for(int col=0;col<n;col++)
    {
        if(col&1)
        {
            for(int row=m-1;row>=0;row--)
            {
                cout<<arr[row][col]<<" ";
                //ans.push_back(arr[row][col]);
            }
        }
        
        else{
            for(int row=0;row<m;row++)
            {
                cout<<arr[row][col]<<" ";
                //ans.push_back(arr[row][col]);
            }
        }
    }
}

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    cout<<" 2D Array  print in sine wave:"<<endl;
    Sinewave(arr,3,3);
}