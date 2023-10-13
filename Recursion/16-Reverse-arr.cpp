#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int left, int right)
{
    if (left >= right) return;
    swap(arr[left], arr[right]);
    reverseArr(arr, ++left, --right);
}

void reverseArrSinglePtr(int arr[], int i, int n)
{
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    reverseArr(arr, ++i, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArr(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}