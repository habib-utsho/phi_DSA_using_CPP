#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> prefixSum = v;
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            prefixSum[i] = prefixSum[i] + prefixSum[i - 1];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << prefixSum[i] << " ";
    // }
    // cout << endl;

    while (q--)
    {
        int firstInd, lastInd;
        cin >> firstInd >> lastInd;
        long long int sum = firstInd == 1 ? prefixSum[lastInd - 1] : prefixSum[lastInd - 1] - prefixSum[firstInd - 2];
        // for (int i = firstInd; i <= lastInd; i++)
        // {
        //     sum += v[i - 1];
        // }
        cout << sum << endl;
    }
    return 0;
}