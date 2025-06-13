#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> s;
    s.push("Gajanan");
    s.push("Bapurao");
    s.push("Narwade");

    cout<<"First elemenet of queue:"<<s.front()<<endl;
    s.pop();
    cout<<"Fornt element of queue:"<<s.front()<<endl;
    cout<<"Size of queue is:" <<s.size()<<endl;
}