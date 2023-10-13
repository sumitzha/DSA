#include <bits/stdc++.h>
using namespace std;

int countJump(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return countJump(n - 1) + countJump(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << countJump(n) << endl;
    return 0;
}