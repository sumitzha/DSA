#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str, int s, int e)
{
    if (s > e)
        return;
    swap(str[s++], str[e--]);
    reverseString(str, s, e);
}

// using one pointer
void reverse(string &str, int i)
{
    int n = str.length();
    if (i == n / 2)
        return;
    swap(str[i], str[n - i - 1]);
    reverse(str, i + 1);
}

int main()
{
    string str;
    cout << "String? : ";
    cin >> str;

    int n = str.length() - 1;

    cout << "Before : " << str << endl;
    reverseString(str, 0, n);
    cout << "After  : " << str << endl;

    return 0;
}