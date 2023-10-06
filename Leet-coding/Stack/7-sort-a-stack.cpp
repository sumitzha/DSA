#include <iostream>
#include <stack>
using namespace std;

void InsertSorted(stack<int> &s, int insert)
{
    if (s.empty() || s.top() < insert)
    {
        s.push(insert);
        return;
    }

    // take top out
    int top = s.top();
    s.pop();

    InsertSorted(s, insert);

    // put top back since insert was placed correctly
    s.push(top);
}

void sortStack(stack<int> &s)
{
    // iterate untill the stack is not empty
    if (s.empty())
        return;

    // store top temporarily
    int top = s.top();
    s.pop();

    // simply iterating after poping
    sortStack(s);

    // while coming back put current_top in sorted fashion
    InsertSorted(s, top);
}

void print(stack<int> s);

int main()
{
    stack<int> s;
    s.push(2);
    s.push(-2);
    s.push(5);
    s.push(-10);
    s.push(11);
    s.push(18);

    print(s);
    sortStack(s);
    print(s);
    return 0;
}

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "-------\n";
}

// iterate the stack and make it empty
// once stack is empty come back
// while coming back put the elements in sorted order

// sorted insert
// iterate the stack untill its empty
// push insert if current_element < insert