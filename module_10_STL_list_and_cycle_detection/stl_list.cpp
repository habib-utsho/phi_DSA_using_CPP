#include <bits/stdc++.h>;
using namespace std;

int main()
{
    // Constructor
    int a[3] = {10, 20, 30};
    vector<int> v = {100, 200, 300};
    list<int> l(5, 69);
    list<int> l2(l);
    list<int> l3(a, a + 3);
    list<int> l4(v.begin(), v.end());

    cout
        << "Begin: " << *l.begin() << endl;

    // Print using iterator
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // Print using range based for loop
    for (int val : l)
    {
        cout << val << endl;
    }
    cout << endl;
    for (int val : l2)
    {
        cout << val << endl;
    }
    cout << endl;
    for (int val : l3)
    {
        cout << val << endl;
    }
    cout << endl;
    for (int val : l4)
    {
        cout << val << endl;
    }

    // Capacity
    cout << "size: " << l.size() << endl;
    l.resize(2); //l.resize(2, 5); replace other value with 5, otherwise it will be 0
    // l.clear();
    cout << "size: " << l.size() << endl;
    if (l.empty())
    {
        cout << "Empty" << endl;
    }
    return 0;
}