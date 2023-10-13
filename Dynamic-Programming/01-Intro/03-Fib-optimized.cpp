// from base case to the number
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int current;
    int prev = 1;
    int prev2prev = 0;

    // simply 1 (O(n)), no rec stack space
    for (int i = 2; i < n; i++)
    {
        current = prev + prev2prev;
        prev2prev = prev;
        prev = current;
    }
    return current;
    // SC -> O(1)
}

int main()
{
    int n;
    cout << "Number? : ";
    cin >> n;

    cout << fib(n);
    return 0;
}