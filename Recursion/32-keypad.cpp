#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void solve(string digits, int index, string output, vector<string> &ans)
    {
        if (index >= digits.length())
        {
            ans.push_back(output);
            return;
        }   

        int number = digits[index] - '0';
        string current = mapping[number];

        for (int i = 0; i < current.length(); i++)
        {
            output.push_back(current[i]);
            solve(digits, index + 1, output, ans);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;

        int index = 0;
        string output = "";
        solve(digits, index, output, ans);
        return ans;
    }
};