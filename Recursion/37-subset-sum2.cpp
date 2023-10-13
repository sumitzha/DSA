#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void findSeq(vector<int> arr, int index, vector<int> output, vector<vector<int>> &ans)
    {
        if (index >= arr.size())
        {
            // reached the end
            if (find(ans.begin(), ans.end(), output) == ans.end())
                ans.push_back(output);
            return;
        }
        // not pick
        findSeq(arr, index + 1, output, ans);

        // pick
        output.push_back(arr[index]);
        findSeq(arr, index + 1, output, ans);
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {   
        vector<int> output;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        findSeq(nums, 0, output, ans);
        return ans;
    }
};