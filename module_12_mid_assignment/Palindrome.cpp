#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
bool check_palindrome(Node *head, Node *tail)
{
    bool flag = true;
    while (head != tail && head->prev != tail)
    {
        if (head->val != tail->val)
        {
            flag = false;
            break;
        }
        head = head->next;
        tail = tail->prev;
    }

    return flag;
}
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    print(head->next);
    cout << head->val << " ";
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

    bool isPalindrome = check_palindrome(head, tail);

    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}