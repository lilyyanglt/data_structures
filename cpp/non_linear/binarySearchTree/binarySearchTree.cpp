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

  protected: 
    /*
      This is a protected function that's not meant to be called outside of the instance
      @param r - is a reference to the pointer passed
      @param x - is the value of the node
    */
    void add(int x, TreeNode *& r) {
      if (r == nullptr) {
        TreeNode *newNode = new TreeNode(x);
        r = newNode;
        return;
      } else {
        if (r->data >= x) {
          add(x, r->left);
        } else {
          add(x, r->right);
        }
      }
    }

  public:
    BST() : root(nullptr) {}

    /*
      @return copy of the pointer variable to root
    */

    TreeNode* getRoot() {
      return root;
    }

    /*
      This is the function available to users
      @param x - the data of the new node to be added to the tree
    */
    void add(int x) {
      add(x, root);
    }

    /*
     Find the min of the tree recursively
     @param r - is the pointer type variable
     @return - the min value of the tree in int
    */

    int min(TreeNode * r) {
      if(r->left == nullptr) return r->data;

      return min(r->left);
    }

    /*
      Finds the max of the tree recursively
      @param r - this is the pointer type variable
      @return - the max value of the bst tree
    */
    int max(TreeNode * r) {
      if(r->right == nullptr) return r->data;

      return max(r->right);
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

  binarySearchTree.add(10);
  binarySearchTree.add(20);
  binarySearchTree.add(3);
  binarySearchTree.add(14);
  binarySearchTree.add(17);

  inorder(binarySearchTree.getRoot());
  std::cout << std::endl;

  std::cout << "Min value is: " << binarySearchTree.min(binarySearchTree.getRoot()) << std::endl;

  std::cout << "Root value is: " << binarySearchTree.getRoot()->data << std::endl;

  return 0;
}