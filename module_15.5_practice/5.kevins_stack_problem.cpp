#include <bits/stdc++.h>;
using namespace std;

int main()
{
    stack<char> st;
    stack<char> st2;
    string s = "HelloBangladesh";

    for (char c : s)
    {
        st.push(c);
    }

    while (!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while (!st2.empty())
    {
        st.push(st2.top());
        st2.pop();
    }

    s = "";
    while (!st.empty())
    {
        // cout << st.top() << "";
        s += st.top();
        st.pop();
    }

    cout << s << endl;

    return 0;
}