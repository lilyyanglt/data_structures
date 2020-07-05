# Stack
- it's a one-ended linear data structure which models a real world stack by having 2 primary operations - push and pop
- structure that has LIFO behavior (last in is the first one out)

## Implementation
- can be implemented using dynamic arrays, linked lists or even sometimes doubly linked lists (in Java - java.util.LinkedList is actually a doubly linked list), or if you want to be really creative, you can use priority queue or a heap to implement a stack. 

## Real life of examples where Stack is used
- function calls are stack structure
- used by undo mechanisms in text editors
- used behind the scenes to support recursion by keeping track of previous function calls
- used for compiler syntax for checking matching brackets and braces ()
- can be used to do depth first search (DFS) on a graph

## Properties
1. container (static array, dynamic array, or linked list to implement a stack)
2. index that tracks the top - so we know how high the stack is - size

## Operations/Methods
1. `push` (add items on top of the stack)
2. `pop` (remove items from top of the stack and return the item)
3. `peek` (get the element from the top of the stack, but no removal of the item)
4. searching (O(n) - traverse all the items in the stack)
5. size (O(1))

## Famous algorithm problems using stack

- check if parenthese is valid

