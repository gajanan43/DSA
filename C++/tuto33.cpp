#include <iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int year;
    float returnValue;
    float interestValue;

public:
    BankDeposit()
    {
    }
    BankDeposit(int p, int y, float r); // interest rate is in form i.e. 0.04
    BankDeposit(int p, int y, int r);   // interest rate is in percentage form i.e. 14%
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestValue = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestValue = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 +interestValue );
    }
}
void BankDeposit::show()
{
    cout << "Principal amount was " << principal << ". Return value after " << year << " is " << returnValue << endl;
}
int main()
{
    BankDeposit b1, b2, b3;
    int p;
    int y;
    float r;
    int R;


    cout << "\nEnter the values of p,y and r:" << endl;
    cin >> p >> y >> r;
    
    
    b1 = BankDeposit(p, y, r);
    b1.show();

    cout << "Enter the values of p,y and R:" << endl;
    cin >> p >> y >> R;
    
    b2 = BankDeposit(p, y, R);
    b2.show();

    b3.show();//This for difault constructor 
    return 0;
}