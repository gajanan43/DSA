#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    //This is first question
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int ans= pow(2,i);
        if(ans==n)
        {
            cout<<"True";
        }
    }
}