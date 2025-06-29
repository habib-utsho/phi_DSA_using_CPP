#include <bits/stdc++.h>;
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j = j * 2)
        {

            cout << "*" << " ";
        }
        cout << endl;
    }

    // Time complexity is O(NlogN)
    // same : j = j/2

    return 0;
}