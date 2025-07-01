#include <bits/stdc++.h>;
using namespace std;

bool comp(int a, int b)
{
    return a < b;
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // count
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it != v.end())
        {
            count++;
        }
        // for (int j = 0; j < n; j++)
        // {
        //     if (i == j)
        //     {
        //         continue;
        //     }
        // cout << v[i] << " " << v[j] + 1 << endl;
        // if (v[i] + 1 == v[j])
        // {
        //     count++;
        //     break;
        //     // i++;
        // }
        // }
        // cout << endl;
    }

    cout << count << endl;

    return 0;
}