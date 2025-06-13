#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="Harry Bhai";
    string st2;
    //***********This is using sample60a.txt file**************************
    //Opening file using constructor and writitng it
    // ofstream out("sample60a.txt");//writing operation
    // out<<st;

    //***********This is using sample60b.txt file**************************
    //Opening file using constructor and writitng it
    ifstream in("sample60b.txt");//reading operation
    //in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}