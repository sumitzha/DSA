#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(ll n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    ll n;
    cin >> n;
    ll factorial = fact(n);
    cout << factorial << endl;
    return 0;
}