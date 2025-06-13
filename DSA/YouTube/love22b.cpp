#include<iostream>
using namespace std;

char toLowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(toLowercase(a[s])!=toLowercase(a[e]))
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

void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    //name[2]='\0';

    cout<<"Your name is ";
    cout<<name<<endl;
    int len=getlength(name);
    cout<<"Length:"<<len<<endl;

    reverse(name,len);
    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"Palindrome or Not: "<<checkPalindrome(name,len)<<endl;

}