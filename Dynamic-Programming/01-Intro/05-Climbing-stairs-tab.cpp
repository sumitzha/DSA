// find all the possible ways
#include <bits/stdc++.h>
using namespace std;

int climbStairsTabulation(int n)
{
    vector<int> dp(n + 1, -1);
    dp[1] = dp[0] = 1;
    for (int i = 2; i < n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << climbStairsTabulation(n);
    return 0;
}