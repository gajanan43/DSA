#include<iostream>
#include<algorithm>
using namespace std;

// int binarysearch(int arr[],int size,int key)
// {
//     int start=0,end=size-1;
//     //int mid=(start+end)/2;//It is also logically correct but,A big integer value is assinged at time it fail

//     int mid=start+(end-start)/2;
//     while(start<=end)
//     {
//         if(key==arr[mid])
//         {
//             return mid;
//         }

//         if(key>arr[mid])
//         {
//             start=mid+1;
//         }
//         else
//         {
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//         //mid=(start+end)/2;//It is also logically correct but,A big integer value is assinged at time it fail
//     }
//     return -1;
// }

// int main()
// {

//     int even[6]={2,4,6,12,14,18};
//     int odd[5]={1,3,5,7,9};

//     int evenindex=binarysearch(even,6,12);
//     cout<<"The index of 12 is:"<<evenindex<<endl;

//     int oddindex=binarysearch(odd,5,12);
//     cout<<"The index of 12 is:"<<oddindex<<endl;

// }

void search(int arr[],int key,int size){
  int start=0;
  int end=size-1;
  int mid=(start+end)/2;
  
  while(start<=end){
    
    if(key==arr[mid]){
      cout<<"key is found";
    }
    if(key>arr[mid]){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=(start+end)/2;
  }
  
}

int main() 
{
    int arr[6]={5,1,2,9,4,6};
    int size=6;
    sort(arr, arr + size);
    search(arr,1,size);
    
    return 0;
}