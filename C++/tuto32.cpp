#include <iostream>
using namespace std;

class Data
{
    int data1, data2;

public:
    Data(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "THe value of data is " << data1 << " and " << data2 << endl;
    }
};

int main()
{
    // Data d(1,4);
    Data d(1);
    d.display();
    return 0;
}