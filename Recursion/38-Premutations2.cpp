#include <bits/stdc++.h>
using namespace std;

void makePermutations(string s, int index, vector<string> &ans)
{
    if (index >= s.size())
    {
        ans.push_back(s);
        return;
    }

    for (int i = index; i < s.size(); i++)
    {
        swap(s[i], s[index]);
        makePermutations(s, index + 1, ans);
        swap(s[i], s[index]);
    }
}

vector<string> findPermutations(string &s)
{
    string output;
    vector<string> ans;

    makePermutations(s, 0, ans);
    return ans;
}