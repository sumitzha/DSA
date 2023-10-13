#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
    {
        // if more then #elements => return (do nothing)
        if (index >= nums.size())
        {
            ans.push_back(output);
            return;
        }

        // exclude the index => go for next index
        solve(nums, output, index + 1, ans);

        // include the index output -> store element then call
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);

        // output.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        solve(nums, output, index, ans);
        return ans;
    }
};