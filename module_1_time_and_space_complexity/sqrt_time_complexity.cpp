#include <bits/stdc++.h>;
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << i << endl;
    }

    // Time complexity is O(sqrt(n))
    // Same: i*i <= n

    return 0;
}