#include <bits/stdc++.h>;
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2 = l;
    list<int> l3 = {500, 1000, 1500};
    // list<int> l2;
    // l2.assign(l.begin(), l.end());

    l2.push_back(40);
    l2.push_back(50);
    l2.push_front(5);
    l2.push_front(2);
    l2.pop_back();  // remove tail - 50
    l2.pop_front(); // remove head - 2

    // Access ith idx
    cout << "2nd idx: " << *next(l2.begin(), 2) << endl;

    // Insert at any postion;
    // Single val
    l2.insert(next(l2.begin(), 2), 15); // Insert 15 after 10
    // Insert another list
    l2.insert(next(l2.begin(), 2), l3.begin(), l3.end()); // Insert l3 at 2nd idx in l2

    // Remove at any postion;
    // l2.erase(next(l2.begin(), 5)); // Delete 5th idx
    l2.erase(next(l2.begin(), 5), next(l2.begin(), 7)); // Delete 5th and 6th idx

    // Replace a spefic value;
    replace(l2.begin(), l2.end(), 10, 69); // replace 10 with 69

    // Check a specific value is exist or not
    auto it = find(l2.begin(), l2.end(), 69);
    if (it == l2.end())
    {
        cout << 69 << " NOT FOUND" << endl;
    }
    else
    {
        cout << 69 << " FOUND" << endl;
    }

    for (int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}