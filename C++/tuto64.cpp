#include<iostream>
using namespace std;

template <class T>
class vector
{
    public:
    T *arr;
    int size;

    vector(int a)
    {
        size=a;
        arr=new T[size];
    }
    T dotproduct(vector &v)
    {
        T d=0;
        for (int i = 0; i < size; i++)
        {
            /* code */
            d+=this->arr[i]*v.arr[i];
        }
        return d;
        
    }
};
int main(){
    // cout<<"This vector values for int datatypes:"<<endl;
    // vector <int>v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=2;
    // v1.arr[2]=1;
    
    // vector <int>v2(3);
    // v2.arr[0]=4;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    
    // int a=v1.dotproduct(v2);
    // cout<<a<<endl;

    cout<<"This vector values for float datatypes:"<<endl;
    vector <float>v1(3);
    v1.arr[0]=4.1;
    v1.arr[1]=1.2;
    v1.arr[2]=2.1;
    
    vector <float>v2(3);
    v2.arr[0]=1.0;
    v2.arr[1]=0.1;
    v2.arr[2]=1.1;
    
    float a=v1.dotproduct(v2);
    cout<<a<<endl;

    return 0;
}