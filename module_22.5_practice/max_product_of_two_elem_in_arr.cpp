// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
#include <bits/stdc++.h>;
using namespace std;

int main()
{

    vector<int> v = {3, 4, 5, 2};
    // Without sorting O(NlogN)
    // sort(v.begin(), v.end());
    // int mx = v[v.size() - 1];
    // int secondMx = v[v.size() - 2];

    //     cout << (mx - 1) * (secondMx - 1);

    // Without sorting O(N)
    int max = INT_MIN, secondMax = INT_MIN;
    for (int val : v)
    {
        if (val >= max)
        {
            secondMax = max;
            max = val;
        }
        else if (val <= max && val >= secondMax)
            secondMax = val;
    }
    cout << (max - 1) * (secondMax - 1);

    return 0;
}