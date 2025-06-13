#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //Base case 
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}

 int getSum(int arr[],int size){
    //Base case 
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remainingPart=getSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;

}

bool linearSearch(int *arr,int size,int k){
    //Base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool reamainingPart=linearSearch(arr+1,size-1,k);
        return reamainingPart;
    }
}

void print(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int *arr,int s,int e,int key){
    print(arr,s,e);
    //Base case
    if(s>e)
        return false;

    int mid=s+(e-s)/2;

    if(arr[mid]==key)
        return true;

    if(arr[mid<key]){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
         return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    
    // int arr[5]={1,3,9,5,8};
    // int size=5;

    /*bool ans=isSorted(arr,size);

    if(ans){
        cout<<"Array is sorted"<<endl;
    }

    else
    cout<<"Array is unsorted"<<endl;

    //Sum function call
    int ans=getSum(arr,size);
    cout<<"Sum of all element "<<ans<<endl;

    //Linear search 
    int key=9;
    int ans=linearSearch(arr,size,key);
    if(ans){
        cout<<"Key is found"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }*/

   //Binary search 
   int arr[6]={2,5,7,10,14,19};
   int size=6;
   int key=16;

   cout<<"Present or not "<<binarySearch(arr,0,size-1,key)<<endl;

    return 0;
}