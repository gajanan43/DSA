#include<iostream>
using namespace std;

void update(int **p2){
    // p2=p2+1;
    //Kay change ho ga-NO

    // *p2=*p2+1;
    //Kay change ho ga-

    // **p2=**p2+1;
    //Kay change ho ga-

}

int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;

    /*cout<<"Printing the value of p "<<p<<endl;
    cout<<"Printing the value of &i "<<&i<<endl;
    cout<<"Printing the value of *p2 "<<&i<<endl;
    cout<<"Printing the value of &p "<<&p<<endl;
    cout<<"Printing the value of p2 "<<p2<<endl;
    cout<<"Printing the value of &p2 "<<&p2<<endl;

    cout<<"Printing the value of i "<<i<<endl;
    cout<<"Printing the value of i using *p "<<*p<<endl;
    cout<<"Printing the value of i using **p2 "<<**p2<<endl;

    //Double Pointers & Function 
    cout<<"Before Printing values"<<endl;
    cout<<"Printing the value of i "<<i<<endl;
    cout<<"Printing the value of p "<<p<<endl;
    cout<<"Printing the value of p2 "<<p2<<endl;
    update(p2);
    cout<<"After Printing values"<<endl;
    cout<<"Printing the value of i "<<i<<endl;
    cout<<"Printing the value of p "<<p<<endl;
    cout<<"Printing the value of p2 "<<p2<<endl;*/


    return 0;
}