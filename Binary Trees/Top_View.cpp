#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
};
void topView(Node *root)
{
    // queue for holding nodes and their horizontal
    // distance from the root node
    queue<pair<Node *, int>> q;

    // pushing root node with distance 0
    q.push(make_pair(root, 0));

    // hd is current node's horizontal distance from root node
    // l is current left min horizontal distance (or max in magnitude) so far from th eroot node
    // r is current right max horizontal distance so far from the root node

    int hd = 0, l = 0, r = 0;

    // stack is for holding left node's data because
    // they will appear in reverse order that is why
    // using stack
    stack<int> left;

    // vector is for holding right node's data
    vector<int> right;

    Node *node;

    while (q.size())
    {

        node = q.front().first;
        hd = q.front().second;

        if (hd < l)
        {
            left.push(node->data);
            l = hd;
        }
        else if (hd > r)
        {
            right.push_back(node->data);
            r = hd;
        }

        if (node->left)
        {
            q.push(make_pair(node->left, hd - 1));
        }
        if (node->right)
        {
            q.push(make_pair(node->right, hd + 1));
        }

        q.pop();
    }
    // printing the left node's data in reverse order
    while (left.size())
    {
        cout << left.top() << " ";
        left.pop();
    }

    // then printing the root node's data
    cout << root->data << " ";

    // finally printing the right node's data
    for (auto x : right)
    {
        cout << x << " ";
    }
}
int main()
{

    return 0;
}