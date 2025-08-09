#include <bits/stdc++.h>;
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        string str;
        cin >> str;
        for (char c : str)
        {
            cout << "c: " << c << endl;
            if (!st.empty() && st.top() == '0' && c == '1')
                st.pop();
            else
                st.push(c);
        }

        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}