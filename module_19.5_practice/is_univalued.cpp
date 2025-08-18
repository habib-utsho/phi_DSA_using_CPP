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

Node *inputLevelBinaryTree()
{
    Node *root;
    int val;
    cin >> val;

    if (val == -1)
        root = NULL;
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = NULL;
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
            myRight = NULL;
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}
void outputLevelBinaryTree(Node *root)
{

    if (!root)
        return;

    queue<Node *> q;
    if (root)
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

bool is_univalued(Node *rootP, Node *root)
{
    if (!root)
        return true;

    if (root->val != rootP->val)
    {
        return false;
    }

    bool l = is_univalued(rootP, root->left);
    bool r = is_univalued(rootP, root->right);

    return l && r;
}

int main()
{

    Node *root = inputLevelBinaryTree();
    bool isUnivalued = is_univalued(root, root);

    if (isUnivalued)
        cout << "true";
    else
        cout << "false";

    return 0;
}