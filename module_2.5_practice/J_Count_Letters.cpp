#include <bits/stdc++.h>;
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> v(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        // v.push_back(str[i] - 'a');
        v[str[i] - 'a']++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            cout << char(i + 97) << " : " << v[i] << endl;
        }
    }
    // cout << v;
    return 0;
}