#include <bits/stdc++.h>
using namespace std;

void findCombinations(int index, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &hold)
{
    if (index == arr.size())
    {
        if (target == 0)
            ans.push_back(hold);
        return;
    }

    // PICK up => same index again 
    if (arr[index] <= target)
    {
        hold.push_back(arr[index]);
        findCombinations(index, arr, target - arr[index], ans, hold);
        hold.pop_back();
    }

    // NOT pick -> go to next index
    findCombinations(index + 1, arr, target, ans, hold);
}

vector<vector<int>> combinationSum(vector<int> given, int target)
{
    vector<vector<int>> ans;
    vector<int> hold;
    findCombinations(0, given, target, ans, hold);
    return ans; 
}

void print(vector<vector<int>> arr)
{
    for (vector<int> OneD : arr)
    {
        for (int x : OneD)
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    vector<int> arr = {2, 3, 4, 6, 7};
    int target = 7;

    vector<vector<int>> ans = combinationSum(arr, target);

    print(ans);
    return 0;
}