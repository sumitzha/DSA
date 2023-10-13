#include <bits/stdc++.h>
using namespace std;

void subseq(int index, int size, int arr[], vector<int> ds)
{
    // reached the last
    if (index >= size)
    {
        // FOR EMPTY ONE
        if (ds.size() == 0)
            cout << "{}";

        // print the temp vector
        for (auto itr : ds)
            cout << itr << " ";
        cout << endl;
        return;
    }
    // NOT Take condition
    subseq(index+1, size, arr, ds);

    // Take condition
    ds.push_back(arr[index]);
    subseq(index+1, size, arr, ds);
}

int main()
{
    int n;
    // cout << "#Elements : ";
    // cin >> n;

    int arr[] = {3, 1, 2};
    n = (sizeof(arr) / sizeof(int));

    vector<int> ds;
    subseq(0, n, arr, ds);
    return 0;
}