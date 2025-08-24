// https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/

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

int min_diff = INT_MAX;
int prev_val = -1;

// In order
void getMinDiff(Node *root)
{
    if (!root)
        return;

    getMinDiff(root->left);

    if (prev_val != -1)
        min_diff = min(min_diff, abs(root->val - prev_val));
    prev_val = root->val;

    getMinDiff(root->right);
}

int main()
{
    Node *root = input_level_order();
    getMinDiff(root);
    cout << min_diff << endl;

    return 0;
}