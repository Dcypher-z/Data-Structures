#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int height (struct node* root)
{
    if(root==NULL)
        return 0;
    return 1+max(height(root->left), height(root->right));
}
int diameter(struct node* root)
{
    if(root==NULL)
    return 0;
    int left_height = height(root->left);
    int right_height = height(root->right);

    int left_diameter = diameter(root->left);
    int right_diameter = diameter(root->right);

    return max(left_height+right_height+1, max(left_diameter, right_diameter));
}
int main()
{

    /* Constructed binary tree is
            1
            / \
        2     3
        / \
    4     5
    */
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Function Call
    cout << "Diameter of the given binary tree is " << diameter(root);

    return 0;
}