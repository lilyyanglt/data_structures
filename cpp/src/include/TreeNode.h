#ifndef TREE_NODE_H
#define TREE_NODE_H

struct TreeNode {
  int data;
  TreeNode *left, *right;

  TreeNode(int x) : data(x), left(nullptr), right(nullptr) {} 
  ~TreeNode() {}
};

#endif // TREE_NODE_H
