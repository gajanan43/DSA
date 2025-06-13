#include<iostream>
using namespace std;

//This is find a unique concuerrence value from a array
// int findunique(int arr[],int size)
// {
//     int ans=0;
//     for(int i=0;i<size;i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     int arr[5]={1,2,4,1,2};

//     cout<<"Unique value is:"<<findunique(arr,5);

// }



//this is find a duplicate value from a given array

// int duplicate(int arr[],int n)
// {
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//         ans=ans^arr[i];//arr[i] it means whole value form array 
//     }

//     for(int i=1;i<n;i++)
//     {
//         ans=ans^i;// i repersent  one value duplicate value is missing 
//     }
//     return ans;
// }

// int main()
// {
//     int arr[6]={1,2,2,3,4,5};

//     cout<<"Duplicate value is from  given array:"<<duplicate(arr,6);
// }


//Find the twice value  from a given array 


// int twice(int arr[],int n)
// {
//     int ans=0;
//     for(int i=0;i<n;i++)
//     {
//         ans=i^arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     int arr[7]={1,2,3,3,2,4,5};

//     cout<<"Answer of duplicate values from a given array:"<<twice(arr,7);
// }


//This is find a common element form a two arrays
//Answer is not correct*************************/
// int main()
// {
    
//     int arr1[6]={1,2,3,7,5,6};
//     int arr2[8]={2,5,6,8,9,7,3,99};

//     int i=0,j=0;

//     while(i<6 && j<8)
//     {
//         if(arr1[i]==arr2[j])
//         {
//             cout<<i;
//             i++;
//             j++;
//         }
//         else if(arr1[i]<arr2[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }

// }


//This question about a sorting a array values 0's ans 1's 0001111
void printingarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void sortOne(int arr[],int n)
{
    int left=0,right=n-1;
    while(left<right)
    {   
        
        while(arr[left]==0 && left<right)
        {
            left++;
        }
        while(arr[right]==1 && left<right)
        {
            right--;
        }
        while(arr[left]==1 && arr[right]==0)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
} 

int main()
{
    int arr[8]={1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printingarray(arr,8);
}