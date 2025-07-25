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
        this->next = NULL;
        this->prev = NULL;
    }
};
void reverseList(Node *firstNodePointer, Node *lastNodePointer)
{
    // cout << firstNodePointer << " " << lastNodePointer << endl;
    while (true)
    {
        if (
            firstNodePointer == lastNodePointer || firstNodePointer->prev == lastNodePointer) // For odd th node and even th node
        {
            break;
        }
        swap(firstNodePointer->val, lastNodePointer->val);
        firstNodePointer = firstNodePointer->next;
        lastNodePointer = lastNodePointer->prev;
    }
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (tail == NULL || head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void printList(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    printList(temp->next);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            break;
        }
        insert_at_tail(head, tail, num);
    }

    reverseList(head, tail);
    printList(head);
    return 0;
}