#include <bits/stdc++.h>;
using namespace std;

class myStack
{
public:
    stack<int> st;
    stack<int> st2;
    void push(int x)
    {

        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        st2.push(x);

        while (!st2.empty())
        {
            st.push(st2.top());
            st2.pop();
        }
    }
    void pop()
    {
        st.pop();
    }
    int top()
    {
        return st.top();
    }
    int size()
    {
        return st.size();
    }
    bool empty()
    {
        return st.empty();
    }
};

int main()
{
    myStack st;

    st.push(7);
    st.push(4);
    st.push(5);

    cout << st.top() << endl;

    return 0;
}