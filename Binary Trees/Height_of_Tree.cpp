#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
};

Node *newNode(int data)
{
    Node *a = new Node();
    a->data = data;
    a->left = NULL;
    a->right = NULL;
    return a;
}
int height(int x, Node *root)
{
    if (root == NULL)
    {
        return x;
    }

    return max(height(x + 1, root->left), height(x + 1, root->right));
}
int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->right->left = newNode(4);
    root->right->left->left = newNode(5);
    cout << height(-1, root);
    return 0;
}