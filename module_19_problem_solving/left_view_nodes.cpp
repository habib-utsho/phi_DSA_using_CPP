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

vector<int> getLeftViewNodes(Node *root)
{
    vector<pair<Node *, int>> v;
    if (!root)
        return {};

    // We can do it by frequency array ,  just need to take a max number of nodes fre array and make it false initially and inside if condition in while loop should be check the index is true or false
    queue<pair<Node *, int>> q;
    q.push({root, 1});

    v.push_back({root, 1});

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        Node *node = p.first;
        int level = p.second;
        q.pop();

        if (v.back().second != level)
        {
            // cout << "hey";
            v.push_back({node, level});
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    vector<int> vv;

    for (auto &p : v)
    {
        Node *node = p.first;
        if (node)
        {
            vv.push_back(node->val);
        }
    }

    return vv;
}

int main()
{
    Node *root = input_level_order();
    // output_level_order(root);
    vector<int> vv = getLeftViewNodes(root);
    // cout << vv.size() << endl;
    for (int val : vv)
    {
        cout << val << " ";
    }

    return 0;
}