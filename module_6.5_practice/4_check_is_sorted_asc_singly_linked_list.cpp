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

bool check_is_sorted_func(Node *head)
{
    Node *temp = head;
    bool isSorted = true;
    while (temp != NULL)
    {
        if (temp->next)
        {
            if (temp->val > temp->next->val)
            {
                isSorted = false;
            }
        }
        temp = temp->next;
    }
    return isSorted;
}

int main()
{

    Node *head = new Node(2);
    Node *a = new Node(4);
    Node *b = new Node(6);
    Node *c = new Node(8);
    Node *d = new Node(9);
    Node *e = new Node(10);
    Node *f = new Node(12);
    Node *g = new Node(20);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;

    int is_sorted = check_is_sorted_func(head);
    if (is_sorted)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}