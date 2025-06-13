#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
    void getdata(void)
    {
        cout << "The value of real part is:" << real << endl;
        cout << "The value of imginary part is:" << img << endl;
    }
};

int main()
{
    // This is Basic
    //  complex c;
    //  c.setdata(1,54);
    //  c.getdata();

    // this is pointers objects
    //  complex c;
    //  complex *ptr=&c;
    //  (*ptr).setdata(1,54);
    //  (*ptr).getdata();

    // this is for array of object

    // complex *ptr=new complex[4];
    // (*ptr).setdata(1,54);
    // (*ptr).getdata();

    // This is use a arrow operator
    complex c;
    complex *ptr = &c;
    ptr->setdata(1, 54);
    ptr->getdata();

    return 0;
}