#include<iostream>
using namespace std;

int main()
{

    //cout<<"this tutorial is 9";
    int age;
    cout<<"\ntell me your age:";
    cin>>age;

    //*************selection control structure if-esle if-else ladder***********************
    // if((age<18) && (age>0))
    // {
    //     cout<<"\nyou can not come to my party";
    // }

    // else if(age==18)
    // {
    //     cout<<"\nyou are a kid and you will get a kid pass party";
    // }

    // else if(age<1)
    // {
    //     cout<<"you are not bourn";
    // }
    
    // else
    // cout<<"\nyou can come to the party";
    

    //***************selection control sturcture in switch case**************

    switch (age)
    {
    case 18:

        cout<<"you are 18";
        break;
    case 22:

        cout<<"you are 22";
        break;
    case 2:

        cout<<"you are 2";
        break;
    
    default:
    cout<<"no special  case";
        break;
    }
    return 0;
}