// check if the given sequences of paranthesis are correct
#include <iostream>
#include <stack>
using namespace std;

bool checkValidParanthesis(string expression)
{
    stack<char> s;
    for (auto ch : expression)
    {
        // if opening bracket => insert
        if (ch == '(' || ch == '{' || ch == '[')
            s.push(ch);

        // check if } ) ] ... otherwise false
        else
        {
            // closing bracket
            if (!s.empty())
            {
                char top = s.top();
                if ((top == '(' && ch == ')') ||
                    (top == '{' && ch == '}') ||
                    (top == '[' && ch == ']'))
                    s.pop();
                // not ) } ] ...
                else
                    return false;
            }
            // if already empty
            else
                return false;
        }
    }
    return s.empty();
}

int main()
{
    string s1 = "{([{}])}";
    string s2 = "{({[{}])}";

    cout << checkValidParanthesis(s1) << endl;
    cout << checkValidParanthesis(s2) << endl;
    return 0;
}