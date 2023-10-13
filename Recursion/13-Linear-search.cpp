#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    if (n == 0)
        return -1;

    if (arr[0] == key)
        return 0;

    int index;
    index = linearSearch(arr + 1, n - 1, key);
    if (index != -1)
        return index + 1;
    return -1;
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

    int key;
    cout << "Key? : ";
    cin >> key;

    cout << linearSearch(a, n, key);
    return 0;
}