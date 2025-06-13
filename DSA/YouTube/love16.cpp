#include<iostream>
using namespace std;


void  selectionsort(int arr[],int n)
{
 
    //This for loop for a round
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        
        //This for loop for a processes
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    
   
}

int main()
{
    int arr[5]={40,25,12,22,11};
    selectionsort(arr,5);
    cout<<"Sorted array is:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


