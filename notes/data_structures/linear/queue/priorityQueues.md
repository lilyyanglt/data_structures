# Priority Queue

## What is it?
- operates similar to a normal queue but each element has a certain priority
- elements are removed from the priority queue based on the priority of each element (higher priority elements are removed first)
- elements must be comparable so that relative priority order can be assigned to each element
- There's a min PQ - which has internal priority where the smallest element have the highest priority so it's removed first
- There's also max PQ - which has internal priority where the biggest element have the highest priority so it's removed first

## Real life examples of where PQ is used

- It's used in certain implementations of Dijkstra's shortest path algorithm
- Anytime you need to dynamically fetch for the "next best" or the "next worst" element
- Used in huffman coding (which is often used for lossless data compression)
- Best First Search (many of them), which uses PQ to continuously grab the next most promising node 
- used by Minimum Spanning Tree (MST) algorithms
- priority queues are especially important for graph theory algorithms

## Implementation
- you can use dynamic arrays, linked lists, heaps (min or max heap) and also binary trees, but most common is using heaps for implementation because this gives the best possible time complexity.


## Example
- say you have a list of integers 
- impose on them that the queue must be from least to greatest, so the higher priority items will have smaller value - and they will be removed first

## Operations
- poll - remove elements with highest priority
- add/push - adding elements to the end of the queue
- peek

## Time Complexity 
- Based on implementing the priority queue using binary heap. 

| Operations | Runtime |
| ------------ | ------- |
| Binary Heap construction (this is actually forming the basis for heap sort)| O(n) |
| Polling (need to potentially restore the heap invariant) | O(log (n)) |
| Peeking (seeing value on top of heap) | O(1) |
| Adding (because possibly having reshuffle the heap by bubbling up the value) | O(log(n)) |
| Remove element that's not root element (Naive removing) | O(n) generally you don't do this especially if you are removing a lot|
| Advanced removing with hash table* | O(log(n))
| Naive contains | O(n) |
| checks contains with hash table* | O(1) |

* Using a hash table to optimize the operatios will add some overhead to the binary heap implementation and will take up some extra space O(n)

## Example Problems

### Turning a min PQ into a max PQ 
- Problem Statement: Often most programming languages' standard library only provide a min PQ which sorts by smallest elements first, so to convert to a max PQ, you can use the comparable interface that's provided to negative and achieve a max heap. 
  1. You can negate the interface if it's x >= y, you can just change to x<=y
  1. Negative the values that you are inserting into the priority queue and then you can negate it again so when the value is being dequeued, you will get the max value first. 

### Adding elements to Binary Heap
- 