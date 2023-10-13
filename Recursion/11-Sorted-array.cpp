#include <bits/stdc++.h>
using namespace std;

bool checksorted(int arr[], int n)
{
    if (n == 0 or n == 1)
        return true;
    if ((arr[0] <= arr[1]) and checksorted(arr + 1, n - 1))
        return true;
    return false;
}
int main()
{

    int n;
    cout << "Array size? : ";
    cin >> n;

    int a[100];
    cout << "Enter a sorted array : \n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << checksorted(a, n) << endl;
    return 0;
}