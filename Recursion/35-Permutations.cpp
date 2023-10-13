#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(vector<int> nums, vector<vector<int>> &ans, int index)
    {
        if (index >= nums.size())
        {
            ans.push_back(nums); // store the ans
            return;
        }

        // shift the index and swap => next permutation
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);

            // next i value pe iterate
            solve(nums, ans, index + 1);

            // backtrack => go back to previous result => to increase i
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};