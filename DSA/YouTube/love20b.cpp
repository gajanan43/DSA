#include<iostream>
using namespace std;

/*void mergearray(int arr1[],int n,int arr2[],int m,int arr3[])
{   
    int i=0,j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    
    while(i<n)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }

    while(j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    mergearray(arr1,5,arr2,3,arr3);
    cout<<"Merged array is:"<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<arr3[i]<<" ";
    }
}*/

void mergearray(int arr1[],int m,int arr2[],int n)
{   
        int k= m+n-1;
        int i=m-1, j=n-1;
        while (i>=0 && j>=0){
            if (arr1[i]>arr2[j]){
                arr1[k]= arr1[i];
                i--;
            }
            else{
                arr1[k]= arr2[j];
                j--;
            }
            k--;
        }
        //If all second array value are greater  than first array then this while loop is excute 
        while (j>=0){
            arr1[k--]= arr2[j--];
        }
}

int main()
{
    int arr1[6]={1,3,5,0,0,0};
    int arr2[3]={2,4,6};
    
    mergearray(arr1,3,arr2,3);
    cout<<"Merged array is:"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr1[i]<<" ";
    }
}


