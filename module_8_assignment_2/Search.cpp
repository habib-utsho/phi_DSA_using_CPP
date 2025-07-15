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
int searchNumFunc(Node *head, int num)
{
    int ind = 0;
    bool isFound = false;
    Node *temp = head;
    while (temp != NULL)
    {
        ind++;
        if (temp->val == num)
        {
            isFound = true;
            break;
        }
        temp = temp->next;
    }

    return isFound ? ind - 1 : -1;
}
void printLinkedList(Node *temp)
{

    if (temp == NULL)
    {
        return;
    }

    cout << temp->val << " ";
    printLinkedList(temp->next);
}
int main()
{
    Node *head = NULL;
    Node *tail = head;

    int t;
    cin >> t;

    while (t--)
    {

        int val, searchNum;
        while (true)
        {
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        cin >> searchNum;
        int searchOutput = searchNumFunc(head, searchNum);
        cout << searchOutput << endl;
        head = NULL;
        tail = head;
    }
    return 0;
}