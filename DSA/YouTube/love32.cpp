#include<iostream>
using namespace std;

// void reachHome(int src,int dest){
//     cout<<src<<" source to destionation "<<dest<<endl;
//     //Base condition 
//     if(src==dest){
//         cout<<"pohach gaya"<<endl;
//         return ;
//     }

//     //Processing 
//     src++;

//     //Recursive relation 
//     reachHome(src,dest);
// }

void sayDigit(int n,string arr[]){
    //Base condition 
    if(n==0){
        return ;
    }

    //Processing 
    int digit=n%10;
    n=n/10;

    //Recursive condition
    sayDigit(n,arr);

    //Processing
    cout<<arr[digit]<<endl;
}

int main(){
    // int dest=10,src=1;
    
    // reachHome(src,dest);


    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    int n;
    cin>>n;

    
    sayDigit(n,arr);

    return 0;
}