#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s,int target){
    //Base condition 
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement=s.top();
    s.pop();

    //recurssive call
    solve(s,target);

    //Backtraking
    s.push(topElement);
}

// void insertAtBottom(stack<int>&s){
//     if(s.empty()){
//         cout<<"You can't insert element in stack"<<endl;
//         return;
//     }

//     int target=s.top();
//     s.pop();
//     solve(s,target);
// }

/*void reverseStack(stack<int>&s){
    //Base codition
    if(s.empty()){
        return ;
    }

    //first condition nahi pata
    int target=s.top();
    s.pop();

    //reverse stack
    reverseStack(s);

    //insert at bottom target ko
    solve(s,target);
}*/

void insertSorted(stack<int>&s,int target){
    //Base condition 
    if(s.empty()){
        s.push(target);
        return;
    }

    if(s.top()<=target){
        s.push(target);
        return;
    }

    int topElement=s.top();
    s.pop();
    insertSorted(s,target);

    //BT
    s.push(topElement);
}

void sortStack(stack<int>&s){
    //Base condition 
    if(s.empty()){
        return;
    }

    int topElement=s.top();
    s.pop();

    sortStack(s);

    insertSorted(s,topElement);
}

int main(){
    stack<int> s;

    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    // insertAtBottom(s);
    // reverseStack(s);
    sortStack(s);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    

    return 0;
}