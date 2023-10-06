// stack sends data in LIFO order
// automatically it is type to support reversal

#include <iostream>
#include <stack>

using namespace std;

string reverseString(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
        st.push(str[i]);

    string ans = "";

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main()
{
    string str = "string-to-be-reversed";
    cout << reverseString(str);
}
