#include <bits/stdc++.h>;
using namespace std;

int main()
{
    pair<string, int> p = {"a", 2};
    // p = make_pair("Utsho", 29);
    // p = {"Utsho", 29};
    // cout << p.first << " " << p.second;

    // Pair of vector
    int n;
    cin >> n;
    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}