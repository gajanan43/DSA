#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    cout<<"Set is:"<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }

    s.erase(s.begin());
    cout<<"After erase a set:"<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }

}