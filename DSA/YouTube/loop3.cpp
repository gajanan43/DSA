#include<iostream>
using namespace std;

int main()
{

    //Example of while loop
   /* int n;
    cout<<"Enter the value of n is:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<i<<endl;
        i=i+1;
    }*/


    //sum of 1 to n number
    /*int n;
    cout<<"Enter the value of n is:"<<endl;
    cin>>n;
    int i=1,sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }

    cout<<"Sum is:"<<sum<<endl;
    */

   //This sum of even number
//    int n;
//    cout<<"Enter the value of n is:"<<endl;
//    cin>>n;
//    int i=0,sum=0;
//    while(i<=n)
//    {
//     sum=sum+i;
//     i=i+2;
//    }
//    cout<<"Value of sum is:"<<sum<<endl;

    //Number is prime or not
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Not prime"<<i<<endl;
            
        }
        else{
            cout<<"Prime for"<<i<<endl;
        }
        i=i+1;
       
        
        
    }
   
        
    
}