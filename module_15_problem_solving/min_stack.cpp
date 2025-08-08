#include <bits/stdc++.h>;
using namespace std;

class MinStack
{
public:
    stack<int> st;
    stack<int> sortedSt;
    MinStack()
    {
    }

    void push(int val)
    {
        if (sortedSt.empty())
        {
            sortedSt.push(val);
        }
        else
        {
            if (val <= sortedSt.top())
                sortedSt.push(val);
        }

        st.push(val);
    }

    void pop()
    {
        if (!sortedSt.empty() && st.top() == sortedSt.top())
            sortedSt.pop();
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return sortedSt.top();
    }
};

int main()
{
    MinStack st;

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

    st.pop();
    cout << st.getMin() << endl;

    return 0;
}