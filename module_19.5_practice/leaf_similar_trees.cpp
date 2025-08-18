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

Node *inputLevelBinaryTree(int totalNodes)
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

    totalNodes--;

    while (!q.empty() && totalNodes > 0)
    {

        totalNodes -= 2;

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

int count_leaf_nodes(Node *root, vector<int> &v)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
    {
        v.push_back(root->val);

        return 1;
    }

    int l = count_leaf_nodes(root->left, v);
    int r = count_leaf_nodes(root->right, v);

    return l + r;
}

int main()
{
    vector<int> v;
    vector<int> v2;

    int totalNodes1, totalNodes2;
    cin >> totalNodes1;
    Node *root1 = inputLevelBinaryTree(totalNodes1);

    cin >> totalNodes2;
    Node *root2 = inputLevelBinaryTree(totalNodes2);

    // outputLevelBinaryTree(root1);
    // cout << endl;
    // cout << endl;
    // outputLevelBinaryTree(root2);

    int countLeafNodes1 = count_leaf_nodes(root1, v);
    int countLeafNodes2 = count_leaf_nodes(root2, v2);
    // cout << endl;
    // cout << countLeafNodes1 << endl;
    // cout << countLeafNodes2 << endl;
    if (v == v2)
    {
        cout << "true";
    }
    else
        cout << "false";
    return 0;
}