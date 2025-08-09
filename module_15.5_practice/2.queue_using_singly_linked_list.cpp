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

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        return head == NULL;
        // Implement the isEmpty() function
    }

    void enqueue(int data)
    {

        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;

        // Implement the enqueue() function
    }

    int dequeue()
    {

        if (head == NULL)
        {
            return -1;
        }
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        // Implement the dequeue() function
    }

    int front()
    {
        return head->val;
        // Implement the front() function
    }
};

int main()
{

    Queue q;

    cout << "is empty: " << q.isEmpty() << endl;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.enqueue(45);

    cout << "is empty: " << q.isEmpty() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;

    return 0;
}