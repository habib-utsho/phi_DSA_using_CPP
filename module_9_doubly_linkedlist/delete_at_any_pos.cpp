#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void printForward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_at_any_pos(Node *&head, Node *&tail, int pos)
{
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    // if(temp->next)
    Node *deleteNode = temp->next;
    if (deleteNode->next == NULL)
    {
        deleteNode->prev->next = NULL;
        delete deleteNode;
        return;
    }
    temp->next = deleteNode->next;
    temp->next->prev = temp;
    delete deleteNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_any_pos(head, tail, 1);
    printForward(head);

    return 0;
}