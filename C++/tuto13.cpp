#include<iostream>
using namespace std;

int main(){
    //array exmple 
    int marks[]={23,45,56,89};
    // int mathmarks[4];
    // mathmarks[0]=231;
    // mathmarks[1]=451;
    // mathmarks[2]=561;
    // mathmarks[3]=891;

    // cout<<"this are the math marks"<<endl;
    
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // cout<<"\nthis are average marks:";
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // for (int  i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout<<"\nthis value of marks:"<<marks[i];
    // }


    // for some task*******************
    // int i=0;
    // while (i<4)
    // {
    //     /* code */
    //     cout<<"\nthis value of marks:"<<marks[i];
    //     i++;
    // }

    int i=0;
    do
    {
        /* code */
        cout<<"\nthis value of marks:"<<marks[i];
        i++;
    } while (i<4);
    
    
    return 0;
}