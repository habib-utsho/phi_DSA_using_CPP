#include <bits/stdc++.h>;
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{

    Node a, b, c;
    a.val = 20;
    b.val = 30;
    c.val = 40;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    return 0;
}