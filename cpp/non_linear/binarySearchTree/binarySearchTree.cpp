/*
  Aug 13, 2020
  Author: Lily Yang
  My own simple implementation of a binary search tree

*/

#include "../../src/include/TreeNode.h"
#include <iostream>

class BST {
  private:
    TreeNode *root;

  public:
    BST() : root(nullptr) {}

    TreeNode* getRoot() {
      return root;
    }

    void add2(int x, TreeNode *& r) {
      if (r == nullptr) {
        TreeNode *newNode = new TreeNode(x);
        r = newNode;
        return;
      } else {
        if (r->data >= x) {
          add2(x, r->left);
        } else {
          add2(x, r->right);
        }
      }
    }

    void add2(int x) {
      add2(x, root);
    }

};

/* if my bst tree is created properly, then running in order traversal will 
   produce a sorted order arrangement of the values, so created this to test
   my tree implementation
   @param root - this is the root of the tree  
*/ 
void inorder(TreeNode* root) {
  if (root == nullptr) {
    return;
  }
  inorder(root->left);
  std::cout << " " << root->data;
  inorder(root->right);
}

int main(void) {

  BST binarySearchTree;

  binarySearchTree.add2(10);
  binarySearchTree.add2(20);
  binarySearchTree.add2(3);
  binarySearchTree.add2(14);
  binarySearchTree.add2(17);

  inorder(binarySearchTree.getRoot());
  std::cout << std::endl;
  return 0;
}