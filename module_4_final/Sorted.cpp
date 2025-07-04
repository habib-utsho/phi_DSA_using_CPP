#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<long long int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool isSort = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                // cout << v[i] << " " << v[i + 1];
                isSort = false;
                break;
            }
        }

        if (isSort)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}