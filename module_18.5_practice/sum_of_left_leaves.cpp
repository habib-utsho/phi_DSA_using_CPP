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

Node *input_level_order_btree()
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
        // Step 1: Node k ber kore ana
        Node *p = q.front();
        q.pop();

        // Step 2: Oi node k niye kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
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

        // Step 3: oi node er children push
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

void output_level_order_btree(Node *root)

{
    if (root == NULL)
    {
        cout << "No tree";
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        // Step 1: Node k ber kore ana
        Node *front = q.front();
        q.pop();

        // Step 2: Oi node k niye kaj
        cout << front->val << " ";

        // Step 3: oi node er children push
        if (front->left)
            q.push(front->left);
        if (front->right)
            q.push(front->right);
    }
}

int sum_left_leaves(Node *root)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return root->val;

    int lCount = sum_left_leaves(root->left);
    // int rCount = sum_left_leaves(root->right);

    int rCount;
    if (root->right)
    {
        if (root->right->left || root->right->right)
        {
            rCount = sum_left_leaves(root->right);
        }
        else
        {
            rCount = 0;
        }
    }
    else
    {
        rCount = 0;
    }

    return lCount + rCount;
}

int main()
{
    Node *root = input_level_order_btree();

    // post_order_traversal(root);
    int sum;
    if (!root->left && !root->right)
    {
        sum = 0;
    }
    else
    {
        sum = sum_left_leaves(root);
    }
    cout << sum << endl;
    // output_level_order_btree(root);

    return 0;
}