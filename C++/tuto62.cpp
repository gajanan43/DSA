#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //this is a writing operation
    ofstream out;
    out.open("sample60a.txt");
    out<<"This is me";
    out.close();
    
    //this is a reading operation
    ifstream in;
    string st;
    in.open("sample60a.txt");
    //This is read only a frist string of a line 
    // in>>st;
    // cout<<st;
    while (in.eof()==0)
    {
        /* code */
        //This is also sufficient 
        // in>>st;
        // cout<<st;
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();
    return 0;
}