#include <bits/stdc++.h>;
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i < n; i = i * 2)
    {
        cout << i << endl;
    }

    // Time complexity is O(log n)
    // Same: i = i / 2
    // Here, /2 or *2 is constant, and we ignore constant to calculate time complexity

    return 0;
}