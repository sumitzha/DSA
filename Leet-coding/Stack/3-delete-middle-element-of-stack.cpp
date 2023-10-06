#include <iostream>
#include <stack>
using namespace std;

void deleteMiddleElement(stack<int> &s, int count, int size)
{
    // if reached the middle (remove the top element)
    if (count == size / 2)
    {
        s.pop();
        return;
    }

    // if not the top store the element and look for next
    int _top = s.top();
    s.pop();

    deleteMiddleElement(s, count + 1, size);

    // put back the previous top as it was
    s.push(_top);
}

void print(stack<int> s);
int main()
{
    int count = 0;
    stack<int> s;

    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    int size = s.size();

    print(s);
    deleteMiddleElement(s, count, size);
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