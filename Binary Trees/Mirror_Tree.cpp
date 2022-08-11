#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
};
Node *newNode(int data)
{
    Node *newnode = new Node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void mirrorTree(Node *root1, Node **root2)
{
    if (root1 == NULL)
    {
        root2 = NULL;
        return;
    }
    *root2 = newNode(root1->data);
    mirrorTree(root1->right, &((*root2)->left));
    mirrorTree(root1->left, &((*root2)->right));
    return;
}
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data<<" ";
        inorder(root->right);
    }
    return;
}
int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    Node *root2 = NULL;
    mirrorTree(root, &root2);
    inorder(root);
    cout<<endl;
    inorder(root2);
    return 0;
}