#include <bits/stdc++.h>;
using namespace std;

int main()
{
    queue<int> q;
    stack<int> st;
    stack<int> st2;

    int k = 2;

    q.push(5);
    q.push(3);
    q.push(2);
    q.push(6);
    q.push(4);

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    if (k == st.size())
    {
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
    }
    else
    {

        for (int i = st.size(); i > k; i--)
        {
            st2.push(st.top());
            st.pop();
        }

          while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        while (!st2.empty())
        {
            q.push(st2.top());
            st2.pop();
        }
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}