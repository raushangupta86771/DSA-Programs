#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int prevv = INT_MIN;
bool isBST(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isBST(root->left) == false)
    {
        return false;
    }
    if (root->key > prevv)
    {
        return false;
    }
    prevv = root->key;
    return isBST(root->right);
}
Node *insert(Node *root, char c)
{
    if (root == NULL)
    {
        Node *temp = new Node(c);
        return temp;
    }
    if (root->key > c)
    {
        root->left = insert(root->left, c);
    }
    else
    {
        root->right = insert(root->right, c);
    }
    return root;
}
void inorder_traversal(Node *root)
{
    if (root == NULL)
        return;
    // Visit Left subNode
    inorder_traversal(root->left);
    // Print the data
    cout << root->key << " ";
    // Visit right subNode
    inorder_traversal(root->right);
}
int maxDepth(Node *root)
{
    if (root == NULL)
        return -1;
    else
    {
        int lDepth = maxDepth(root->left);
        int rDepth = maxDepth(root->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
int height(Node *Node)
{
    if (Node == NULL)
        return 0;
    return 1 + max(height(Node->left),
                   height(Node->right));
}
bool isBalanced(Node *root)
{
    int lh;
    int rh;
    if (root == NULL)
        return 1;

    lh = height(root->left);
    rh = height(root->right);

    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}
int main()
{
    string s;
    cout << "Enter first name : ";
    cin >> s;
    cout << endl;
    Node *root = new Node(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        insert(root, s[i]);
    }
    string city;
    cout << "Enter city name : ";
    cin >> city;
    for (int i = 0; i < city.length(); i++)
    {
        insert(root, city[i]);
    }
    cout << "Inorder Traversal – \n";
    inorder_traversal(root);
    int height = maxDepth(root);
    cout << "\nHeight of Tree : " << height << endl;
    if (!isBalanced == true)
    {
        cout << "\nTree is balanced\n";
    }
    else
    {
        cout << "\nTree is not balanced\n";
    }
    return 0;
}