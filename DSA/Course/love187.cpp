#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[101];
    int size;

    Heap()
    {
        size = 0;
    }

    void insert(int value)
    {
        // add the value at the end of arrry
        size = size + 1;
        int index = size;
        arr[index] = value;

        // inserted value place at right{means sahi jagha} position
        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    int  deletion(){
        int ans=arr[1];
        //Step1: //Replace root node to the end of the array value
        arr[1]=arr[size];
        size--;

        //Step2: //Place root node ka data on its correct position
        int index=1;
        while(index<size){
            int left=2*index;
            int right=2*index+1;

            int largest=index;

            if(left<size && arr[largest]<arr[left]){
                largest=left;
            }

            if(right<size && arr[largest]<arr[right]){
                largest=right;
            }

            if(largest==index){
                break;;
            }
            else{
                swap(arr[largest],arr[index]);
                index=largest;
            }
        }
        return ans;

    }
};

void heapify(int arr[],int n,int i){
    int index=i;
    int leftIndex=2*i;
    int rightIndex=2*i+1;

    int largest=index;

    if(leftIndex<=n && arr[largest]<arr[leftIndex]){
        largest=leftIndex;
    }

    if(rightIndex<=n && arr[largest]<arr[rightIndex]){
        largest=rightIndex;
    }

    if(index!=largest){
        //swap the left or right child which is greter value with respect to root
        swap(arr[largest],arr[index]);
        index=largest;
        heapify(arr,n,index);
    }
}

void buildHeap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}

void heapSort(int arr[],int n){
    int index=n;
    while (n!=1)
    {
        //swap fist ans last element 
        swap(arr[1],arr[index]);
        index--;
        n--;

        //heapify 
        heapify(arr,n,1);//heapify for top most element beacuse the 1 taken as parameter 
    }
    
}

int main()
{
    /*-------insert one element into last of array--------*/
    // Heap h;
    // h.arr[0]=-1;
    // h.arr[1]=100;
    // h.arr[2]=50;
    // h.arr[3]=60;
    // h.arr[4]=40;
    // h.arr[5]=45;
    // h.size=5;

    /*----------insert one by element in tree------*/
    // h.arr[0]=-1;    
    // h.insert(50);
    // h.insert(30);
    // h.insert(70);
    // h.insert(40);
    // h.insert(80);
    // h.insert(100);
    // h.size=7;

    // cout<<"Printing the Heap before add a value"<<endl;
    // for(int i=0;i<h.size;i++){
    //     cout<<h.arr[i]<<" ";
    // }
    // cout<<endl;

    // h.insert(110);
    // cout<<"Printing the Heap after add a value"<<endl;
    // for(int i=0;i<h.size;i++){
    //     cout<<h.arr[i]<<" ";
    // }
    // cout<<endl;


    /*--------Build a heap from Heapigy---------*/
    int arr[]={-1,12,15,13,11,14};
    int n=5;
    buildHeap(arr,n);

    cout<<"Printing the heap "<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr,n);
    cout<<"Printing the heap element after sort "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}