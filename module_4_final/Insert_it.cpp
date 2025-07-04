#include <bits/stdc++.h>;
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int m;
    cin >> m;
    vector<int> vv(m);

    for (int i = 0; i < m; i++)
    {
        cin >> vv[i];
    }

    int x;
    cin >> x;

    v.insert(v.begin() + x, vv.begin(), vv.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}