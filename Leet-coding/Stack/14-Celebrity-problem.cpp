// celebrity is a person that knows no one
// but everyone knows the guy then he is celebrity
// check if celebrity is there in the party

// celebrity row should be zero
// celebrity coloumn should be one except diagonal
// check n rows and n col

// put all elements inside stack
// take out two on top and check
// whoever doesnot know other is a potential celebrity -> push again to stack
// pop back the guy that knows potential celebrity
// at end only guy that doesnot know other is in stack

#include <bits/stdc++.h>
using namespace std;

bool knows(int a, int b, vector<vector<int>> &M, int n)
{
    if (M[a][b] == 1)
        return true;
    return false;
}

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    // push all the elements in stack
    for (int i = 0; i < n; i++)
        s.push(i);

    // while stack != 1 size pop and check if one knows another
    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        knows(a, b, M, n) ? s.push(b) : s.push(a);
    }
    int candidate = s.top();

    // single element is there in stack (potential celebrity)
    // verification

    // check for rows
    int zeros = 0;
    for (int i = 0; i < n; i++)
        if (M[candidate][i] == 0)
            zeros++;

    if (zeros != n)
        return -1;

    // check for col
    int ones = 0;
    for (int i = 0; i < n; i++)
        if (M[i][candidate] == 1)
            ones++;
    if (ones != n - 1)
        return -1;

    return candidate;
}
