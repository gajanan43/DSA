#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with hout string 
    ofstream hout("sample60a.txt");

    //creating a name string and filing with the string entered by the user
    string name;
    cout<<"Enter your name:";
    cin>>name;

    //writing a string on the file
    hout<<name+" is a my name";
    hout.close();

    //connecting our file with hin string 
    ifstream hin("sample60a.txt");
    string content;
    hin>>content;
    cout<<"This content of this  file is:"<<content;
    hin.close();

    //read a string on the file
   

    return 0;
}