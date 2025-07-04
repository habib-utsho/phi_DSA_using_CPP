#include <bits/stdc++.h>;
using namespace std;

int main()
{
    int n;
    cin >> n;

    int firstSpace = 0;
    int secondSpace = n - 2;
    for (int i = 0; i <= n / 2; i++)
    {

        for (int j = 0; j < firstSpace; j++)
        {
            cout << " ";
        }
        int mid = n / 2;
        if (i == mid)
        {
            cout << "X" << endl;
            firstSpace++;
            secondSpace -= 2;
            continue;
        }

        firstSpace++;
        cout << "\\";
        for (int j = secondSpace; j > 0; j--)
        {
            cout << " ";
        }

        cout << "/" << endl;
        secondSpace -= 2;
    }

    firstSpace = (n / 2) - 1;
    secondSpace = 1;

    // cout << firstSpace << " second space: " << secondSpace << endl;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 0; j < firstSpace; j++)
        {
            cout << " ";
        }

        firstSpace--;
        cout << "/";
        for (int j = secondSpace; j > 0; j--)
        {
            cout << " ";
        }

        cout << "\\" << endl;
        secondSpace += 2;
    }
    return 0;
}