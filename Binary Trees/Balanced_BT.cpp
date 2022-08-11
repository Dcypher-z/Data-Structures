#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left, *right;

    Node(int key)
    {
        data = key;
        left = NULL;
        right = NULL;
    }
};
int height(Node* root)
{
    if(root==NULL)
    return 0;

    return 1+ max(height(root->right), height(root->left));
}

bool Balanced(Node* root)
{
    if(root==NULL)
        return 1;
    
    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh)<=1 && Balanced(root->left) && Balanced(root->right))
        return 1;
    return 0;
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(6);   
    cout<<Balanced(root);
    return 0;
}