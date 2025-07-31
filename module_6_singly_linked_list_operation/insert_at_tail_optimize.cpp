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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode; 
        return;
    }

    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(15);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;
    head->next = a;
    a->next = b;

    insert_at_tail(head, tail, 35);
    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 55);

    print_link_list(head);

    // cout << &head << endl;

    return 0;
}