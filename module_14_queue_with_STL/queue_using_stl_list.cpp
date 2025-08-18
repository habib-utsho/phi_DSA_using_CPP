#include <bits/stdc++.h>;
using namespace std;

class MyQueue
{
public:
    list<int> l;

    void push(int val) // O(1)
    {
        l.push_back(val);
    }
    void pop() // O(1)
    {
        l.pop_front();
    }
    int front() // O(1)
    {
        return l.front();
    }
    int back() // O(1)
    {
        return l.back();
    }
    int size() // O(1)
    {
        return l.size();
    }
    bool empty() // O(1)
    {
        return l.empty();
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