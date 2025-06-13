#include<iostream>
using namespace std;

int main()
{

    //This are the operators
    // int a=4;
    // int b=6;

    // cout<<"a&b "<<(a&b)<<endl;
    // cout<<"a|b "<<(a|b)<<endl;
    // cout<<"~a "<<(~a)<<endl;
    // cout<<"a^b "<<(a^b)<<endl;
    // cout<<"(19>>1) "<<(19>>1)<<endl;
    // cout<<"(19>>2) "<<(19>>2)<<endl;
    // cout<<"(19<<1) "<<(19<<1)<<endl;
    // cout<<"(19<<2) "<<(19<<2)<<endl;

    // int i=7;
    // cout<<(++i)<<endl;
    // cout<<(i++)<<endl;
    // cout<<(i--)<<endl;
    // cout<<(--i)<<endl;


    //For loop
    // int n;
    // cout<<"Enter the value of n is:"<<endl;
    // cin>>n;
    // int sum=0;
    // cout<<"Print value from  1 to n"<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     sum+=i;

    // }
    // cout<<sum<<endl;


    //This is fibonacci series:
    // int n;
    // cout<<"Enter the value of n is:"<<endl;
    // cin>>n;
    // int a=0,b=1,sum;
    // cout<<a<<endl;
    // cout<<b<<endl ;
    // for(int i=1;i<=n;i++)
    // {
    //     sum=a+b;
    //     cout<<sum<<endl;
    //     a=b;
    //     b=sum;
    // }


    //Check the number is prime or not 
    // int n;
    // cout<<"Enter the value of n is:";
    // cin>>n;
    // bool isprime=1;
    // for(int i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         //cout<<"Number is Not prime"<<endl;
    //         isprime=0;
    //         break;
    //     }
        
    // }

    // if(isprime==0)
    // {
    //     cout<<"Number is Not prime"<<endl;
    // }

    // else
    // {
    //     cout<<"Number is prime"<<endl;
    // }


    //Continue keyword
    // int n=5;
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"Hi"<<endl;
    //     cout<<"Hey"<<endl;
    //     continue;
    //     cout<<"reply to kar"<<endl;

    // }

    //Scope 
    // int a;
    // cout<<a<<endl;


    //n=234 find the product of 2,3,4 and sum and differcnce of product and sum
    int n=234;
    int product=1,sum=0;
    while(n!=0)
    {
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    int ans=product-sum;
    cout<<ans;

}