#include<iostream>
#include<stack>
using namespace std;


// class Stack{
//     public:
//         int top;
//         int *arr;
//         int size;

//         Stack(int size){
//             arr=new int[size];
//             this->size=size;
//             top=-1;
//         }

//         //function 
//         void push(int data){
//             if(size-top>1){
//                 //space is available
//                 //insert 
//                 top++;
//                 arr[top]=data;
//             }
//             else{
//                 //space is not available 
//                 cout<<"stack is overflow"<<endl;
//             }
//         }

//         void pop(){
//             if(top==-1){
//                 cout<<"stack is underflow, you can't delete"<<endl;
//             }
//             else{
//                 top--;
//             }
//         }

//         int getTop(){
//             if(top==-1){
//                 cout<<"There is not element in stack"<<endl;
//             }
//             else{
//                 return arr[top];
//             }
//         }

//         //Number of valid element present in stack 
//         int getSize(){
//             return top+1;
//         }

//         bool isEmpty(){
//             if(top==-1){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }

// };

void printMiddle(stack<int>&s,int totalSize){
    //Base case
    if(s.size()==totalSize/2+1){
        cout<<"Middle element is "<<s.top()<<endl;
        return;
    }
     
    int temp=s.top();
    s.pop();

    //recursive call 
    printMiddle(s,totalSize);

    //backtracking
    s.push(temp);
}

int main(){
    /*//Using STL

    //Creation
    stack<int>st;
    st.push(50);
    st.push(20);

    //Renmove
    st.pop();

    //top element
    cout<<"Element on top "<<st.top()<<endl;

    //size of stack
    cout<<"size of stack "<<st.size()<<endl;

    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }*/

   /*Stack s(10);

   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);

   while (!s.isEmpty())
   {
        cout<<s.getTop()<<" ";
        s.pop();
   }
   
   cout<<"Size of stack is "<<s.getSize()<<endl;*/

   stack<int> s;

   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);
   s.push(70);

   printMiddle(s,s.size());

    return 0;
}