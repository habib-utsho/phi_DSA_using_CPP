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

void print_linkedlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}
bool check_duplicate_val(Node *head)
{
    Node *temp = head;
    int arr[101] = {};
    bool isDuplicate = false;
    while (temp != NULL)
    {
        if (!arr[temp->val])
        {
            arr[temp->val] = temp->val;
        }
        else
        {
            isDuplicate = true;
        }
        temp = temp->next;
    }
    return isDuplicate;
}

int main()
{

    Node *head = new Node(50);
    Node *a = new Node(5);
    Node *b = new Node(4);
    Node *c = new Node(8);
    Node *d = new Node(6);
    Node *e = new Node(2);
    Node *f = new Node(51);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    print_linkedlist(head);
    int is_duplicate_val_exist = check_duplicate_val(head);
    if (is_duplicate_val_exist)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}