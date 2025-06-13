#include<iostream>
using namespace std;

// void print(int *p){
//     cout<<*p<<endl;
// }

// void update(int *p){
//     // p=p+1;
//     // cout<<"Inside "<<p<<endl;
//     *p=*p+1;
// }

int getSum(int *arr,int n){
    cout<<"Size of array "<<sizeof(arr);
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    /*
    int arr[10]={2,5,6,9,8};

    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is "<<&arr[0]<<endl;

    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th "<<*(arr)+1<<endl;
    cout<<"8th "<<arr[2]<<endl;
    cout<<"9th "<<*(arr+2)<<endl;
    int i=3;
    cout<<i[arr]<<endl;
    */

    // int temp[10]={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<"1st "<<sizeof(*temp)<<endl;
    // cout<<"2st "<<sizeof(&temp)<<endl;

    // int *ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // //Symbol table cannot be changed
    // int arr[10];
    // //ERROR
    // // arr=arr+1

    // int *ptr=&arr[0];
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;

    // //Character array
    // int arr[5]={1,2,3,4,5};
    // cout<<arr<<endl;

    // char ch[5]="abcd";
    // //This situation ch print a all character 
    // cout<<ch<<endl;

    // //Create pointer a character array
    // char *c=&ch[0];
    // cout<<c<<endl;//Prints a entire element 

    // char temp='z';
    // char *m=&temp;
    // cout<<m<<endl;

    //Function
    //1st situation
    // int value=5;
    // int *p=&value;

    // print(p);
    // cout<<"Before p "<<*p<<endl;

    // update(p);
    // cout<<"After p "<<*p<<endl;

    //2nd situation 
    int arr[5]={1,2,3,4,5};

    cout<<"Print sum of array "<<getSum(arr,5);

    return 0;
}