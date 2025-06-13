#include<iostream>
using namespace std;

int modularExpoentiation(int x,int n,int m)
{
    int res=1;

    while(n>0)
    {
        if(n&1)
        {
            //odd
            res=(1LL*(res)*(x)%m)%m;
        }
        x=(1LL* (x)%m * (x)%m)%m;
        n=n>>1;
    }
    return res;
}

int main()
{
    int a,b,c;
    cout<<"Enter the values of a,b & c "<<endl;
    cin>>a>>b>>c;

    cout<<"Answer is"<<endl;
    modularExpoentiation(a,b,c);
}