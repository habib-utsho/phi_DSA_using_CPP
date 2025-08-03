#include <bits/stdc++.h>;
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    };
    void pop()
    {
        v.pop_back();
    };
    int top()
    {
        return v.back();
    };
    int size()
    {
        return v.size();
    };
    bool empty()
    {
        return v.empty();
    };
};

main()
{
    // myStack *st = new myStack(); // dynamic
    myStack st; // static
    // st->push(10); // dynamic
    // st.pop();

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

    // if (!st.empty())
    //     st.pop();
    // if (!st.empty())
    //     st.pop();
    // st.pop();
    // if (!st.empty())
    //     cout << st.top() << endl;
    // cout << st.empty() << endl;

    // Print all
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}