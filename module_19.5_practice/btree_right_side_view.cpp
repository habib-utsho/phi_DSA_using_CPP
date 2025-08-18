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

vector<int> getRightViewNodes(Node *root)
{
    vector<pair<Node *, int>> v;
    if (!root)
        return {};

    queue<pair<Node *, int>> q;
    v.push_back({root, 1});
    q.push({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *pNode = p.first;
        int level = p.second;
        q.pop();

        if (v.back().second == level)
        {
            v.back().first->val = pNode->val;
        }
        else
            v.push_back(p);

        if (pNode->left)
            q.push({pNode->left, level + 1});
        if (pNode->right)
            q.push({pNode->right, level + 1});
    }

    vector<int> vv;
    for (auto pair : v)
    {
        vv.push_back(pair.first->val);
    }

    return vv;
}

int main()
{
    Node *root = inputLevelBinaryTree();
    outputLevelBinaryTree(root);
    cout << endl;
    vector<int> v = getRightViewNodes(root);
    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}