#include <iostream>
using namespace std;

void printarr(int arr[], int s, int e);
int binarySearch(int arr[], int start, int end, int key);

int main()
{
    int n;
    cout << "Array size? : ";
    cin >> n;

    int a[100];
    cout << "Sorted array? : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int key;
    cout << "Key? : ";
    cin >> key;

    int index = binarySearch(a, 0, n, key);
    if (index != -1)
        cout << "index : " << index;
    else
        cout << "Element NOT Present";

    return 0;
}
int binarySearch(int arr[], int start, int end, int key)
{
    printarr(arr, start, end);
    if (start <= end)
    {
        int mid = (end - start) / 2 + start;
        if (arr[mid] == key)
            return mid;

        if (key < arr[mid])
            return binarySearch(arr, start, mid - 1, key);
        else
            return binarySearch(arr, mid + 1, end, key);
    }
    return -1;
}

void printarr(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
        cout << arr[i] << " ";
    cout << endl;
}
