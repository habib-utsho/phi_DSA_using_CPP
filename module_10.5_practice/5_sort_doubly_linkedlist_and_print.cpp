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
void printBackward(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    printBackward(temp->next);
    cout << temp->val << " ";
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

int total_count(Node *head)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int sortList(Node *head)
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
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    sortList(head);

    printForward(head);

    return 0;
}