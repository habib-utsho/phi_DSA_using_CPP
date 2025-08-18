#include <bits/stdc++.h>;
using namespace std;

class MyQueue
{
public:
    queue<int> q;

    void push(int val) // O(1)
    {
        q.push(val);
    }
    void pop() // O(1)
    {
        q.pop();
    }
    int front() // O(1)
    {
        return q.front();
    }
    int back() // O(1)
    {
        return q.back();
    }
    int size() // O(1)
    {
        return q.size();
    }
    bool empty() // O(1)
    {
        return q.empty();
    }
};

main()
{

    MyQueue q;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}