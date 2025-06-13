#include<iostream>
using namespace std;


//this about array of object***********************
// class employee
// {
//     int id;
//     int salary;

//     public:
//     void setid(void)
//     {
//         salary=122;
//         cout<<"\nEnter the id of employee"<<endl;
//         cin>>id;

//     }

//     void getid(void)
//     {
//         cout<<"\nThe id of this employee is:"<<id<<endl;
//     }
// };

// int main(){
    
//     // employee harry,rohan,gajanan,omkar;
//     // harry.setid();
//     // harry.getid();

//     employee fb[4];//array as object 
//     for (int i = 0; i <4; i++)
//     {
//         /* code */
//         fb[i].setid();
//         fb[i].getid();
//     }
    
//     return 0;
// }




//this about passing object as function arguments************************

class complex
{
    int a;
    int b;

    public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }

    void addcomplex(complex c1,complex c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }

    void print()
    {
        cout<<"Your complex number is:"<<a<<"+"<<b<<"i"<<endl;
    }
};

int main()
{

    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    
    c3.addcomplex(c1,c2);
    c3.print();
    return 0;
}