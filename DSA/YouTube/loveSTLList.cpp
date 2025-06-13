#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(5,100);//This is repersent a all list data contain a 500
    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_back(2);

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase a list contain:";

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list is:"<<l.size()<<endl;
    
}