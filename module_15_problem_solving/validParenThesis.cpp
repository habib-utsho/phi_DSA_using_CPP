#include <bits/stdc++.h>;
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    if (s.size() == 1)
        return false;

    for (char c : s)
    {
        // cout << c << endl;
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                if ((c == ')' && st.top() == '(') || (c == '}' && st.top() == '{') || (c == ']' && st.top() == '['))
                {
                    if (!st.empty())
                        st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }

    if (!st.empty())
        return false;
        
    return true;
}

int main()
{
    string s;
    cin >> s;

    bool isValidRes = isValid(s);
    if (isValidRes)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}