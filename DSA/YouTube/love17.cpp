#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    //for round 1 to n-1 
    for(int i=1;i<n;i++)
    {
        //Process till n-i index
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }

    }
}
int main()
{
    int arr[6]={10,1,7,6,14,9};
    cout<<"Before sorting array"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    bubblesort(arr,6);
    
    cout<<"After sorting array"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

}