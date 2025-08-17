// Problem statement
//         You are given an arbitrary binary tree.A binary tree is called special if every node of this tree has either zero or
//     two children.You have to determine if the given binary tree is special or not.
//     If the given binary tree is special,
//     return True.Else, return False to the given function.

//       Note :
//       1. A binary tree is a tree in which each node can have at most two children.
//       2. The given tree will be non -
//       empty i.e the number of non - NULL nodes will always be greater than or
//   equal to 1.
//   3. Multiple nodes in the tree can have the same values,
//     all values in the tree will be positive.
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
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        // Step-1
        Node *p = q.front();
        q.pop();

        // Step-2
        int l, r;
        Node *myLeft, *myRight;
        cin >> l >> r;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // Step -3
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void output_level_order(Node *root)
{

    if (!root)
    {
        cout << "Nothing";
        return;
    }

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        // Step-1
        Node *p = q.front();
        q.pop();

        // Step-2
        cout << p->val << " ";

        // Step -3
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}

bool isSpecial(Node *root)
{
    if (!root)
        return 0;

    if (root->val < 0)
        return false;

    if (!root->left && !root->right)
    {
        // cout << "root val: " << root->val << endl;
        return true;
    }

    // if ((root->left && !root->right) || (!root->left && root->right))
    if (!root->left || !root->right)
    {
        // cout << "root val: " << root->val << endl;
        return false;
    }

    bool l = isSpecial(root->left);
    bool r = isSpecial(root->right);

    // cout << root->val << " " << l << " " << r << endl;

    return l && r;
}

int main()
{

    Node *root = input_level_order();
    bool isTreeSpecial = isSpecial(root);

    if (isTreeSpecial)
        cout << "True";
    else
        cout << "False";

    return 0;
}