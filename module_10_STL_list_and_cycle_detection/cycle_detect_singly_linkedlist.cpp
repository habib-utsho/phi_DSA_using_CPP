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
bool check_cycle_detect(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    bool hasFlag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            hasFlag = true;
            break;
        }
    }
    return hasFlag;
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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

    Node *newNode = new Node(69);
    tail->next = newNode;
    newNode->next = head;
    tail = newNode;

    bool hasCycle = check_cycle_detect(head);
    if (hasCycle)
        cout << "Cycle detected" << endl;
    else
        cout << "Cycle not detected" << endl;

    // printList(head);
    return 0;
}