#include <bits/stdc++.h>;
using namespace std;

void customPrint(list<int> l)
{
    cout << "L -> ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    list<int> l;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            // cout << "v: " << v << endl;
            l.push_front(v);
            customPrint(l);
        }
        else if (x == 1)
        {
            // cout << "v: " << v << endl;
            l.push_back(v);
            customPrint(l);
        }
        else if (x == 2)
        {
            // cout << "v: " << v << endl;
            int size = l.size();
            if (v < size)
            {
                l.erase(next(l.begin(), v));
            }
            customPrint(l);
        }
    }

    return 0;
}