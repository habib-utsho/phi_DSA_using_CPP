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

int findMaxValue(Node *head)
{
    Node *temp = head;
    int max = temp->val;
    while (temp->next != NULL)
    {
        if (temp->next->val > max)
        {
            max = temp->next->val;
        }
        temp = temp->next;
    }

    return max;
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

    int maxVal = findMaxValue(head);
    cout << maxVal << endl;

        return 0;
}