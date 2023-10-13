#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i < high) i++;
        while (arr[j] >= pivot && j > low) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pInd = partition(arr, low, high);
        quickSort(arr, low, pInd - 1);
        quickSort(arr, pInd + 1, high);
    }
}

void print(vector<int> arr)
{
    for (auto itr : arr)
        cout << itr << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {3, 5, 9, 7, 0, 2, 0, 4, 5, 1, 5, 3, 6, -1, 2};

    print(arr);
    quickSort(arr, 0, arr.size() - 1);
    print(arr);
    return 0;
}