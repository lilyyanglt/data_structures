# Binary Tree
- Each node can have at most 2 children
- For each level i, the maximum number of nodes is $2^i$
- the mathmatical formulas listed below for each of the differen binary trees are helpful when we deal with the cost of binary tree operations

1. [Full](#01)
2. [Complete](#02)
3. [Perfect](#03)
4. [Balanced Binary Tree](#04)

## Full Binary Tree (aka strict or proper binary tree)
- is a tree in which every node has either 0 or 2 children (ie: cannot have 1 child)
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
- Difference between the height of left and right subtree for every node is not more than 1
- difference = $|height of left subtree - height of right subtree|$

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