# Binary Tree
- Each node can have at most 2 children
- For each level i, the maximum number of nodes is $2^i$
- the mathmatical formulas listed below for each of the differen binary trees are helpful when we deal with the cost of binary tree operations

## Table of Content:

  - [Full Binary Tree (aka strict or proper binary tree)](#full-binary-tree-aka-strict-or-proper-binary-tree)
  - [Complete Binary Tree](#complete-binary-tree)
  - [Perfect Binary Tree](#perfect-binary-tree)
  - [Balanced Binary Tree](#balanced-binary-tree)
  - [Implementation](#implementation)
  - [Operations](#operations)
  - [Practical Example of applying GP (Geometric progression) concepts](#practical-example-of-applying-gp-geometric-progression-concepts)

## Full Binary Tree (aka strict or proper binary tree)
- is a tree in which every node has either 0 or 2 children (ie: cannot have 1 child) and can appear at all levels
- total number of nodes n is at least $n = 2h + 1$ and at most $n = 2^{h+1}-1$ and h is the height of the tree

## Complete Binary Tree
- All levels except possibly the last are completely filled and all nodes are as left as possible
- this can be represented using an array
- min height of a complete binary tree is $\left \lfloor log{_2}(n)  \right \rfloor$ 

## Perfect Binary Tree
- All levels are completely filled, meaning that the number of nodes $n = 2^{h+1}-1$
- height of a perfect binary tree is log<sub>2</sub>(n + 1) - 1
- its also a complete binary tree

## Balanced Binary Tree
- leetcode definition: a bst is balanced if and only if the height of the 2 subtrees never differ by more than one
- Difference between the height of left and right subtree for every node is not more than 1
- difference = $|height of left subtree - height of right subtree|$
- If there are N total nodes, the depth is roughly log(n) - n is the total number of nodes
- A tree is balanced enough to ensure O(log n) times for insert and find operations, but not necessarily as balanced as it could be which is a perfect balanced tree where the difference in height is = 0
- Common types of balanced trees are Red Black Trees and AVL trees.

## Implementation
- dynamically create nodes with data, left pointer, right pointer
- arrays - it's used for implementation for complete binary arrays
  - left child = 2i + 1
  - right child = 2i + 2 

## Operations
The time complexity of these operations are proportial to the h of the tree rather than the number of nodes, so if that's the case, then we'd want to make sure our tree is dense (close to complete or perfect binary tree), and dense meaning that we'd want to have a small of a height as possible. 
- `search`
- `insert`
- `remove`

## Practical Example of applying GP (Geometric progression) concepts
- A binary tree, is actually just a geometric sequence:

1 + 2 + 4 + 8... 

| nth term | level | # of nodes ($T_{n}$)|
| -------- | ----- | ---------- |
| 1 | 0 | 1 | 
| 2 | 1 | 2 |
| 3 | 2 | 4 | 
| 4 | 3 | 8 |

- **General Term:** $T_{n} = 2^{n - 1}$  
- This is the formula for finding the value at nth term, to find out how many nodes are at term 5

- **height of a tree:** the height of this tree is nth term - 1, so then n - 1 is the height of the tree. 

- **sum of the geometric sequence:** $S(n) = a(r^{n} - 1)/r - 1$
- in this case S(n) is the total number of nodes, and to find that, we know that r is always 2, and the first term is always 1 so we have $S(n) = 1(2^{n} - 1)/2 - 1$ which is the same as $S(n) = 2^{n} - 1$ now if h + 1 = n, we can replace n with h + 1. $S(h + 1) = 2^{h + 1} - 1$

so to answer the following question how many recursive calls will be required:

finding the sum of the nodes at nth term = $2^{n} - 1$
- so the total number of calls is 15 for this algorithm, which also means that the runtime complexity is $O(2^n)$ 

```cpp

int f(int n) {
  if (n <= 1) return 1 // this is our a value - starting value

  return f(n - 1) + f(n - 1) 

}
```
* So in general, usually the compleixty of a binary tree, is O($branches^{depth}$) and depth is roughly height of a tree when it's complete or full binary tree

## Binary Tree Traversal

* There are 2 types of traversal, you can do Breadth first search, or Depth first search and in depth first search, you can do: pre-order, in-order, and post-order, and the most common one is in-order.

### in-order
- in-order means to 'visit'( or print) the left branch, then the current node, and finally the right branch
- when performed on a binary search tree, this is visiting the nodes in ascending order:

     [4]
  [2]   [5]
[1][3] [6][7]

[1,2,3,4,5,6,7]

```cpp

void inOrderTraversal(TreeNode *&node) {
  if (node != nullptr) {
    inOrderTraversal(node->left);
    visit(node);
    inOrderTraversal(node->right);
  }
}
```

### Pre-order traversal
* pre-order visits the current node before it's child nodes
* the root is always the node that's visited

```cpp

void inOrderTraversal(TreeNode *&node) {
  if (node != nullptr) {
    visit(node);
    inOrderTraversal(node->left);
    inOrderTraversal(node->right);
  }
}
```

### Post-order traversal
* post-order visits the children nodes first before the current node
* root is always last node visited

```cpp

void inOrderTraversal(TreeNode *&node) {
  if (node != nullptr) {
    inOrderTraversal(node->left);
    inOrderTraversal(node->right);
    visit(node);
  }
}
```
