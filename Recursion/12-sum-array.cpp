#include <bits/stdc++.h>
using namespace std;

int sumarr(int arr[], int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];

    int sum = arr[0] + sumarr(arr + 1, n - 1);  
    return sum;
}

int main()
{
    int n;
    cout << "Array size? : ";
    cin >> n;

    int a[100];
    cout << "array? : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << sumarr(a, n);
    return 0;
}