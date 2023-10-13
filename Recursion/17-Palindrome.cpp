#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &str)
{
    // if we get to halfway everything is fine
    if (i >= str.size())
        return true;

    // if start and end pointers value donot match
    if (str[i] != str[str.size() - i - 1])
        return false;

    // check for next index
    return palindrome(i++, str);
}

int main()
{
    string str;
    cout << "String? : ";
    getline(cin, str);

    int ans = palindrome(0, str);

    if (ans)
        cout << "Palindrome";
    else
        cout << "NOT Palindrome";

    return 0;
}