#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubblesort(int arr[], int n)
{
    printarr(arr, n);
    
    // if already sorted
    if (n == 0 or n == 1)
        return;

    // for heaviest to get to last
    for (int current = 0; current < n; current++)
        if (arr[current] > arr[current + 1])    
            swap(arr[current], arr[current + 1]);

    // next iteration
    bubblesort(arr, n - 1);
}

void bubblesortIterative(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        bool swaps = false;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaps = true;
            }
            if (!swaps)
                return;
        }
    }
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

    bubblesort(a, n);

    cout << "\nAfter  : ";
    printarr(a, n);

    return 0;
}