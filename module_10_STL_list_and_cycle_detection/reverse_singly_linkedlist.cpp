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
void reverseList(Node *&head, Node *temp, Node *&tail)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverseList(head, temp->next, tail);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}
void printList(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    printList(temp->next);
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->next = tail;

    cout << "Head before reverse : " << head->val << endl;
    reverseList(head, head, tail);
    cout << "Head after reverse : " << head->val << endl;
    cout << "Tail after reverse : " << tail->val << endl;
    printList(head);
    return 0;
}