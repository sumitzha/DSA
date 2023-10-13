// find all the possible ways
#include <bits/stdc++.h>
using namespace std;

int climbStairsOptimized(int n)
{
    int base = 1;
    int firstStair = 1;
    for (int i = 1; i < n; i++)
    {
        int current = base + firstStair;
        base = firstStair;
        firstStair = current;
    }
    return firstStair;
}

int main()
{
    int n;
    cin >> n;
    cout << climbStairsOptimized(n);
    return 0;
}