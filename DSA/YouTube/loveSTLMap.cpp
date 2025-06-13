#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[1]="Gajanan";
    m[3]="Bapurao";
    m[2]="Narwade";

    m.insert({5,"narwade"});
    cout<<"Before erase:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    m.erase(5);
    cout<<"After erase:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }


}