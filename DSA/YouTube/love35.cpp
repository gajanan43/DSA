#include<iostream>
using namespace std;

void mergeSort(int *arr, int s,int e){
    int mid=s+(e-s)/2;

    //Create a 2 array
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    //copy element into two array
    int mainIndexArray=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIndexArray++];
    }

    mainIndexArray=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIndexArray++];
    }

    int index1=0;
    int index2=0;
    mainIndexArray=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndexArray++]=first[index1++];
        }
        else{
            arr[mainIndexArray++]=second[index2++];
        }
    }
    
    while(index1<len1){
        arr[mainIndexArray++]=first[index1++];
    }

    while(index2<len2){
        arr[mainIndexArray++]=second[index2++];
    }

    //delete dynamic allocation of array
    delete [] first;
    delete [] second;
}

void solve(int  *arr, int s,int e){
    //Base condition 
    if(s>=e){
        return;
    }

    int mid=s+(e-s)/2;

    //Left part
    solve(arr,s,mid);

    //Right part
    solve(arr,mid+1,e);

    //merge
    mergeSort(arr,s,e);

}

int main(){
    
    int arr[6]={14,5,0,84,78,100};
    int n=6;

    solve(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
}