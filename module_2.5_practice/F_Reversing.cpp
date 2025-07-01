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

    int firstInd = 0;
    int lastInd = n - 1;
    while (firstInd < lastInd)
    {

        int temp = v[firstInd];
        v[firstInd] = v[lastInd];
        v[lastInd] = temp;
        firstInd++;
        lastInd--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}