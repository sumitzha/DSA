#include <bits/stdc++.h>
using namespace std;

int subseqSum(int index, int size, int arr[], int s, int sum)
{
    if (index == size)
    {
        if (s == sum)
            return 1;
        else
            return 0;
    }

    // TAKE
    s += arr[index];
    int l = subseqSum(index + 1, size, arr, s, sum);

    // NOT TAKE
    s -= arr[index];
    int r = subseqSum(index + 1, size, arr, s, sum);

    return l + r;
}

int main()
{
    int n;
    // cout << "#Elements : ";
    // cin >> n;

    int arr[] = {1, 2, 1};
    n = (sizeof(arr) / sizeof(int));
    int sum = 2;

    cout << subseqSum(0, n, arr, 0, sum);
    return 0;
}