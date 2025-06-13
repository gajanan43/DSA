#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // IT is static dataa member which is shear the different object

public:
    void setdata(void)
    {
        cout << "\nEnter the id" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "\nthe id of this employee is:" << id << " and this is employee number:" << count << endl;
    }

    static void getcount(void)//this is also known as static function & this only access static variable & function 
    {
        cout << "\nThe value of of count:"<<count<<endl;
    }
};

int employee::count; // default value is 0

int main()
{

    employee harry, rohan, gajanan;
    // harry.id=1; //********this is  give error because the this are private data member of class
    // harry.count=1; //********this is give errorbecause the this are private data member of class

    harry.setdata();
    harry.getdata();
    employee::getcount();
    
    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    gajanan.setdata();
    gajanan.getdata();
    employee::getcount();
    return 0;
}