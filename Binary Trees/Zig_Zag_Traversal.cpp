#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;

    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};

void zigzag(Node *root)
{

    if (!root)
        return;

    // declare two stacks
    stack<struct Node *> currentlevel;
    stack<struct Node *> nextlevel;

    // push the root
    currentlevel.push(root);

    // check if stack is empty
    bool lefttoright = true;
    while (!currentlevel.empty())
    {

        // pop out of stack
        struct Node *temp = currentlevel.top();
        currentlevel.pop();

        // if not null
        if (temp)
        {

            // print the data in it
            cout << temp->data << " ";

            // store data according to current
            // order.
            if (lefttoright)
            {
                if (temp->left)
                    nextlevel.push(temp->left);
                if (temp->right)
                    nextlevel.push(temp->right);
            }
            else
            {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }

        if (currentlevel.empty())
        {
            lefttoright = !lefttoright;
            swap(currentlevel, nextlevel);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    zigzag(root);
    return 0;
}