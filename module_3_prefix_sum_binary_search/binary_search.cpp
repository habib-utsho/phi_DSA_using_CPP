#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int n, find;
    cin >> n >> find;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int leftInd = 0;
    int rightInd = n - 1;
    bool isFound = false;
    while (leftInd < rightInd)
    {
        int mid = (leftInd + rightInd) / 2;
        if (find == v[mid])
        {
            isFound = true;
            break;
        }
        else if (v[mid] > find)
        {
            rightInd = mid - 1;
        }
        else if (v[mid] < find)
        {
            leftInd = mid + 1;
        }
    }
    if (isFound)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}