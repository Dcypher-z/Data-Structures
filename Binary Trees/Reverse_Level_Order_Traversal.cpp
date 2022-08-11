#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;
};
Node* newNode(int data)
{
    Node * newnode = new Node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void printReverseLevelOrder(Node* root)
{
    stack<Node *> S;
    queue<Node *> Q;

    Q.push(root);
    while(Q.empty()==false)
    {
        root = Q.front();
        Q.pop();
        S.push(root);

        if(root->right)
        {
            Q.push(root->right);
        }
        if(root->left)
        {
            Q.push(root->left);
        }
    }
    while(S.empty()==false)
    {
        root = S.top();
        S.pop();
        cout<<root->data<<" ";
    }
     
}
int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printReverseLevelOrder(root);
    return 0;
}