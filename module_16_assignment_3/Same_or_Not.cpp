#include <bits/stdc++.h>;
using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;

    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool isSame = true;
    while (!st.empty())
    {

        if (st.top() != q.front())
        {
            isSame = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (isSame)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}