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

class Stack
{
public:
    Node *head = NULL;
    int sz = 0;

    Stack()
    {
        // Write your code here
    }
    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int data)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        if (head != NULL)
        {
            sz--;
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
    }

    int getTop()
    {
        if (head == NULL)
            return -1;
        return head->val;
    }
};

main()
{

    Stack st;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n == 3)
        {
            int val;
            cin >> val;
            st.push(val);
        }
        else if (n == 1)
        {
            cout << st.getSize() << endl;
        }
        else if (n == 2)
        {
            if (st.isEmpty())
            {
                cout << "true" << endl;
            }
            else
                cout << "false" << endl;
        }
        else if (n == 4)
        {
            if (!st.isEmpty())
                st.pop();
        }
        else if (n == 5)
        {
            if (!st.isEmpty())
                cout << st.getTop() << endl;
        }
    }

    // st.push(5);
    // st.push(10);
    // st.push(15);

    // st.pop();

    // cout << st.getTop() << endl;

    return 0;
}