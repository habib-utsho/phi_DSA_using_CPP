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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;

    while (head->next != NULL)
    {
        cout << "value of head: " << head->val << endl;
        head = head->next;
    }

    // cout << "value of head: " << head->val << endl;
    // cout << "value of a: " << head->next->val << endl;
    // cout << "value of b: " << head->next->next->val << endl;

    return 0;
}