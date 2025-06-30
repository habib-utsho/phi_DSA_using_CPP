#include <bits/stdc++.h>;
using namespace std;

int main()
{
    vector<int> v1;       // construct a vector with 0 elements
    vector<int> v2(6);    // construct a vector with N elements
    vector<int> v3(5, 1); // construct a vector with N elements and value with 1
    vector<int> v4(v3);   // copy from v3

    int arr[5] = {5, 4, 3, 2, 1};
    vector<int> v5(arr, arr + 5); // construct a vector with take values from array

    vector<int> v6 = {10, 20, 30, 40, 50};

    cout
        << "v4 size is: " << v4.size() << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << v6[i] << " ";
    }

    return 0;
}