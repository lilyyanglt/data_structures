# Data Structures Notes

**Data Structures**

- The basic building blocks for data structures are mostly using a node structure, static arrays, dynamic arrays or linkedlists for their implementation. 
- For example, a linked list structure is built using a node 
- For example, dynamic arrays uses static array for its implementation
- For trees, it also uses node structure for its implementation except that it has a left and right pointer for pointing to its child nodes.

**Abstract Data Type (ADT)** 
* is the logical model representing real life structures, e.g priority queue, it's an ADT and so it has multiple ways to implement the structure, you can use binary heaps, or you can even use other data structure to implement it as long as you have a way to make sure the implementation will enable priority to be set for each element.
* it defines the types behavior our implemention should include
* but doesn't give details about implementation

| ADT | Concrete Implementation |
| --- | ----------------------- |
| list | <ul><li>static array</li><li>vector (cpp)</li>list (python)</ul> |
| graph | <ul><li>heap</li><li>tree</li></ul> |
| queue | <ul><li>dynamic array</li><li>linked list</li><li>doubly linked list</li></ul> |
| priority queue | <li>binary heap</li>

## Basic data structures

Linear

Linear datastructures has a clear beginning and end. Sequential structures.

* array (static and dynamic)
* linked list (singly and doubly)
* stack
* queue
* skip list

Non-Linear

Non-linear structures are associative structures that are not sequential

* graph
* hashtables
* tree (a tree is actually a type of graphs)


