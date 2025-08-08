#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int t;
    cin >> t;
    // cout << t << endl;
    while (t--)
    {
        int n;
        cin >> n;
        // cout << n << endl;
        queue<int> q;
        stack<int> st;
        while (n--)
        {
            int elem;
            cin >> elem;
            q.push(elem);
        }
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
        cout << endl;
    }
    return 0;
}