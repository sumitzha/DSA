// works on LIFO type of operations -> last in first out
// like stack of plates so the bottom plates are taken out at last

// operations
// push         -> insert to stack's top
// pop          -> remove from top of stack
// peak / top   -> see from top
// empty        -> if stack is empty or not
// size         -> size of stack

// Stack using STL
#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> st)
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
    stack<int> s;

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