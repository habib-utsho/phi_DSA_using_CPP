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

void print_middle_elem_linkedlist(Node *head, int totalLinkedList)
{
    int middleElement = totalLinkedList / 2;
    cout << "total count: " << totalLinkedList << endl;
    cout << "middle element: " << middleElement << endl;

    Node *temp = head;
    for (int i = 0; i < middleElement - 1; i++)
    {
        temp = temp->next;
    }

    if (totalLinkedList % 2 != 0)
    {
        cout << temp->next->val << endl;
    }
    else
    {
        cout << temp->val << " ";
        cout << temp->next->val << endl;
    }
}

int count_linkedlist(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

    int totalLinkedList = count_linkedlist(head);
    print_middle_elem_linkedlist(head, totalLinkedList);

    return 0;
}