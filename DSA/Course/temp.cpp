#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n){
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main() 
{
    int n;
    cin>>n;
    //
    for(int i=2;i<=n;i++){
       bool check=isPrime(i);
      if(check){
        cout<<i<<" ";
      }
    }
    return 0;
}