#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll exponent(ll n, ll p)
{
    if (p == 0)
        return 1;
    return n * exponent(n, --p);
}

int main()
{
    ll n;
    cin >> n;
    ll p;
    cin >> p;

    ll power = exponent(n, p);
    cout << power;
    return 0;
}