#include<bits/stdc++.h>
#include"common.h"
using namespace std;

// inorder traversal of binary tree
void inorder(node *root)
{
    if(root == NULL)
    return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

// preorder traversal of binary tree
void preorder(node *root)
{
    if(root == NULL)
    return;
    
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

// postorder traversal of binary tree
void postorder(node *root)
{
    if(root == NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

// level order traversal of binary tree
void levelorder(node *root);