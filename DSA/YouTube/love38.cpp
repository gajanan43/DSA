#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, int index, string output, vector<string> &ans, string mapping[])
{
    // Base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        
        solve(digits, index + 1, output, ans, mapping);
        cout<<value[i]<<endl;
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;

    if (digits.length() == 0)
        return ans;

    int index = 0;
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, index, output, ans, mapping);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    string digits = "23";
    letterCombinations(digits);
}