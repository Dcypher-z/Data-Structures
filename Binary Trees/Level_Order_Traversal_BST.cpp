#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};
Node *newNode(int data)
{
    Node *node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}
void printLevelOrder(Node *root)
{
    // Base Case
    if (root == NULL)
        return;

    // Create an empty queue for level order traversal
    queue<Node *> q;

    // Enqueue Root and initialize height
    q.push(root);

    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        Node *Node = q.front();
        cout << Node->data << " ";
        q.pop();

        /* Enqueue left child */
        if (Node->left != NULL)
            q.push(Node->left);

        /*Enqueue right child */
        if (Node->right != NULL)
            q.push(Node->right);
    }
}

// Driver program to test above functions
int main()
{
    // Let us create binary tree shown in above diagram
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}