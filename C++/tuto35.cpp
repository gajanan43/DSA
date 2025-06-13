#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "Tis is time when constructor is called for a object" << count << endl;
    }
    ~num()
    {

        cout << "Tis is time when destructor is called for a object" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside the main function" << endl;
    cout << "Creating the frist object n1" << endl;
    num n1
    {
        cout << "Entering this block";
        cout << "Creating two more object n2,n3";
        num n2, n3;
        cout << "Exiting this block";
    }
    cout << "back to the main";

    return 0;
}