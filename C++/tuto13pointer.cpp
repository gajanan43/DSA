#include<iostream>
using namespace std;

int main(){
    int marks[]={23,45,56,89};
    int*p=marks;
    // cout<<"\nthe value of marks[0]="<<*p;
    // cout<<"\nthe value of marks[1]="<<*(p+1);
    // cout<<"\nthe value of marks[2]="<<*(p+2);
    // cout<<"\nthe value of marks[3]="<<*(p+3);
    for (int i = 0; i <4; i++)
    {
        /* code */
        cout<<"\nthe value of arrys is:"<<*p;
        *p++;
    }
    

    return 0;
}