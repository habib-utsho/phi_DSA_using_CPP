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
    Node *head2 = NULL;
    Node *tail2 = head2;

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
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertElemAtTailLinkedList(head2, tail2, val);
    }

    int linkedListCount = size_of_linkedlist(head);
    int linkedListCount2 = size_of_linkedlist(head2);

    // cout << endl;
    // printLinkedList(head2);
    if (linkedListCount == linkedListCount2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}