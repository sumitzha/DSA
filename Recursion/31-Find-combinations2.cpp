#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void findComb(vector<int> arr, int index, int target, vector<int> output, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(output);
            return;
        }

        for (int i = index; i < arr.size(); i++)
        {
            // avoid duplicates 
            if (i > index && arr[i] == arr[i - 1])
                continue;
            // if element > target ==> no use 
            if (arr[i] > target)
                break;

            output.push_back(arr[i]);
            findComb(arr, i + 1, target - arr[i], output, ans);
            output.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<int> output;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());

        findComb(candidates, 0, target, output, ans);
        return ans;
    }
};