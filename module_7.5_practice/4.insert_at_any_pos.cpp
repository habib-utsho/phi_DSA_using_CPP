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

void insertElemAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
void insertElemAtAnyPosLinkedList(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        printLinkedList(head);
        cout << endl;
        return;
    }

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printLinkedList(head);
    cout << endl;
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
        insertElemAtTail(head, tail, val);
    }

    // insertElemAtAnyPosLinkedList(head, 1, 69);
    // printLinkedList(head);
    int query;
    cin >> query;
    while (query--)
    {
        int pos, val;
        cin >> pos >> val;
        insertElemAtAnyPosLinkedList(head, pos, val);

        // cout << endl;
    }

    return 0;
}