#include<iostream>
using namespace std;

bool valid(char ch)
{
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
    {
        return 1;
    }
    return 0;
}

char toLowercase(char ch)
{
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9'))
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(string a)
{
    int s=0;
    int e=a.length()-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
        {
            return 0;//false
        }
        else{
            s++;
            e--;
        }
    }
    return 1;//true
}

bool palindrome(string s)
{
    //Faltu character hatado
    string temp="";
    for(int j=0;j<s.length();j++)
    {
        if(valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    //lowercase me kardo
    for(int j=0;j<temp.length();j++)
    {
        temp[j]=toLowercase(temp[j]);
    }
    return checkPalindrome(temp);
}

int main()
{
    string s="A man,a plan,a canal:Panama";
    string s1="man";
    cout<<"Valid String is palindrome or not:"<<palindrome(s)<<endl;
    cout<<"Valid String is palindrome or not:"<<palindrome(s1)<<endl;
}