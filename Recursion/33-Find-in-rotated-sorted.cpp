#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> arr)
{
    // find that one element after which the elements are sortedly increasing
    int s = 0, e = arr.size() - 1;
    while (s < e)
    {
        int mid = (e - s) / 2 + s;
        if (arr[0] <= arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return s;
}

int binarySearch(vector<int> arr, int start, int end, int key)
{
    while (start <= end)
    {
        int mid = (end - start) / 2 + start;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = findPivot(arr);
    if (k >= arr[pivot] && k <= arr[n - 1])
        return binarySearch(arr, pivot, n - 1, k);
    else
        return binarySearch(arr, 0, pivot - 1, k);
}
