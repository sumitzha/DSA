#include <bits/stdc++.h>
using namespace std;

int sqrtRt(int x)
{
    int s = 0, e = x;
    int ans = -1;
    while (s <= e)
    {
        int mid = (e - s) / 2 + s;
        long long int sq = mid * mid;
        if (sq == x)
            return mid;
        else if (sq < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}

double morePrecision(int n, int current, int precision)
{
    double factor = 1;
    double ans = current;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // factor becomes => .1 => .01 => .001 => .0001
        for (double j = ans; j * j < n; j += factor)
            ans = j;
    }
    return ans;
}

int main()
{
    int n, p;
    cout << "Num? : ";
    cin >> n;

    cout << "precision? : ";
    cin >> p;

    int temp = sqrtRt(n);
    cout << morePrecision(n, temp, p) << endl;
    return 0;
}