#include<iostream>
using namespace std;

//frunction prototype
//syntax--->type fuction_name (arguments);
//int sum(int a,int d);//it is also accept
int sum(int,int);//accept
//void g(void);//correct
void g();

int main(){
    int num1,num2;
    cout<<"\nEnter frist number:";
    cin>>num1;
    cout<<"\nEnter second number:";
    cin>>num2;
    //num1 and num2 are the actual paramerters
    cout<<"\nsum of two number is:"<<sum(num1,num2);
    g();
    return 0;
}


int sum(int a,int d)
{
    //this are the formal paramerters and give value from actual paramerterrs
    int c=a+d;
    return c;
}

void g(){
    cout<<"\nhello";
}