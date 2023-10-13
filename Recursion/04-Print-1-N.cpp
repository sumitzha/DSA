#include <bits/stdc++.h>
using namespace std;

void print1ToN(int n)
{
    if (n == 0)
        return;
    print1ToN(--n);
    cout << n + 1 << endl;
}

int main()
{
    int n;
    cin >> n;
    print1ToN(n);
    return 0;
}
