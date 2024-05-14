#include "common.h"
#include <bits/stdc++.h>
using namespace std;

// method-1 : height of a binary tree - recursive
int height_1(node *root) {
  if (root == NULL)
    return 0;

  return (1 + max(height_1(root->left), height_1(root->right)));
}

// method-1 : height of a binary tree - iterative
int height_2(node *root) {
  if (root == NULL)
    return 0;

  int count = 0;
  queue<node *> q;
  q.push(root);

  while (!q.empty()) {
    int n = q.size();

    count++;

    for (int i = 0; i < n; i++) {
      node *temp = q.front();
      q.pop();

      if (temp->left)
        q.push(temp->left);
      if (temp->right)
        q.push(temp->right);
    }
  }

  return count;
}

int main() {
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

  cout << endl << height_2(root) << endl;
}