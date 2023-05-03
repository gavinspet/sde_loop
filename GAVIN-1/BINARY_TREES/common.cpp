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
void levelorder(node *root)
{
    if(root == NULL)
    return;

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        int n = q.size();

        for(int i = 0; i<n ;i++)
        {
            node* temp = q.front();
            q.pop();
            
            cout<<temp->val<<" ";

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }   
        cout<<endl;
    }
}