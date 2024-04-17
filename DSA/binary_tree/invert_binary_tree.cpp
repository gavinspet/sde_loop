#include<bits/stdc++.h>
#include"common.h"
using namespace std;


 // question link: https://leetcode.com/problems/invert-binary-tree/ 

/*
Intuition
In this question we have to Invert the binary tree.
So we use Post Order Treversal in which first we go in Left subtree and then in Right subtree then we return back to Parent node.
When we come back to the parent node we swap it's Left subtree and Right subtree.
*/

void invert_binary_tree(node *root)
{
    if(root == NULL)
    return;

    invert_binary_tree(root->left);
    invert_binary_tree(root->right);

    // swap nodes when it required
    // that's why post order traversal is used

    node *temp ;
    temp = root->left;
    root->left = root->right;
    root->right = temp;
}

int main()
{
     // making of a binary tree
    ///////////////////////////
    node *root = new node(1);
    node *temp1 = new node(2);
    node *temp2 = new node(3);
    root->left = temp1;
    root->right = temp2;

    node *temp3 = new node(4);
    node *temp4 = new node(5);
    temp1->left = temp3;
    temp1->right = temp4;

    node *temp5 = new node(6);
    node *temp6 = new node(7);
    temp2->left = temp5;
    temp2->right = temp6;
    //////////////////////////

    levelorder(root);

    cout<<"Inverted Tree :"<<endl;
    invert_binary_tree(root);

    levelorder(root);
    

}