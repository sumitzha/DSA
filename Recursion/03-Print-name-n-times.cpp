#include <bits/stdc++.h>
using namespace std;

void printName(int n, string str)
{
    if (n <= 0)
        return;
    cout << str << endl;
    printName(--n, str);
}

int main()
{

    string str;
    cout << "Enter name : ";
    getline(cin, str);

    int n;
    cout << "#times to print? : ";
    cin >> n;

    printName(n, str);
    return 0;
}