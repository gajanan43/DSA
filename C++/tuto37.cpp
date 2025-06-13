#include <iostream>
using namespace std;

class Employee // base class
{
public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}
};

class Programmer : Employee
{
    public:
    int language;
    Programmer(int inpId)
    {
        id=inpId;
        language=9;
    }
    void getData()
    {
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1),rohan(1);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    Programmer p(10);
    cout<<p.language<<endl;
    p.getData();
    return 0;
}