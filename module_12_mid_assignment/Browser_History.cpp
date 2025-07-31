#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
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

void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << head->val << " ";
    print(head->next);
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    cin.ignore();
    Node *temp = head;
    while (q--)
    {
        // cout << i << endl;
        string searchQ;
        getline(cin, searchQ);
        // cout << searchQ << ": " << temp->val << endl;

        bool isVisit = searchQ.substr(0, 5) == "visit";
        bool isPrev = searchQ == "prev";
        bool isNext = searchQ == "next";
        if (isVisit)
        {
            string visitAddress = searchQ.substr(6);
            // cout << "should visit: " << visitAddress << endl;
            bool isAddressAvailable = false;
            Node *prevTemp = temp;
            Node *curr = head;
            while (curr != NULL)
            {
                if (curr->val == visitAddress)
                {
                    isAddressAvailable = true;
                    cout << visitAddress << endl;
                    temp = curr;
                    break;
                }
                curr = curr->next;
            }
            if (!isAddressAvailable)
            {

                // cout << "address not found: " << temp2->val << endl;
                // cout << "address not found: " << temp << " " << temp2 << endl;
                temp = prevTemp;
                // cout << "q: " << q << endl;
                cout << "Not Available" << endl;
            }
        }
        else if (isPrev)
        {
            if (temp->prev != NULL)
            {
                temp = temp->prev;
                cout << temp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (isNext)
        {
            if (temp->next != NULL)
            {
                temp = temp->next;
                cout << temp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }

        // cout << isVisit << " " << searchQ << endl;
    }

    // print(head);

    return 0;
}