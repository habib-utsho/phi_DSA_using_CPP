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

Node *convert_arr_to_bst(int arr[], int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *newNode = new Node(arr[mid]);
    Node *leftRoot = convert_arr_to_bst(arr, l, mid - 1);
    Node *rightRoot = convert_arr_to_bst(arr, mid + 1, r);

    newNode->left = leftRoot;
    newNode->right = rightRoot;

    return newNode;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = convert_arr_to_bst(arr, 0, n - 1);
    output_level_order(root);

    return 0;
}