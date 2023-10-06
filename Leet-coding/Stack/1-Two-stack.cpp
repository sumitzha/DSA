// two stacks are to be done in a single array
// so we write the code for stack1 and stack2's

#include <iostream>
using namespace std;

class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // top1 is from front
    // top2 is from back of array
    TwoStack(int s)
    {
        size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    void push1(int input)
    {
        // atleast one empty space is present
        if (top2 - top1 > 1)
        {
            // insert at top1
            top1++;
            arr[top1] = input;
        }
    }

    void push2(int input)
    {
        // atleast one empty space is present
        if (top2 - top1 > 1)
        {
            // at top2 -> move back (starts from last)
            top2--;
            arr[top2] = input;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int _top = arr[top1];
            top1--;
            return _top;
        }
        return -1;
    }

    int pop2()
    {
        if (top2 < size)
        {
            int _top = arr[top2];
            top1++;
            return _top;
        }
        return -1;
    }
};

