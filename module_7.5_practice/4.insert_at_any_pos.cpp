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

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insertElemAtAnyPosLinkedList(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int size_of_linkedlist(Node *head)
{
    Node *tmp = head;
    int sizeCount = 0;
    while (tmp != NULL)
    {
        sizeCount++;
        tmp = tmp->next;
    }
    return sizeCount;
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
        int size = size_of_linkedlist(head);
        int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            insertAtHead(head, tail, val);
        }
        else if (pos == size)
        {
            insertElemAtTail(head, tail, val);
        }
        else if (pos > size)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            // cout << pos << "  " << val << " -";
            insertElemAtAnyPosLinkedList(head, pos, val);
        }

        printLinkedList(head);
        cout << endl;
    }

    return 0;
}