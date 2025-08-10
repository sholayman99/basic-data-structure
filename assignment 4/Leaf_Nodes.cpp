#include <bits/stdc++.h>
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

Node *input_binary()
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
        Node *p = q.front();
        q.pop();

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
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void sort_leaf_nodes(Node *root, vector<int> &leaf)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
    {
        leaf.push_back(root->val);
    }

    sort_leaf_nodes(root->left,leaf);
    sort_leaf_nodes(root->right,leaf);
}

int main()
{
    Node *root = input_binary();
    vector<int> v;
    sort_leaf_nodes(root, v);
    sort(v.begin(),v.end(),std::greater<int>());
    for(int val : v)
    {
        cout << val << " ";
    }
    return 0;
}