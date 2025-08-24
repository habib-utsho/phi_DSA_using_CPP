#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_level_order()
{
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
        return 0;

    root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }
    return root;
}

void output_level_order(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

void insert_in_bst(Node *root, int val)
{
    if (!root)
        root = new Node(val);

    if (val > root->val)
    {
        if (!root->right)
            root->right = new Node(val);
        else
            insert_in_bst(root->right, val);
    }

    else
    {
        if (!root->left)
            root->left = new Node(val);
        else
            insert_in_bst(root->left, val);
    }
}

int main()
{

    Node *root = input_level_order();
    output_level_order(root);
    cout << endl;

    int val;
    cin >> val;
    insert_in_bst(root, val);
    output_level_order(root);

    return 0;
}