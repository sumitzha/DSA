// find next smallest from the window of next right elements set

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

// iterate from right to left
// first push -1 to the stack ( so we get smaller from right )
vector<int> nextSmallerElement(vector<int> &arr)
{
    // push -1 to
    stack<int> s;
    s.push(-1);

    int n = arr.size();
    vector<int> ans(n, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        // unless find smaller element pop the stack
        while (s.top() >= arr[i])
            s.pop();

        // since top contains element less than arr[i]
        ans[i] = s.top();

        // add current to the stack
        s.push(arr[i]);
    }
    return ans;
}
