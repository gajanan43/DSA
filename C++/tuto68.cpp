#include<iostream>
using namespace std;
template <class T>
class Harry
{
    public:
    T data;
    Harry(T a)
    {
        data=a;
    }
    void display();
};
template <class T>
void Harry<T>::display()
{
    cout<<"The value of data is:"<<data<<endl;
}


void func(int a)
{
    cout<<"The value of a is:"<<a<<endl;
}

template<class T>
void func(T a)
{
    cout<<"The value of a is():"<<a<<endl;
}
int main(){
    // Harry<float>o(2.5);
    // // Harry<char>o('c');
    // // Harry<double>o(2.55555);
    // o.display();
    // cout<<endl;
    
    // Harry h(5);
    // cout<<h.data<<endl;
    func(5);//This match fristly exact any type of fuction declared or not if declared it run this function
    func('c');//This is not with the int datatype funtion it is use a tmeplate funtion

    return 0;
}