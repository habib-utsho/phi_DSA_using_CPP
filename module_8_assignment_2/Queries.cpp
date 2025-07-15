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
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void delete_at_tail(Node *&head, Node *&tail)
{
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = NULL;
    Node *deleteNode = tail;
    delete deleteNode;

    tail = tmp;
}
void delete_at_head(Node *&head)
{
    Node *tmp = head;
    // cout << "delete head: " << tmp->val << endl;
    head = tmp->next;
    delete tmp;
}

void delete_at_any_pos(Node *&head, Node *&tail, int pos, int size, int val)
{
    Node *tmp = head;
    if (pos == 0)
    {
        delete_at_head(head);
        return;
    }
    else if (size - 1 == val)
    {
        delete_at_tail(head, tail);
        return;
    }
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }

    // cout << "Delete: " << tmp->val << endl;
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int getSize(Node *&head)
{
    Node *tmp = head;
    int size = 0;
    while (tmp != NULL)
    {
        size++;

        tmp = tmp->next;
    }

    return size;
}
int main()
{
    Node *head = NULL;
    Node *tail = head;
    int t;
    cin >> t;
    while (t--)
    {
        int num, val;
        cin >> num >> val;
        // cout << num << " " << val << " " << endl;
        int size = getSize(head);
        // cout << "size: " << size << endl;
        if (num == 0)
        {
            insert_at_head(head, tail, val);
            printLinkedList(head);
            cout << endl;
        }
        else if (num == 1)
        {
            insert_at_tail(head, tail, val);
            printLinkedList(head);
            cout << endl;
        }
        else if (num == 2)
        {
            if (size - 1 < val)
            {
                printLinkedList(head);
                cout << endl;
            }
            else
            {
                delete_at_any_pos(head, tail, val, size, val);
                printLinkedList(head);
                cout << endl;
            }
        }
    }

    return 0;
}