#include <bits/stdc++.h>;
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    // Time complexity is O(n)
    // Same: i <= n+1 i <= n-1 , i <= n/2, i<= n*2
    // Here, +1 or any other is constant, and we ignore constant to calculate time complexity

    return 0;
}