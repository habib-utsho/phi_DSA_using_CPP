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

int totalNodes(Node *root)
{
    if (!root)
        return 0;

    int l = totalNodes(root->left);
    int r = totalNodes(root->right);

    return l + r + 1;
}

int max_depth(Node *root)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return 1;

    int l = max_depth(root->left);
    int r = max_depth(root->right);

    return max(l, r) + 1;
}

int main()
{

    Node *root = input_level_order();

    int total_nodes = totalNodes(root);
    int maxDepth = max_depth(root);
    // cout << total_nodes << " - " << maxDepth << endl;

    bool is_perfect = total_nodes == pow(2 , maxDepth) - 1;
    // cout << is_perfect << endl;
    if (is_perfect)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}