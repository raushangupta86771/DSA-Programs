#include <iostream>
#include <math.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
int heigth(Node *root)
{
    if (root == NULL)
        return 0;
    return max(heigth(root->left), heigth(root->right)) + 1;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(80);
    root->left->left = new Node(100);
    cout<<heigth(root);
    return 0;
}