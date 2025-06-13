#include<iostream>
using namespace std;

//Finding the minimum & maximum value form a given array

// int getMax(int num[],int n)
// {
//     int max=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(num[i]>max)
//         {
//             max=num[i];
//         }
//     }
//     return max;
// }

// int main()
// {
//     int size;
//     cin>>size;

//     int num[100];
//     //Taking a input in array
//     for(int i=0;i<size;i++)
//     {
//         cin>>num[i];
//     }
    
//     cout<<"Maximum value in a given array:"<<getMax(num,size);

// }

//Update the value of array it is opposite of variable 
// void update(int arr[],int n)
// {
//     cout<<"Printing the value of update function"<<endl;
//     arr[0]=120;
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
    
//     int arr[3]={1,2,3};
//     update(arr,3);

//     cout<<"Printing the value of main function"<<endl;
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


//Search any value from given array

// bool search(int arr[],int size,int key)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key)
//         {
//             return 1;
//         }   
//     }
//     return 0;
// }
// int main()
// {
//     int arr[10]={-10,11,0,-3,5,-6,8,11,-9,2};
//     int key;
//     cout<<"Enter the key value for search:";
//     cin>>key;


//     bool found=search(arr,10,key);
//     if(found)
//     {
//         cout<<"Key is present"<<endl;
//     }

//     else{
//         cout<<"Key is not present"<<endl;
//     }
// }


//Reverse value  of a given  array 
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
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
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={1,2,3,4,5};

    reverse(arr,6);
    reverse(brr,5);

    Printarray(arr,6);
    Printarray(brr,5);
}