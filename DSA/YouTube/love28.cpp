#include<iostream>
using namespace std;

//Pass by reference
void update2(int &n){
    n++;
}
 //Pass by value 
void update(int n){
    n++;
}

//Sum of array element 
int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    /*int i=5;
    int &j=i;//create a reference variable  

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    //Pass by value 
    int n=5;
    //Pass by value 
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;
    //Pass by by reference 
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;*/

    //Pass by reference in a array
    int n;
    cin>>n;

    //Variable size array 
    int *arr=new int[n];

    //Taking input for array 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=getSum(arr,n);
    cout<<"Sum of array is "<<sum<<endl;

    return 0;
}