#include <bits/stdc++.h>;
using namespace std;

int main()
{

    stack<int> st;
    stack<int> st2;
    stack<int> st3;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    // Input
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        sum1 += val;
        st.push(val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        sum2 += val;
        st2.push(val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        sum3 += val;

        st3.push(val);
    }
    // cout << sum1 << " " << sum2 << " " << sum3 << endl;

    while (true)
    {
        if (sum1 == sum2 && sum2 == sum3)
            break;

        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= st.top();
            st.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= st2.top();
            st2.pop();
        }
        else
        {
            sum3 -= st3.top();
            st3.pop();
        }
    }

    // cout << sum1 << " " << sum2 << " " << sum3 << endl;
    // cout << st.top() << " " << st2.top() << " " << st3.top() << endl;
    if (sum1 == sum2 && sum1 == sum3 && sum2 == sum3)
        cout << sum1 << endl;
    else
        cout << 0 << endl;

    return 0;
}