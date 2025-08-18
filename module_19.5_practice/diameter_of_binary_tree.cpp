// https://leetcode.com/problems/diameter-of-binary-tree/description/

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

int maxDiameter = 0;

int max_height(Node *root)
{
    if (!root)
    {
        return 0;
    }
    //  if (!root->left && !root->right)
    //     return 1;

    int l = max_height(root->left);
    int r = max_height(root->right);

    int diameter = l + r;
    maxDiameter = max(diameter, maxDiameter);

    return max(l, r) + 1;
}

int main()
{
    Node *root = inputLevelBinaryTree();
    // outputLevelBinaryTree(root);
    int maxHeight = max_height(root);
    // cout << "max_height: " << maxHeight << endl;
    // cout << "max diameter: " << maxDiameter << endl;
    cout << maxDiameter << endl;

    return 0;
}