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
     @return - node pointer with the minimum value
    */

    TreeNode* min(TreeNode * r) {
      if(r->left == nullptr) return r;

      return min(r->left);
    }

    /*
      Finds the max of the tree recursively
      @param r - this is the pointer type variable
      @return - the max value of the bst tree
    */
    TreeNode* max(TreeNode * r) {
      if(r->right == nullptr) return r;

      return max(r->right);
    }

    /*
      Finds the value of interest in BST
      @param - value in int that is of interest
    */

    bool find(int value, TreeNode * root) {
      if (root == nullptr) return false;

      if (value > root->data) {
        return find(value, root->right);
      } else if (value < root->data) {
        return find(value, root->left);
      } else {
        return true;
      }
    }

    /*
      Removing the node matching the value of interest
      @param value - the valud of the node to be deleted
    */
    void remove(TreeNode *& r, int value) {

      std::cout << "calling remove" << std::endl;
      if (r == nullptr) {
      throw "Tree empty, Nothing to delete!";
      return;
      }

      // find the node with the value matching value to be deleted
      TreeNode *parent = nullptr;
      TreeNode *current = r;
      bool isFound = false;

      while (!isFound && current != nullptr) {
          if (current->data == value) {
            isFound = true;
          } else {
            parent = current;
            (current->data > value) ? current = current->left : current = current->right;
          }
        }
      
      if(!isFound) {
        std::cout << "Nothing Found \n";
        throw "Value not found, nothing to delete";
        return;
      } else {
        
        std::cout << "Found" << std::endl;

        // node to delete is a leaf node
        if (current->right == nullptr && current->left == nullptr) {
          
          std::cout << "Node is a leaf node" << std::endl;

          // delete root node
          if (parent == nullptr) {
            std::cout << "Node is root" << std::endl;
            r = nullptr;
            delete current;
          } else if (parent->left == current) {
            parent->left = nullptr;
            delete current;
          } else {
            parent->right = nullptr;
            delete current;
          }

        // node has only left child
        } else if (current->right == nullptr) {
          
          std::cout << "Node only has left child" << std::endl;

          if (parent == nullptr) {
            r = current->left;
            delete current;
          } else if (parent->left == current) {
            parent->left = current->left;
            delete current;
          } else {
            parent->right = current->left; 
            delete current;
          }

        // node only has right child
        } else if (current->left == nullptr) {
          
          std::cout << "Node only has right child" << std::endl;

          if (parent == nullptr) {
            r = current->right;
            delete current;
          } else if (parent->left == current) {
            parent->left = current->right;
            delete current;
          } else {
            parent->right = current->right;
            delete current;
          }
        } else {

          std::cout << "Node only has 2 children" << std::endl;
        // the tricky part: when the node to be deleted has 2 children
        // we need to either:
        /*
           1. find the minimum value of the node on the right subtree and change the node value to be deleted into that value
              Then, delete the min node from the right subtree since it will not have a left child for sure, so this is recursive
              so that we can run this function to get to the scenario with the 1 child
          2. Or you can find the maximum value of the nod on the left subtree and change the node value to be deleted into that value. We know for sure that the node with the max value will not have a right child so this is also recursive and can delete the value 
        */

        // this is using the approach of finding the min value of the right subtree, so passing current->right as the root for the right subtree
        TreeNode* minNode = min(current->right);
        printf("smallest value on the right of %d is %d\n", current->data, minNode->data);

        current->data = minNode->data;

        remove(current->right, minNode->data);
        }

      }
    
    }

   void remove(int value) {
     remove(root, value);
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
  binarySearchTree.add(24);
  binarySearchTree.add(22);
  binarySearchTree.add(26);
  binarySearchTree.add(21);
  binarySearchTree.add(23);
  binarySearchTree.add(9);
  binarySearchTree.add(7);
  binarySearchTree.add(25);

  inorder(binarySearchTree.getRoot());
  std::cout << std::endl;

  std::cout << "Min value is: " << binarySearchTree.min(binarySearchTree.getRoot())->data << std::endl;

  std::cout << "Root value is: " << binarySearchTree.getRoot()->data << std::endl;

  assert(binarySearchTree.find(10, binarySearchTree.getRoot()) == true);

  assert(binarySearchTree.find(45, binarySearchTree.getRoot()) == false);

  // test remove function
  
  test node to remove only has right child
  try {
    binarySearchTree.remove(3);
  } catch (const char* msg) {
    std::cerr << msg << std::endl;
  } 

  inorder(binarySearchTree.getRoot());
  std::cout << "\n";

  // test node to remove only has left child
  try {
      binarySearchTree.remove(9);
    } catch (const char* msg) {
      std::cerr << msg << std::endl;
    } 

  inorder(binarySearchTree.getRoot());
  std::cout << "\n";

  // test node not found
  try {
    binarySearchTree.remove(55);
  } catch (const char* msg) {
    std::cerr << msg << std::endl;
  } 

  inorder(binarySearchTree.getRoot());
  std::cout << "\n";

  // test node is root

  try {
    binarySearchTree.remove(10);
  } catch (const char* msg) {
    std::cerr << msg << std::endl;
  } 

  inorder(binarySearchTree.getRoot());
  std::cout << "\n";

  // root should now be 14
  std::cout << "Root value is: " << binarySearchTree.getRoot()->data << std::endl;

  // test node has 2 children

  try {
    binarySearchTree.remove(24);
  } catch (const char* msg) {
    std::cerr << msg << std::endl;
  } 

  std::cout << "Printing after remove" << std::endl;
  inorder(binarySearchTree.getRoot());
  std::cout << "\n";

  return 0;
}