#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    cout<<"Finding a 6 by using binary search:"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Lower bound->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3,b=5;

    cout<<"Max->"<<max(a,b)<<endl;
    cout<<"Min->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a->"<<a<<endl;
    cout<<"b->"<<b<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"Reverse string of abcd is:"<<s<<endl;

    cout<<"Before rotating element are:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotating element are:"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
}