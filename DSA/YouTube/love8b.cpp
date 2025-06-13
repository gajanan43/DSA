#include<iostream>
using namespace std;
// int power(int a,int b)
// {
//     int ans=1;
//     for(int i=1;i<=b;i++)
//     {
//         ans=ans*a;
//     }
//     return ans;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     int answer=power(a,b);
//     cout<<"Answer is:"<<answer;
// }


//This is 2 question of this video,question is nCr?????
    // int factorial(int n)
    // {
    //     int fact=1;

    //     for(int i=1;i<=n;i++)
    //     {
    //         fact=fact*i;
    //     }
    //     return fact;
    // }

    // int nCr(int n,int r)
    // {

    //     int num=factorial(n);
    //     int denom=factorial(r)*factorial(n-r);

    //     return num/denom;
    // }

    // int main()
    // {
    //     int n,r;
    //     cin>>n>>r;

    //     cout<<"Answer of this is:"<<nCr(n,r);

    // }

//This is 3 question of this video, number is prime or not

    // bool isPrime(int n)
    // {
    //     for(int i=2;i<n;i++)
    //     {
    //         //This is not a prime number
    //         if(n%i==0)
    //         {
    //             return 0;
    //         }
    //     }
    //     return 1;

    // }
    // int main()
    // {
    //     int n;
    //     cin>>n;

    //     if(isPrime(n))
    //     {
    //         cout<<"Number is prime";
    //     }

    //     else
    //     {
    //         cout<<"Number is not prime";
    //     }
    // }


//This about a pass by value in a function

void dummy(int n)
{
    n++;
    cout<<"The value of n is:"<<n<<endl;
}
int main()
{
    int n;
    cin>>n;

    dummy(n);

    cout<<"The value of n is:"<<n<<endl;
}