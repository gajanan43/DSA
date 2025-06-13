#include<iostream>
using namespace std;

// //Reverse
// void reverse(string s,int i,int j){
//     cout<<"string call "<<s<<endl;
//     //Base condition 
//     if(i>j)
//         return ;

//     swap(s[i],s[j]);
//     i++;j--;

//     reverse(s,i,j);
// }

// //Palindrome 
// bool checkPalindrome(string str,int i,int j){
//     //Base case
//     if(i>j){
//         return true;
//     }
//     if(str[i]!=str[j]){
//         return false;
//     }
//     else{
//       return  checkPalindrome(str,i+1,j-1);
//     }
// }

// //Power of a^b
// int power(int a,int b){
//     //Base case 
//     if(b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }

//     //Recursive call
//     int ans=power(a,b/2);
    
//     if(b%2==0){
//         return ans*ans;
//     }
//     else{
//         return a*ans*ans;
//     }
// }

//bubble sort
void isSort(int *arr,int n){
    //Base case 
    if(n==0||n==1)
        return ;

    //Solve 1st case
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    isSort(arr,n-1);
}

int main(){
    //Reverse
    // string s="abcde";
    // int i=0;
    // int j=s.length()-1;
    // reverse(s,i,j);

    //Palindrome 
    // string name="aabba";
    // bool isPalindrome = checkPalindrome(name,0,name.length()-1);

    // if(isPalindrome){
    //     cout<<"Given string is Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Given string is not Palindrome"<<endl;
    // }

    // //Power of a^b;
    // int a,b;
    // cin>>a>>b;

    // int ans=power(a,b);
    // cout<<"Answer is "<<ans<<endl;

    //Bubble sort 
    int arr[5]={5,1,6,8,0};
    int n=5;

    isSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}