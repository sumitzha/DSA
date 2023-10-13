// find all the possible ways
#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n, vector<int> dp)
{
    if (n <= 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = climbStairs(n - 1, dp) + climbStairs(n - 2, dp);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << climbStairs(n, dp);
    return 0;
}