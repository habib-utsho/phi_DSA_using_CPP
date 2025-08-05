#include <bits/stdc++.h>;
using namespace std;

int main()
{
    stack<int> st;
    stack<int> st2;

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
        st2.push(val);
    }

    int stSize = st.size();
    // while (stSize--)
    // {
    //     cout << st.top() << " ";
    // }

    cout << endl;

    int st2Size = st2.size();
    // while (st2Size--)
    // {
    //     cout << st.top() << " ";
    // }

    if (stSize != st2Size)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != st2.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        st2.pop();
    }

    cout << "YES" << endl;

    return 0;
}