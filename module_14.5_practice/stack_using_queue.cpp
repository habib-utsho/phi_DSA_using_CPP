#include <bits/stdc++.h>;
using namespace std;

class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;

    MyStack()
    {
    }

    void push(int x)
    {
        q1.push(x);
    }

    void pop()
    {
        int popVal;
        while (!q1.empty())
        {
            int front = q1.front();
            q1.pop();
            // cout << front << " " << q1.empty() << " hey" << endl;
            if (q1.empty())
            {
                popVal = front;
                break;
            }
            q2.push(front);
        }

        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        // q1 = q2;

        // cout << "Pop:" << popVal << endl;
    }

    int top()
    {
        return q1.back();
    }

    bool empty()
    {
        return q1.empty();
    }

    bool size()
    {
        return q1.size();
    }
};

int main()
{
    MyStack st;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        st.push(val);
    }

    // Print all
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}