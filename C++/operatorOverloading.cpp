#include<iostream>
using namespace std;
// //Operator Overloading
// class Complex{
//     public:
//     int real,img;

//     Complex(){
//         real=0;
//         img=0;
//     }

//     Complex(int r,int i){
//         real=r;
//         img=i;
//     }

//     //operator overloding syntax
//     Complex operator+(Complex c){   //C1+C2=C3
//         Complex temp;               //C3
//         temp.real=real+c.real;
//         temp.img=img+c.img;
//         return temp;
//     }

//     void Print(){
//         cout<<real<<"+"<<img<<"i"<<endl;
//     }
// };

// int main(){
    
//     Complex c1(5,2);
//     Complex c2(2,5);
//     Complex c3;
//     c3=c1+c2;

//     c3.Print();
//     return 0;
// }


//copy constructor
class A{
    public:
    int x,y;
    A(int x,int y){
        this->x=x;
        this->y=y;
    }
    void print(){
        cout<<x+y<<endl;
    }
};

int main(){
    A a(1,2);
    A b=a;

    b.print();
    return 0;
}