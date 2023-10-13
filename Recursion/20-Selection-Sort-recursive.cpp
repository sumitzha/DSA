#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionsort(int arr[], int n)
{
    printarr(arr, n);

    if (n == 0 or n == 1)
        return;

    int min = arr[0];
    int minInd = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < min)
        {
            minInd = i;
            min = arr[i];
        }

    swap(arr[0], arr[minInd]);
    selectionsort(arr + 1, n - 1);
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

    cout << "\nBefore : ";
    printarr(a, n);

    selectionsort(a, n);

    cout << "\nAfter  : ";
    printarr(a, n);

    return 0;
}