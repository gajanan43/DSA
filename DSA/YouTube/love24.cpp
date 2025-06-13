#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
    return false;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

//This is print n-1 prime number count
int CountPrime(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if((isPrime(i)))
        count++;
    }
    return count;

    //This another solution of this question
    //  int count=0;
    //     vector<bool>prime(n+1,true);
    //     prime[0]=prime[1]=false;
    //     for(int i=0;i<n;i++)
    //     {
    //         if(prime[i])
    //         count++;

    //         for(int j=2*i;j<n;j+i)
    //         {
    //             prime[i]=0;
    //         }
    //     }
    //     return count;
}


int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;

    cout<<"Number of counts is:"<<CountPrime(n)<<endl;
    
    

    return 0;
}