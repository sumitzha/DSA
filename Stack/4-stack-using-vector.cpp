#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class stack
{
    vector<T> v;

public:
    void push(T data) { v.push_back(data); }
    void emplace(T data) { v.push_back(data); }

    void pop()
    {
        if (!v.empty())
            v.pop_back();
        else
            cout << "Stack empty\n";
    }

    T top()
    {
        int lastIndex = v.size() - 1;
        return v[lastIndex];
    }

    bool empty() { return (v.size() == 0); }
};


void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    // Creating a stack
    stack<int> s;

    s.push(2);
    s.push(4);
    s.emplace(6);
    s.emplace(15);
    s.emplace(18);

    print(s);

    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top: " << s.top() << endl;

    return 0;
}