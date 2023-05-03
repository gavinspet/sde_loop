#include<bits/stdc++.h>
using namespace std;

// structure of binary tree
// no parameter structure of binary tree
struct node
{
    int val;
    node * left;
    node * right;

// parameter passed to biinary tree
node(int x)
{
    this->val = x;
    this->left = NULL;
    this->right = NULL;
}

};





// inorder traversal of binary tree
void inorder(node *root);

// preorder traversal of binary tree
void preorder(node *root);

// postorder traversal of binary tree
void postorder(node *root);

// level order traversal of binary tree
void levelorder(node *root);