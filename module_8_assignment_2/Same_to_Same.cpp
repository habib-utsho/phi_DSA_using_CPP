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

void insert_at_tail(Node *&head, Node *&tail, int val)
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

int getSize(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp->next != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

bool checkBothLinkedlistSame(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;
    bool isSame = true;
    while (temp != NULL)
    {
        // cout << temp->val << " " << temp2->val << endl;
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
        insert_at_tail(head, tail, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    int firstLinkedlistSize = getSize(head);
    int secondLinkedlistSize = getSize(head2);
    // cout << firstLinkedlistSize << " " << secondLinkedlistSize << endl;

    if ((firstLinkedlistSize != secondLinkedlistSize))
    {
        cout << "NO";
    }
    else
    {
        bool checkTwoLinkedlistSame = checkBothLinkedlistSame(head, head2);
        if (checkTwoLinkedlistSame)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}