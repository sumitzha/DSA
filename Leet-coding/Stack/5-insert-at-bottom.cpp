#include <iostream>
#include <stack>
using namespace std;

void pushAtEnd(stack<int> &s, int input)
{
    // if at last -> stack is empty
    if (s.empty())
    {
        s.push(input);
        return;
    }
    // if not empty -> find top
    int top = s.top();
    s.pop();

    pushAtEnd(s, input);
    s.push(top);
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
    pushAtEnd(s, 69);
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