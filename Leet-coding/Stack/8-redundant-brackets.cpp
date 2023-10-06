#include <iostream>
#include <stack>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            st.push(ch);

        // not opening brackets closing/lower_letters
        else
        {
            if (ch == ')')
            {
                bool redundant = true;

                // unless we find closing dont stop
                while (st.top() != '(')
                {
                    char top = st.top();

                    // if operators => remove them
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                        redundant = false;

                    st.pop();
                }

                if (redundant)
                    return true;
                st.pop(); // since last was closing bracket
            }
        }
    }
    return false;
}
int main()
{

    return 0;
}