#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"First index of deque:"<<d.at(1)<<endl;
    cout<<"Front element of deque is:"<<d.front()<<endl;
    cout<<"Last element of deque is:"<<d.back()<<endl;
    cout<<"Deque empty or not:"<<d.empty()<<endl;

    cout<<"Before erase of deque is:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase of deque size is:"<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    d.pop_back();

    for(int i:d)
    {
        cout<<i<<" ";
    }
}