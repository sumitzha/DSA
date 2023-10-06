#include <iostream>
using namespace std;

template <typename T>
class stack
{
    int _top;
    int _size;
    int *arr;

public:
    stack()
    {
        _top = -1;
        this->_size = 1000;
        arr = new T[_size];
    }

    void push(T x)
    {
        if (_size - _top > 1)
            arr[++_top] = x;
        else
            cout << "Stack overflow\n";
    }

    void emplace(T x)
    {
        if (_size - _top > 1)
            arr[++_top] = x;
        else
            cout << "Stack overflow\n";
    }

    void pop()
    {
        if (_top > -1)
        {
            T temp = arr[_top];
            _top = _top - 1;
        }
    }

    T top() { return arr[_top]; }
    bool empty() { return (_top == -1); }
    int size() { return (_top + 1); }
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


