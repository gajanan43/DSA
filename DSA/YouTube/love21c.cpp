#include<iostream>
using namespace std;

int SumOfArray(int arr1[],int n,int arr2[],int m)
{
    int i=n-1;
    int j=m-1;
    int ans[5]={0};
    int carry=0;
    while (i>=0 && j>=0)
    {
        int val1=arr1[i];
        int val2=arr2[j];

        int sum=val1+val2+carry;

        carry=sum/10;
        sum=sum%10;
        ans[i]=sum;
        i--;
        j--;
    }
    
    while(i>=0)
    {
        int sum=arr1[i]+carry;

        carry=sum/10;
        sum=sum%10;
        ans[i]=sum;
        i--;
    }

    while(j>=0)
    {
        int sum=arr2[j]+carry;

        carry=sum/10;
        sum=sum%10;
        ans[j]=sum;
        j--;
    }

    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans[j]=sum;
    }
    return ans[5];
    
}

int main()
{
    int arr1[3]={1,2,3};
    int arr2[2]={1,2};

    cout<<"Sum of two array is:"<<SumOfArray(arr1,3,arr2,2);
}