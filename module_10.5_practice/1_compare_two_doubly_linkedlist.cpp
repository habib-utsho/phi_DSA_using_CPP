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
bool check_linked_list_same_or_not(Node *head, Node *head2, int listCount1, int listCount2)
{

    if (listCount1 != listCount2)
    {
        return false;
    }
    Node *temp = head;
    Node *temp2 = head2;
    bool isSame = true;
    while (temp != NULL && temp2 != NULL)
    {
        if (temp->val != temp2->val)
        {
            isSame = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    return isSame;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

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

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    int listCount1 = total_count(head);
    int listCount2 = total_count(head2);
    bool isSameLinkedList = check_linked_list_same_or_not(head, head2, listCount1, listCount2);

    if (isSameLinkedList)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // printForward(head);
    // cout << endl;
    // printForward(head2);

    return 0;
}