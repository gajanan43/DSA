#include<iostream>
using namespace std;

int glo=15;

void sum()
{
    int a;
    cout<<glo<<endl;
}

int main()
{
    bool c=true;
    int glo=45;
    glo=55;
    cout<<"\nthis is tutorial "<<endl;
    sum();
    cout<<glo<<endl<<c;
    return 0;
}