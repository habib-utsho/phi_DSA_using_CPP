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

bool checkPalindrome(Node *head, Node *tail)
{

    bool isPalindrome = true;

    while (true)
    {
        if (head == tail || head->prev == tail)
        {
            break;
        }

        if (head->val != tail->val)
        {
            isPalindrome = false;
            break;
        }

        head = head->next;
        tail = tail->prev;
    }

    return isPalindrome;
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

    bool isPalindrome = checkPalindrome(head, tail);

    if (isPalindrome)
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