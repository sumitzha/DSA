// creating a stack from the very basic
#include <iostream>
using namespace std;

class stack
{
public:
    int _size;
    int _top;
    int *arr;

    // size as _size since we need to define size()
    // same for _top since top() exists later on...

    // functions of stack
    // initialisation of stack
    stack()
    {
        _size = 1000;
        arr = new int[_size];
        _top = -1;
    }

    // initialisation of parametrized stack
    stack(int size)
    {
        _size = size;
        arr = new int[_size];
        _top = -1;
    }

    // insertion
    void push(int input)
    {
        // check if space is available
        if (_size - _top > 1)
        {
            _top++;
            arr[_top] = input;
        }
        else
        {
            cout << "\n------- Stack overflow -------\n";
            return;
        }
    }

    // deletion
    void pop()
    {
        // if stack not empty
        if (_top >= 0)
            _top--;
    }

    // get the top element
    int top()
    {
        if (_top >= 0 && _top < _size)
            return arr[_top];
        else
            return -1;
    }

    // see if stack is empty
    bool empty()
    {
        if (_top == -1)
            return true;
        return false;
    }
};

void printStack(stack st)
{
    cout << "Printing stack : \n";
    while (!st.empty())
    {
        cout << st.top() << "\n";
        st.pop();
    }
    cout << "----------\n";
}

int main()
{
    // initialisation of stack
    stack s;

    // push operations
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    cout << "s.top()   : " << s.top() << endl;
    cout << "s.empty() : " << s.empty() << endl;

    printStack(s);
}