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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

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
    };

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    };
    int top()
    {
        return tail->val;
    };
    int size()
    {
        return sz;
    };
    bool empty()
    {
        return head == NULL;
    };
};

main()
{
    // myStack *st = new myStack(); // dynamic
    myStack st; // static
    // st->push(10); // dynamic
    // st.pop();

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        st.push(val);
    }

    // if (!st.empty())
    //     st.pop();
    // if (!st.empty())
    //     st.pop();
    // st.pop();
    // if (!st.empty())
    //     cout << st.top() << endl;
    // cout << st.empty() << endl;

    // Print all
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}