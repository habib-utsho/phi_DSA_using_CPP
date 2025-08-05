#include <bits/stdc++.h>;
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int size1;
    cin >> size1;
    while (size1--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    int size2;
    cin >> size2;
    while (size2--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    int stSize = st.size();

    cout << endl;

    int qSize = q.size();

    if (stSize != qSize)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!q.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;
    return 0;
}