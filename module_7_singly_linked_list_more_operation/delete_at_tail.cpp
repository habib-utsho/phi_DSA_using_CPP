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

void printLinkedList(Node *temp)
{

    if (temp == NULL)
    {
        return;
    }

    cout << temp->val << " ";
    printLinkedList(temp->next);
}
void insertElemAtTailLinkedList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (!tail)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void delete_at_tail(Node *head, Node *&tail, int ind)
{

    Node *temp = head;
    for (int i = 1; i < ind; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = head;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertElemAtTailLinkedList(head, tail, val);
    }

    delete_at_tail(head, tail, 5);

    printLinkedList(head);

    return 0;
}