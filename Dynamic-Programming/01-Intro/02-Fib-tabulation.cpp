// from base case to the number
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;

    // simply 1 (O(n)), no rec stack space
    for (int i = 2; i < n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

int main()
{
    int n;
    cout << "Number? : ";
    cin >> n;

    cout << fib(n);
    return 0;
}