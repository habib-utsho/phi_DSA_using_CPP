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
void reverseLinkedList(Node *head, Node *tail)
{

    while (true)
    {
        if (head == tail || head->prev == tail)
        {
            break;
        }

        swap(head->val, tail->val);

        head = head->next;
        tail = tail->prev;
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

    reverseLinkedList(head, tail);

    printForward(head);
    // cout << endl;
    // printForward(head2);

    return 0;
}