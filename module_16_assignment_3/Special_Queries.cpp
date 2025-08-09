#include <bits/stdc++.h>;
using namespace std;

int main()
{

    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int query;
        cin >> query;

        // cout << "query:  " << query << endl;
        if (query == 0)
        {
            string name;
            cin >> name;
            // cin.ignore();
            // cout << "name " << name << endl;
            q.push(name);
        }
        else if (query == 1)
        {
            if (q.empty())
                cout << "Invalid" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}