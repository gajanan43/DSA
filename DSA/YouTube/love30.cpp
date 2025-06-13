#include<iostream>
using namespace std;
// #define PI 3.14//Creating a Macro 

// int score=5;//Global variable 

// void a(int &i){
//     cout<<score<<endl;
//     cout<<"Value of i "<<i<<endl;
// }

// void b(int &i){
//     cout<<score<<endl;
//     cout<<"Value of i "<<i<<endl;
// }

//Creating a Inline function 
// inline getMax(int &a,int &b){
//     return (a>b)?a:b;
// }

//Default argument
void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    /*//Macro 

    int r=5;
    //double pi=3.14;

    double area=PI*r*r;
    cout<<area<<endl;*/

    /*//Global variable
    int i=5;

    a(i);
    b(i);*/

    /*//Inline function 
    int a=1,b=2;
    int ans=0;

    ans=getMax(a,b);
    cout<<ans<<endl;

    a=a+3;
    b=b+1;

    ans=getMax(a,b);
    cout<<ans<<endl;*/

    //Default argument 
    int arr[5]={1,2,3,4,5};
    int size=5;

    print(arr,size);
    cout<<endl;

    print(arr,size,2);

    return 0;
}