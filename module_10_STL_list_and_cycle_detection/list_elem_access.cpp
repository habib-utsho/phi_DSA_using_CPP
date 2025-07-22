#include <bits/stdc++.h>;
using namespace std;

int main()
{
    // Elem access
    list<int> l = {10, 20, 30};
    cout << l.back() << endl;            // Access tail
    cout << l.front() << endl;           // Access head
    cout << *next(l.begin(), 2) << endl; // Access specific elem

    // Iterator
    cout << *l.begin() << endl; //Dereference and print first elem
    // cout << *l.end() << endl; // Next point of last value
    return 0;
}