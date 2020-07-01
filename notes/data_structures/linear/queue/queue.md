# Queue
> source: https://www.youtube.com/watch?v=RBSGKlAvoiM&t=4459s

## What is a queue?
- it's a linear data structures that models real world queue
- FIFO (first in first out)

## Real life example of a queue
- can be used efficiently to keep track of the x most recently added elements
- web server request management where you want to first come first serve (at any given moment you can only serve 5 people, if 12 requests come in, so you process the 5 and the rest of the requests and put the rest of them in a queue and then you can dequeue for the next request)
- also used in graph theory where you use a queue to perform breadth first search (BFS)

## How Queues used to do BFS
- BFS is an operation done on a graph (network)- to do a traversal
  - objective is to start at a node 
    - unvisited, on the frontier (the node you are at), visited
    - cannot access a lonely node that's not connected

- to use a queue to do this BFS, here's the algorithm:

Let Q be a Queue structure
Q.enqueue (when you are at a starting node)
starting_node.visited = true

While Q is not empty Do:
  - node = Q.dequeue()

    for neighbor in neighbours(node):
      if neighbour has not been visited:
        neighbour.visited = true
        Q.enqueue(neighbour)

## Implementation
- usually you can use dynamic array, linked list, or even stacks for the implementation
- you start with 2 pointers: Head and Tail
- Enqueue - you move the tail pointer
- Dequeue - you move the head pointer and then clean up the space (using garbage collection in java or you manually clean it in other languages)

## Key Operations and Time Complexity

| operation | runtime |
| --------- | ------- |
| `enqueue` (aka adding, offering) <li>adding elements to end of the queue</li> | O(1) |
| `dequeue` (aka polling, removing) <li>returns the element from the front </li><li> removing elements from the front of the queue </li> | O(1) |
| `peeking` <li>When you grab the element from the front without removing</li> | O(1) | 
| contains/search for certain elements if it exists | O(n) |
| removal from middle of list | O(n) | 
| is empty | O(1) |


