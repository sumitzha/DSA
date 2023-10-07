// k is given, if we find k consecutive elements => delete them

// store the number and its count in a vector<pair<char, int>>
// when the count i.e. second of pair is == k -> pop back stack k times

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string removeDuplicates(string str, int k)
{
    stack<pair<char, int>> s;
    for (auto ch : str)
    {
        // if stack is empty or top != current -> push
        if (s.empty() || s.top().first != ch)
            s.push({ch, 1}); // push for first time

        // if top matches the current
        else
            s.top().second++;

        if (s.top().second == k)
            s.pop();
    }

    string res = "";
    while (!s.empty())
    {
        res.append(s.top().second, s.top().first);
        s.pop();
    }

    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    string str = "deeedbbcccdbaa";
    removeDuplicates(str, 3);

    str = "pbbcggttciiippooaais";
    removeDuplicates(str, 2);
}