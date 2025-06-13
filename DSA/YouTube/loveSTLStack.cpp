#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Gajanan");
    s.push("Bapurao");
    s.push("Narwade");

   cout<<"Top element of stack is:"<<s.top()<<endl;
   s.pop();
   cout<<"Top element of stack is:"<<s.top()<<endl;
   cout<<"Size of stack is:"<<s.size()<<endl;
   cout<<"Empty or not->"<<s.empty()<<endl;

}