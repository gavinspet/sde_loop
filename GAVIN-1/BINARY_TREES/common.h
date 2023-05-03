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

// height of a binary tree
int height(node *root);


///////////////////////////////////
///////  basic tree traversals ////
// inorder traversal of binary tree - recursive
void inorder(node *root);
// preorder traversal of binary tree - recursive
void preorder(node *root);
// postorder traversal of binary tree - recursive
void postorder(node *root);
// level order traversal of binary tree - iterative
void levelorder(node *root);

void inorder_iterative(node *root);
void preorder_iterative(node *root);
void postorder_iterative(node *root);
