#include <bits/stdc++.h>
using namespace std;

void print1ToN(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    print1ToN(--n);
}

int main()
{
    int n;
    cin >> n;
    print1ToN(n);
    return 0;
}