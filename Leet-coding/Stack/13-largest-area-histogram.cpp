#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElements(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        // ans is at stack ka top (number or -1)
        while ((s.top() != -1) && (arr[s.top()] >= arr[i]))
            s.pop();
        ans[i] = s.top();

        // push current element => to find next smaller
        s.push(i);
    }

    return ans;
}

// =====================================================================
vector<int> prevSmallerElements(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        while ((s.top() != -1) && (arr[s.top()] >= arr[i]))
            s.pop();
        // ans is at stack ka top (number or -1)
        ans[i] = s.top();

        // push current element => to find next smaller
        s.push(i);
    }

    return ans;
}

// =====================================================================
int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElements(heights, n);
    vector<int> prev(n);
    prev = prevSmallerElements(heights, n);

    int area = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if all elements are same => put it as n
        if (next[i] == -1)
            next[i] = n;

        int l = heights[i];
        int b = next[i] - prev[i] - 1;

        int newArea = l * b;
        area = max(newArea, area);
    }
    return area;
}


// O(n) TC, SC