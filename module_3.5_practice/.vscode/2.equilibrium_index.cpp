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

    // Copying the vector in another vector
    vector<int> vv(n);
    vv = v;

    for (int i = 1; i < n; i++)
    {
        vv[i] = vv[i] + vv[i - 1];
    }

    for (int i = 1; i < n; i++)
    {
        int rightSum = 0;
        for (int j = i + 1; j < n; j++)
        {
            rightSum += v[j];
        }
        if (rightSum == vv[i - 1])
        {
            cout << i;
            break;
        }
    }

    return 0;
}