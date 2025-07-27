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

void insert_with_idx(Node *&head, Node *&tail, int idx, int val)
{

    Node *newNode = new Node(val);

    if (idx == 0 && tail == NULL || head == NULL)
    {
        head = newNode;
        tail = newNode;
        printForward(head);
        cout << endl;
        printBackward(head);
        cout << endl;
        return;
    }
    else if (idx == 0)
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        printForward(head);
        cout << endl;
        printBackward(head);
        cout << endl;
        return;
    }
    else
    {

        Node *temp = head;
        for (int i = 1; i < idx; i++)
        {
            if (i < idx && temp->next == NULL)
            {
                cout << "Invalid" << endl;
                return;
            }
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            temp->next = newNode;
            newNode->prev = temp;
            tail = newNode;
            // cout << endl;
            printForward(head);
            cout << endl;
            printBackward(head);
            cout << endl;
            return;
        }

        temp->next->prev = newNode;
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        printForward(head);
        cout << endl;
        printBackward(head);
        cout << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        insert_with_idx(head, tail, idx, val);
    }

    return 0;
}