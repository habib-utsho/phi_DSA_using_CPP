#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printForward(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->val << " ";
    printForward(head->next);
}
void printReverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    printReverse(head->next);
    cout << head->val << " ";
}

bool insertAtAnyPos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        if (temp == NULL)
        {
            return false;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    newNode->next->prev = newNode;
    temp->next = newNode;

    return true;
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
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

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void customPrint(Node *head)
{
    cout << "L -> ";
    printForward(head);
    cout << endl;

    cout << "R -> ";
    printReverse(head);
    cout << endl;
}

int getSize(Node *head)
{
    int size = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        Node *temp = head;
        int size = getSize(head);
        // cout << "size: " << size << " , x: " << x << endl;

        if (x == 0)
        {
            // cout << "v: " << v << endl;
            insertAtHead(head, tail, v);
            customPrint(head);
        }
        else if (size == x)
        {
            insertAtTail(head, tail, v);
            customPrint(head);
        }
        else if (x > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            bool isInserted = insertAtAnyPos(head, tail, x, v);
            if (isInserted)
            {
                customPrint(head);
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}