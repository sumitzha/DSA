#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll power(int x, int n)
{
    if (n == 0)
        return 1;
    ll halfpower = power(x, n / 2);
    ll total = halfpower * halfpower;
    if (n % 2 == 0)
        return total;
    return total * x;
}

int main()
{
    ll num;
    int exp;
    cout << "Number?   : ";
    cin >> num;
    cout << "Exponent? : ";
    cin >> exp;

    power(num, exp);
    return 0;
}