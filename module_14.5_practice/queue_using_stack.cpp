#include <bits/stdc++.h>;
using namespace std;

class MyQueue
{
    stack<int> st1;
    stack<int> st2;

public:
    MyQueue()
    {
    }

    void push(int x)
    { 
        st1.push(x);
    }

    int pop()
    {
        int front;
        while (!st1.empty())
        {
            int top = st1.top();
            st1.pop();
            if (st1.empty())
            {
                front = top;
                break;
            }
            st2.push(top);
        }
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return front;
    }

    int peek()
    {
        int front;
        st2 = st1;
        while (!st2.empty())
        {
            int top = st2.top();
            st2.pop();
            if (st2.empty())
            {
                front = top;
                break;
            }
        }
        return front;
    }

    bool empty()
    {
        return st1.empty();
    }
};

int main()
{
    MyQueue q;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        q.push(val);
    }

    // q.pop();
    // cout << q.peek() << endl;

    // Print all
    while (!q.empty())
    {
        cout << q.peek() << endl;
        q.pop();
    }

    return 0;
}