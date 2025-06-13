#include<iostream>
using namespace std;

//Printing sum of row
void PrintSum(int arr[][3],int n,int m)
{
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum or row:"<<sum<<endl;
    }

}

void PrintSumCol(int arr[][3],int n,int m)
{
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[j][i];
        }
        cout<<"Sum or col:"<<sum<<endl;
    }

}

int largestSum(int arr[][3],int n,int m)
{
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxi)
        {
            maxi=sum;
            rowIndex=i;
        }
        
    }
    cout<<"The maximum sum is:"<<maxi<<endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];
    cout<<"Enter a element"<<endl;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Your element "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Sum of row-wise "<<endl;
    PrintSum(arr,3,3);

    cout<<"Sum of col-wise "<<endl;
    PrintSumCol(arr,3,3);

    cout<<"Maximum sum of index is:"<<largestSum(arr,3,3)<<endl;
}