#include <iostream>
#include <stack>
using namespace std;

void pushAtEnd(stack<int> &s, int input)
{
    // if empty = push
    if (s.empty())
    {
        s.push(input);
        return;
    }
    // store the top temporarily 
    int top = s.top();
    s.pop();

    // look remaining element
    pushAtEnd(s, input);
    // at return again place the left elements 
    s.push(top);
}

void reverseStack(stack<int> &s)
{
    // if stack empty - return
    if (s.empty())
        return;

    // take top for a moment
    int top = s.top();
    s.pop();

    // revese left part
    reverseStack(s);
    pushAtEnd(s, top);
    // time comp - O(n2)
}

void print(stack<int> s);
int main()
{
    stack<int> s;

    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    print(s);
    reverseStack(s);
    print(s);
}

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "------" << endl;
}