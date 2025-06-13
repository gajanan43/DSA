#include<iostream>
using namespace std;

void swapal(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

void Printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};

    swapal(even,6);
    swapal(odd,5);

    Printarray(even,6);
    Printarray(odd,5);
}