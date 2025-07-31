#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{

    Node a(20), b(30), c(40);

    a.next = &b;   
    b.next = &c;

    cout << a.val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->val << endl;       // same as prev line
    cout << a.next->next->val << endl; // output c val
    cout << "b address is: " << a.next << endl;
    cout << "c address is: " << a.next->next << endl;

    return 0;
}