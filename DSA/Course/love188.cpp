#include<iostream>
#include<queue>
using namespace std;

int getKthSmallestElement(int arr[],int n,int k ){
    //create a max heap
    priority_queue<int>pq;

    //insert first k element of array
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    //for remaining elements, push only if they are less than top
    for(int i=k;i<n;i++){
        int element=arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    return pq.top();
     
}

int main(){

    int arr[]={10,5,20,4,15};
    int n=5;
    int k=2;

    int ans=getKthSmallestElement(arr,n,k);
    cout<<"Answer is: "<<ans<<endl;

    /*----Max heap using STL------*/
    // priority_queue<int>pq;
    // pq.push(5);
    // pq.push(10);
    // pq.push(2);
    // pq.push(1);
    // pq.push(17);

    // cout<<"Top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"Top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"Top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"Top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"Top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"size of priority queue: "<<pq.size()<<endl;

    // if(!pq.empty()){
    //     cout<<"Max heap is empty "<<endl;
    // }
    // else{
    //     cout<<"Max heap is not empty "<<endl;
    // }


    /*------Min heap using STL------*/
    // priority_queue<int,vector<int>,greater<int>>pq;
    // pq.push(3);
    // pq.push(9);
    // pq.push(4);
    // pq.push(1);
    // pq.push(7);

    // cout<<"top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"top element: "<<pq.top()<<endl;
    // pq.pop();

    // cout<<"Size: "<<pq.size()<<endl;

    // if(pq.empty()){
    //     cout<<"Min heap is empty "<<endl;
    // }
    // else{
    //     cout<<"Min heap is not empty "<<endl;
    // }

    return 0;
}