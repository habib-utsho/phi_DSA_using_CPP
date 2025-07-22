#include <bits/stdc++.h>;
using namespace std;

int main()
{
    list<int> l = {60, 20, 40, 50, 20};
    // l.remove(40); // Delete by value

    // sort
    // Desc
    // l.sort(greater<int>());
    // Asc
    l.sort();

    // Unique -- Duplicate value remove [Must nee sorted value, it can check between value]
    l.unique();

    // Reverse
    l.reverse();

    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}