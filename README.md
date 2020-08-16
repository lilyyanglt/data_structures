# Data Structures
- My implementation of the different data structures and the key operations I am learning to be familiarized with them
- The tables below just makes it easier to navigate to the files and the operations I've implemented.
- Data structures are implemented in cpp, python, and hopefully Java and Javascript.

<h1>Table of Content</h1>

- [Data Structures](#data-structures)
  - [Summary of Complexity of each operation based on Structure](#summary-of-complexity-of-each-operation-based-on-structure)
  - [Python](#python)
  - [CPP](#cpp)
  - [Contribution and Review](#contribution-and-review)

## Summary of Complexity of each operation based on Structure
- special thanks to [gibsjose](https://github.com/gibsjose/cpp-cheat-sheet) for the image resource

![link](notes/images/Data%20Structures.png)

## Python

**Linear**

| link | constructor | methods | building block |
| ---- | ----------- | ------- | -------------- |
| [singly linked list](python/linear/linkedList/SLinkedList.py) | SLinkedList(<em>list</em>) | <li>`print_values()`</li><li>`get_head()`</li> | [Node]() |  
| [singly linked list v2](python/test/testSLinkedList_v2.py) <br><li>Uses Head Node only</li> | SLinkedList() | <li>`append(val)`</li><li>`prepend(val)`</li><li>`insert(pos, val)`</li><li>`delete(val)`</li><li>`get_head()`</li><li>`print_values()`</li> | [Node]() |
| [singly linked list v3](python/linear/linkedList/SLinkedList_v3.py) <br><li>Uses Head and Tail node</li> | SLinkedList() | <li>`append(val)`</li><li>`prepend(val)`</li><li>`insert(pos, val)`</li><li>`delete(val)`</li><li>`get_head()`</li><li>`print_values()`</li> | [Node]() |

**Non-Linear**
| link | constructor | methods | building block |
| ---- | ----------- | ------- | -------------- |


## CPP

Note: I will not be implementing using templates for the data structures. All structures will just be treated with the same data type (int) for ease of learning. This will greatly reduce the complexity of implementing the data structures and just learning about them in general. 

**Linear**

| link | constructor | methods | building block |
| ---- | ----------- | ------- | -------------- |
| [singly linked list](cpp/linear/linkedList/singlyLinkedList.cpp) | list | <li>`isEmpty` returns bool</li> <li>`append(value)` adds to the end of list</li><li>`prepend(value)` adds to beginning of list</li><li>`insert(value, index)` new node with `value` will be placed at `index` position</li><li>`remove(value)` removes `value` from list, throws exception when value not found</li><li>`reverseIter` reverses the list iteratively</li><li>`reverseRecurs` reverses the list recursively</li><li>`printData` prints the values of each node from linkedlist from beginning to end</li><li>`length` returns length of list</li> | Node, and uses only head pointer |

**Non-Linear**

| link | constructor | methods | building block |
| ---- | ----------- | ------- | -------------- |
| [Binary Search Tree](cpp/non_linear/binarySearchTree/binarySearchTree.cpp) | BST() | <li>`add(int value)`</li> adds a node to the binary search tree <li>`getRoot()` returns a TreeNode pointer to the root</li><li>`min(TreeNode * r)` takes in a pointer variable and returns a TreeNode pointer variable of the minimum value in a tree</li><li>`max(TreeNode * r)` takes in a pointer variable and returns a treeNode pointer variable of the maximum value in the tree</li><li>`find(int value, TreeNode * root)` finds the value of interest in the tree and returns bool of whether the value exists </li><li>`remove(int value)` removes the value from the tree</li> | [TreeNode](cpp/src/include/TreeNode.h) |

## Contribution and Review
* I am still learning so there might be mistakes or code could be written better. I would appreciate review and corrections from anyone. Please make a pull request!  