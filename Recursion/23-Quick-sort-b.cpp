#include <bits/stdc++.h>
using namespace std;

void printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int partition(int arr[], int s, int e)
{
    int p = arr[s];
    int cnt = 0;
    for (int i = s; i <= e; i++)
        if (arr[i] < p)
            cnt++;

    int pI = s + cnt;
    swap(arr[s], arr[pI]);

    int i = s, j = e;
    while (i < pI && j > pI)
    {
        while (arr[i] < p)
            i++;
        while (arr[j] > p)
            j--;
        if (i < pI && j > pI)
            swap(arr[i++], arr[j--]);
    }
    return pI;
}

void quickSort(int arr[], int s, int e)
{
    if (s > e)
        return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    // int n;
    // cout << "Array size? : ";
    // cin >> n;

    // int a[100];
    // cout << "array? : ";
    // for (int i = 0; i < n; i++)
    //     cin >> a[i];

    // cout << "\nBefore : ";
    // printarr(a, n);

    // quickSort(a, 0, n);

    // cout << "\nAfter  : ";

    int arr[] = {2, 5, 1, -1, 0, 3, 4, 6, -5};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
    printarr(arr, size);
    return 0;
}
