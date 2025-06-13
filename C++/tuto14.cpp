#include<iostream>
using namespace std;

// struct employee
// {
//     /* data */
//     int eid;
//     char favchar;
//     float salary;
// };

typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
}ep;

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};



int main(){

    //***********structure**************
    //ep harry;
    //struct employee harry;
    //we can create multiple employee 
    // struct employee gajanan;
    // struct employee omkar;
    // harry.eid=1;
    // harry.favchar='c';
    // harry.salary=1200000;
    // cout<<"\nthe value is:"<<harry.eid;
    // cout<<"\nthe value is:"<<harry.favchar;
    // cout<<"\nthe value is:"<<harry.salary;


    //**********union**********
    // union money m1;
    // m1.rice=34;
    // cout<<m1.rice;



    //******************Enum***************
    enum meal{breakfast,lanch,dinner};
    meal m1=breakfast;
    cout<<m1<<endl;
    // cout<<breakfast;
    // cout<<lanch;
    // cout<<dinner;

    return 0;
}