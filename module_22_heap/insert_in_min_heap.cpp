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

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;
    v.push_back(val);

    int curr_idx = v.size() - 1;

    while (curr_idx != 0)
    {
        int par_idx = (curr_idx - 1) / 2;
        if (v[par_idx] > v[curr_idx])
            swap(v[par_idx], v[curr_idx]);
        else
            break;
        curr_idx = par_idx;
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}