#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //This is conversion of decimal to binary number
    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0)
    // {
    //     int bit=n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;

    // }
    // cout<<"Answer of n value is:"<<ans<<endl;


    //This is conversion of binary to decimal number
    // int n;
    // cin>>n;
    // int i=0,ans=0;
    // while(n!=0)
    // {
    //     int digit=n%10;
    //     if(digit==1)
    //     {
    //         ans=ans+(pow(2,i));
    //     }
    //     n=n/10;
    //     i++;
    // }
    // cout<<ans<<endl;

    //Reverse the given number
    int n;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        if((ans<INT_MIN/10)||(ans>INT_MAX/10))
        {
            cout<<"0";
        }
        ans=(ans*10)+digit;
        n=n/10;

    }
    cout<<ans<<endl;

}