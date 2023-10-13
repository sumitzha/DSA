#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    while (left <= mid)
        temp.push_back(arr[left++]);

    while (right <= high)
        temp.push_back(arr[right++]);

    // copy the elements into original array [low  ---- high]
    for (int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
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
    int n = arr.size();
    mergeSort(arr, 0, n - 1);

    print(arr);
    return 0;
}