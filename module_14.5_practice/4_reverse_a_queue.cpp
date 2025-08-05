#include <bits/stdc++.h>;
using namespace std;

int main()
{
    queue<int> q;
    int sz;
    cin >> sz;
    while (sz--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}