#include <bits/stdc++.h>;
using namespace std;

// Using binary search TC is: O(NlogN)
// Using linear search TC is: O(N*N)

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int num;
    while (cin >> num)
    {
        // Linear approach - O(n)
        // bool isExistNum = false;
        // for (int i = 0; i < n; i++)
        // {
        //     if (v[i] == num)
        //     {
        //         isExistNum = true;
        //         break;
        //     }
        // }
        // if (isExistNum)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }

        int leftInd = 0;
        int rightInd = n - 1;

        bool isExistNum = false;

        while (leftInd <= rightInd)
        {
            int mid = (leftInd + rightInd) / 2;
            if (v[mid] == num)
            {
                isExistNum = true;
                break;
            }
            else if (num < v[mid])
            {
                rightInd = mid - 1;
            }
            else
            {
                leftInd = mid + 1;
            }
        }

        if (isExistNum)
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