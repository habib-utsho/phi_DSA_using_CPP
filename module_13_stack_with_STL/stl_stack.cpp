#include <bits/stdc++.h>;
using namespace std;

int main()
{
    stack<int> st;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        st.push(val);
    }

    // Print all
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}