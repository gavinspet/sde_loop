#include "common.h"
#include <bits/stdc++.h>
using namespace std;

void display(std::vector<int> &nums) {
  // std::cout<<std::endl;
  for (int i = 0; i < nums.size(); i++) {
    std::cout << nums[i] << " ";
  }
  std::cout << std::endl;
}

void reverse_level_order(node *root) {
  if (root == NULL)
    return;

  queue<node *> q;
  q.push(root);

  while (!q.empty()) {
    int n = q.size();

    vector<int> v;

    for (int i = 0; i < n; i++) {
      node *temp = q.front();
      v.push_back(temp->val);
      q.pop();

      if (temp->left)
        q.push(temp->left);
      if (temp->right)
        q.push(temp->right);
    }

    reverse(v.begin(), v.end());
    display(v);
  }
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

  reverse_level_order(root);
}