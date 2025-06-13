#include<iostream>
using namespace std;

/*This is finding a squre root value of number*/
int binarySearch(int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e)
    {
        int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square>n)
        {
            e=mid-1;
        }
        if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int sqrt(int x)
{
    return binarySearch(x);
}

int main()
{
    int n;
    cin>>n;
    cout<<"Squre root of n number is:"<<sqrt(n)<<endl;
}