#include<iostream>
using namespace std;
int findpivot(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    return s;
}

int binarysearch(int arr[],int s,int e,int key)
{
    int start=s,end=e;
    //int mid=(start+end)/2;//It is also logically correct but,A big integer value is assinged at time it fail

    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }

        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
        //mid=(start+end)/2;//It is also logically correct but,A big integer value is assinged at time it fail
    }
    return -1;
}
int findposition(int arr[],int n,int k)
{

    int pivot=findpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k);
    }
}

int main()
{
    int arr[5]={7,9,1,2,3};
    int find=findposition(arr,5,2);
    cout<<"The position of 2 is:"<<find<<endl;
}