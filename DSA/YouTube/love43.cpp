#include<iostream>
using namespace std;

// class Human{
//     public:
//         string name;
//         int weight;
//         int age;

    
//         int getAge(){
//           return   this->age;
//         }

//         void setWeight(int w){
//             this->weight=w;
//         }
    
// };

// class Male : public Human{
//     public:
//         string color;

//     void sleep(){
//         cout<<"Male sleeping "<<endl;
//     }
// };

//Single inheritance
// class Animal{
//     public:
//         int age;
//         int weight;

//     void bark(){
//         cout<<"Barking"<<endl;
//     }
// };

// class Dog:public Animal{
   

// };

// class GermanShefered:public Dog{

// };

// class Human{
//     public:
//         string color;
    
//     void speaking(){
//         cout<<"Speaking"<<endl;
//     }
// };

// class Hybrid:public Animal,public Human{

// };

// class A{
//     public:
//         void fun1(){
//             cout<<"Inside class A"<<endl;
//         }
// };

// class B{
//     public:
//         void fun1(){
//             cout<<"Inside class B"<<endl;
//         }
// };

// class C:public A,public B{

// };

// //compile time polymorphism
// class one{
//     public:
//         int a,b;
//         // void fun1(){
//         //     cout<<"Fuction overloading 1"<<endl;
//         // }

//         // int  fun1(int a){
//         //     cout<<"Function overloading 2"<<endl;
//         //     return a;
//         // }

//         // int  fun1(int a,int b){
//         //     cout<<"Function overloading 3"<<endl;
//         //     return a,b;
//         // }


//         int add(){
//             return a+b;
//         } 

//         void operator+ ( one &obj){
//             int value1=this->a;
//             int value2=obj.a;

//             cout<<"output "<<value2-value1<<endl;
//         }
// };

//Run time polymorphism
class Animal{
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

class Dog:public Animal{
    public:
        void speak(){
            cout<<"Bark"<<endl;
        }
};


int main(){

    /*Male object1;

    cout<<object1.name<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.age<<endl;

    cout<<object1.color<<endl;
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    
    object1.sleep();*/


    /*//Single inheritance
    Dog obj;
    obj.speak();
    cout<<obj.age<<endl;*/

    /*//Multi-level inheritance
    GermanShefered d;
    d.speak();
    cout<<d.age<<endl;*/

    /*//Multiple inheritance
    Hybrid h;
    h.bark();
    h.speaking();*/

    /*//Hierarchical inheritance
    A a;
    a.fun1();

    B b;
    b.fun1();
    b.fun2();

    C c;
    c.fun1();
    c.fun3();*/

    /*//inheritance ambiguity
    C c;
    // c.fun1();

    c.A::fun1();
    c.B::fun1();*/

    // one obj;
    // obj.fun1();
    // obj.fun1(5);
    // obj.fun1(5,2);

    /*//Operator overloding--Compile time polymorphism
    one obj1,obj2;
    obj1.a=4;
    obj2.a=7;

    obj1+obj2;*/

    //Run time polymorphism
    Dog d;
    d.speak();    
    return 0;
}