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

stack<int> st;
void getLeafNodes(Node *root, stack<int> st)
{
    if (!root)
        return;

    if (!root->left && !root->right)
    {
        st.push(root->val);
    }

    getLeafNodes(root->left, st);
    getLeafNodes(root->right, st);
}

int main()
{
    int totalNodes1, totalNodes2;
    cin >> totalNodes1;
    Node *root1 = inputLevelBinaryTree(totalNodes1);

    cin >> totalNodes2;
    Node *root2 = inputLevelBinaryTree(totalNodes2);

    outputLevelBinaryTree(root1);
    cout << endl;
    cout << endl;
    outputLevelBinaryTree(root2);

    getLeafNodes(root1, st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}