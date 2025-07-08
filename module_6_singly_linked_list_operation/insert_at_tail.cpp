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

void insert_at_tail(Node *&head, int val)
{
    if (head == NULL)
    {
        Node *newNode = new Node(val);
        newNode->next = NULL;
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        // Last node
        if (temp->next == NULL)
        {
            Node *newNode = new Node(val);
            newNode->next = NULL;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    // Node *temp = head;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    // // Last node
    // Node *newNode = new Node(val);
    // newNode->next = NULL;
    // temp->next = newNode;
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
    head->next = a;
    a->next = b;

    insert_at_tail(head, 35);
    insert_at_tail(head, 40);
    insert_at_tail(head, 55);
    print_link_list(head);

    // cout << &head << endl;

    return 0;
}