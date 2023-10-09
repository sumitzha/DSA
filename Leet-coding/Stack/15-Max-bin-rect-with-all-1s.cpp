// max area of rectangle found by all ones
// compute max area of first row

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int largestRectangleArea(int *heights, int n)
{
    // int n = heights.size();

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

// =====================================================================
vector<int> nextSmallerElements(int *arr, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
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
vector<int> prevSmallerElements(int *arr, int n)
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

int maxArea(int M[MAX][MAX], int n, int m)
{
    // find ans for first row
    // m is #cols for matrix
    // individual arr of m size
    int area = largestRectangleArea(M[0], m);

    // go onto further rows
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // row update : by adding the prev value
            if (M[i][j] != 0)
                M[i][j] = M[i][j] + M[i - 1][j];
            else
                M[i][j] = 0; // no base - remove tower
        }

        area = max(area, largestRectangleArea(M[i], m));
    }
    return area;
}

// rectangle area related problems
// TC : O(mxn) -> everytime
// SC : O(m) -> space everytime (stack)