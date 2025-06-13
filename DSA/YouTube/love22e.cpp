#include<iostream>
#include<string>
using namespace std;

string replacestring(string str)
{
    string temp="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;

}

int main()
{
    string str= "This is a sample string with spaces";
    cout<<"Replace  space with @40:"<<endl;
    cout<<replacestring(str)<<endl;
}

//This is another way to slove question

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     // Input string
//     string STR = "This is a sample string with spaces";
//     string result = "";

//     for (size_t i = 0; i < STR.length(); i++) {
//         if (STR[i] == ' ') {
//             result += "@40"; // Replace space with "@40"
//         } else {
//             result += STR[i]; // Keep other characters as they are
//         }
//     }

//     // Print the modified string
//     cout << result << std::endl;

//     return 0;
// }
