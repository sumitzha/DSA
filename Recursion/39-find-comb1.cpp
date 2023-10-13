#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void findSeq(vector<int> arr, int index, int target, vector<int> output, vector<vector<int>> &ans)
    {
        if (index >= arr.size())
        {
            if (target == 0)
                ans.push_back(output);
            return;
        }

        findSeq(arr, index + 1, target, output, ans);

        if (arr[index] <= target)
        {
            output.push_back(arr[index]);
            findSeq(arr, index, target - arr[index], output, ans);
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> output;
        vector<vector<int>> ans;

        findSeq(candidates, 0, target, output, ans);
        return ans;
    }
};