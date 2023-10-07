// if the current and previous is same -> remove them
// so for a check we add the characters into stack
// check if current and top is same otherwise add to answer

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string removeDuplicates(string str)
{
    stack<char> s;
    for (auto ch : str)
    {
        if (s.empty() || s.top() != ch)
            s.push(ch);
        else
            s.pop();
    }

    string ans = "";
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string str = "abbaac";
    cout << removeDuplicates(str);

    str = "aabccba";
    return 0;
}