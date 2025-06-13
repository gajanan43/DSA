#include<iostream>
using namespace std;

int factorial(int n){
    //Base condition 
    if(n==0)
        return 1;

    //Recursive relation 
    // int smallerProblem=factorial(n-1);
    // int bigProblem=n*smallerProblem;

    return n*factorial(n-1);
}

int power(int n){
    if(n==0)
        return 1;
    
    return 2*power(n-1);
}

void print(int n){
    if(n==0)
        return ;

    print(n-1);
    cout<<n<<endl;
   
}

int main(){

    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl; 

    int ans1=power(n);
    cout<<ans1<<endl; 

    print(n);

    return 0;
}