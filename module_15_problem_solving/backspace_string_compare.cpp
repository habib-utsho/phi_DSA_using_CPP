#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string str;
    string str2;
    stack<char> st;
    stack<char> st2;

    cin >> str >> str2;

    for (char c : str)
    {
        if (c != '#')
        {
                st.push(c);
        }
        else
        {
            if (!st.empty())
            st.pop();
        }
    }
    for (char c : str2)

    {
        if (c != '#')
        {
                st2.push(c);
        }
        else
        {
            if (!st2.empty())
                st2.pop();
        }
    }

    if (st == st2)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    // cout << st.top() << endl;
    // cout << st2.top() << endl;

    return 0;
}