#include<iostream>
using namespace std;


/* This is first & last occurance of array insex of a common value*/
// int FirstOcc(int arr[],int n,int key)
// {
//     int s=0,e=n-1;
//     int  mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e)
//     {
//         if(arr[mid]==key)
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else if (key>arr[mid])
//         {
//             s=mid+1;
//         }
//         else if (key<arr[mid])
//         {
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
        
//     }
//     return ans;
// }

// int LastOcc(int arr[],int n,int key)
// {
//     int s=0,e=n-1;
//     int  mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e)
//     {
//         if(arr[mid]==key)
//         {
//             ans=mid;
//             s=mid+1;
//         }
//         else if (key>arr[mid])
//         {
//             s=mid+1;
//         }
//         else if (key<arr[mid])
//         {
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
        
//     }
//     return ans;
// }

// int main()
// {
//     int arr[5]={1,2,3,3,5};
//     int first= FirstOcc(arr,5,3);
//     int last=LastOcc(arr,5,3);
//     cout<<"Index from left most occurance is:"<<first<<endl;
//     cout<<"Index from Right most occurance is:"<<last<<endl;
//     cout<<"Total number of occurance is:"<<(last-first)+1;
// }


/* This is find a mountain value of given value*/
int mountain(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
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

int main()
{
    int arr[4]={3,4,5,1};

    int find=mountain(arr,4);
    cout<<"The mountain value is:"<<find;
} 