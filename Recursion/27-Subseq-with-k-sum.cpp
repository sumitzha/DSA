#include <bits/stdc++.h>
using namespace std;

void subseqSum(int index, int size, int arr[], vector<int> &ds, int s, int sum)
{
    if (index == size)
    {
        if (s == sum)
        {
            for (auto itr : ds)
                cout << itr << " ";
            cout << endl;
        }
        return;
    }

    // PICK
    s += arr[index];
    ds.push_back(arr[index]);
    subseqSum(index + 1, size, arr, ds, s, sum);

    // NOT PICK
    ds.pop_back();
    s -= arr[index];
    subseqSum(index + 1, size, arr, ds, s, sum);
}

int main()
{
    int n;
    // cout << "#Elements : ";
    // cin >> n;

    int arr[] = {1, 2, 1};
    n = (sizeof(arr) / sizeof(int));
    int sum = 2;

    vector<int> ds;
    subseqSum(0, n, arr, ds, 0, sum);
    return 0;
}