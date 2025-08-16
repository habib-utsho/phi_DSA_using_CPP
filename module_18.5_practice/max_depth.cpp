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

void *output_level_order(Node *root)
{

    if (!root)
    {
        cout << "Nothing";
        return 0;
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

int max_depth(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1; // 1th idx

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l, r) + 1;
}

int main()
{

    Node *root = input_level_order();
    // output_level_order(root);
    int maxDepth = max_depth(root);
    cout << maxDepth;

    return 0;
}