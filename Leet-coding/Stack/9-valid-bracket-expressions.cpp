// every close brace should have an opening brace to close for
// {[{}{}{}{}]} {}{{}}{}{{}}

// how many brackets to reverse to get valud expression

#include <bits/stdc++.h>
using namespace std;

int findMinimumCost(string str)
{
    if (str.length() & 1)
        return -1;

    int open = 0, close = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
            open++;
        else
        {
            // removing from stack
            if (open >= 1)
                open--;
            else
                close++;
        }
    }
    return ((open + 1) / 2 + (close + 1) / 2);
}
// same thing using stack data-structure
int findMinimumCost(string str)
{
    int len = str.length();
    if (len % 2 != 0)
        return -1;

    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        // if opening -> add to stack 
        if (str[i] == '{')
            st.push(str[i]);

        else
        {
            // remove the valid expression part
            if (!st.empty() && st.top() == '{')
                st.pop();

            // we add closing brackets
            else
                st.push(str[i]);
            // after adding closing brackets-> invalid
        }
    }

    int opening = 0, closing = 0;
    while (!st.empty())
    {
        // count opening and closings
        if (st.top() == '{')
        {
            opening++;
            st.pop();
        }
        else
        {
            closing++;
            st.pop();
        }
    }
    int res = (opening + 1) / 2 + (closing + 1) / 2;
    return res;
}
int main()
{
    string s = "{{";
    cout << findMinimumCost(s);
}

// invalid strings =
// odd length -> return -1
// all opening braces {{{{{
// all closing braces }}}}}
// first closed then open }}}{{{

// so we remove the valid braces set and check in invalid part

// Algo
// check for size if odd -> return -1
// remove the valid part of expression and look for the invalid section
// one type all opening {{{{ all closing }}}} -> ans = size/2
// ans = ((opening + 1)/2) + ((closing+1)/2)
