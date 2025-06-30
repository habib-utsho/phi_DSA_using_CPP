#include <bits/stdc++.h>;
using namespace std;

int main()
{
    vector<int> v = {5, 10, 15};
    vector<int> v2;
    v2 = v;
    v2.push_back(20); // 5, 10, 15, 20
    v2.push_back(25); // 5, 10, 15, 20, 25
    v2.pop_back();    // 5, 10, 15, 20

    // Insert a elem in a specific position
    v2.insert(v2.begin() + 1, 69); // 5 69 10 15 20

    // Insert multiple elems in a specific position
    vector<int> vx = {500, 501, 502};
    v2.insert(v2.begin() + 1, vx.begin(), vx.end()); // 5 500 501 502 69 10 15 20

    // Erase a elem in a specific position
    v2.erase(v2.begin() + 1); // 5 501 502 69 10 15 20

    // Erase multi elems from a specific position
    v2.erase(v2.begin() + 1, v2.begin() + 3); // 5 69 10 15 20

    // replace a elem
    replace(v2.begin(), v2.end(), 69, 96); // 5 96 10 15 20

    // Find a elem
    // vector<int>::iterator it = find(v.begin(), v.end(), 96);
    auto it = find(v2.begin(), v2.end(), 96);
    if (it == v2.end())
    {
        cout << "96 NOT FOUND" << endl;
    }
    else
    {
        cout << *it << " FOUND" << endl;
    }

    // Range based for loop
    for (int x : v2)
    {
        cout << x << " ";
    }

    return 0;
}