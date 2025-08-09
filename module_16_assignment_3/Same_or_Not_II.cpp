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

class Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz;

    void push(int val)
    {

        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            tail = NULL;
        }

        delete deleteNode;
    }
    int empty()
    {
        return head == NULL;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return tail->val;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            head = NULL;
            tail = NULL;
        }

        delete deleteNode;
    }
    int empty()
    {
        return head == NULL;
    }
    int size()
    {
        return sz;
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
};

int main()
{

    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;

    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool isSame = true;
    while (!st.empty())
    {

        if (st.top() != q.front())
        {
            isSame = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (isSame)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}