#include<bits/stdc++.h>
#include"common.h"
using namespace std;

int main()
{
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


    cout<<"inorder : "; inorder(root);   cout<<endl;
    cout<<"preorder: "; preorder(root);  cout<<endl;
    cout<<"postorder : ";  postorder(root); cout<<endl;
}