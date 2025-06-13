#include<iostream>
using namespace std;

// this will not swap  a and b
// void swap(int a,int b)
// {
//     int temp=a;
//         a=b;
//         b=temp;
// }


//call by reference
// void swappointer(int* a,int *b)
// {
//     int temp=*a;
//         *a=*b;
//         *b=temp;
// }

//call by reference using c++ reference variables
void swapreferncevar(int &a,int &b)
{
    int temp=a;
        a=b;
        b=temp;
}
int main(){
    int x=4,y=5;
    cout<<"the value of x is:"<<x<<" and value of y is:"<<y<<endl;
   // swap(x,y);// this will not swap  a and b
   //swappointer(&x,&y);//this will swap by using pointer refernce
   swapreferncevar(x,y);//this will swap by using  refernce variable 
    cout<<"the value of x is:"<<x<<" and value of y is:"<<y<<endl;
    return 0;
}