#include<iostream>
using namespace std;


/*This is finding a squre root value  of in a  double number*/
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

double moreprecision(int n,int percision,int temp)
{
    double factor=1;
    double ans=temp;
    for (int  i = 0; i < percision; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j<n; j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;
    
}

int main()
{
    int n;
    cout<<"Enter squre root value:"<<endl;
    cin>>n;
    cout<<"Squre root of n number is:"<<sqrt(n)<<endl;
    int temp=sqrt(n);
    cout<<"Square root of n number in float is:"<<moreprecision(n,3,temp);
}