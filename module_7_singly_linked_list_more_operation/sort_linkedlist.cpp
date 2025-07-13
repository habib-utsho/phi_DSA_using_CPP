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
void sortLinkedList(Node *head)
{

    for (Node *temp = head; temp->next != NULL; temp = temp->next)
    {
        for (Node *temp2 = temp->next; temp2 != NULL; temp2 = temp2->next)
        {
            if (temp->val > temp2->val)
            {
                swap(temp->val, temp2->val);
            }
        }
    }
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

    sortLinkedList(head);

    printLinkedList(head);

    return 0;
}