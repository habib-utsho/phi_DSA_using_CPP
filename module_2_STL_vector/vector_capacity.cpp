#include <bits/stdc++.h>;
using namespace std;

int main()
{
    vector<int> v(10, -2);
    // v.capacity();
    // v.empty(); //true/false
    // cout << "size is: " << v.size() << endl; // 10
    // v.clear();
    // cout << "size is: " << v.size() << endl; // 0

    v.resize(12, 50); // extend size with 2 values , 50
    for (int i = 0; i < 12; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}