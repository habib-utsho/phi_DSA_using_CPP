#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{

    Node a, b, c;
    a.val = 20;
    b.val = 30;
    c.val = 40;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->val << endl;       // same as prev line
    cout << a.next->next->val << endl; // output c val
    cout << "b address is: " << a.next << endl;
    cout << "c address is: " << a.next->next << endl;

    return 0;
}