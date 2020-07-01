# Linked List
> source: https://realpython.com/linked-lists-python/
> source: https://www.youtube.com/watch?v=RBSGKlAvoiM&t=4457s
> https://www.youtube.com/playlist?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P

* Building block: Node (each element in a linked list is referred to as a node)
* There are 2 types, singly and doubly
* linked list is a collection of nodes
* there's a head node (starting point of the linked list)
* there's a tail node (where the pointer is NULL)
* used to implement stacks and queues as well as graphs




## Real application

| singly | doubly | circular |
| ------ | ------ | -------- |
| <ul><li>it's most often used to implement stacks and queues without having to use a contigous block of memory like an array so you can dynamically allocate memory to your structure</li><li>used to implement hash tables</li></ul> | <ul><li>Browser - the back and forward buttons you click uses doubly linked list in the implementation</li><li>music player that has next / prev buttons</li><li>Undo-redo functionality that's in programs</li></ul>| <ul><li>Going around each player's turn in a multiplayer game</li><li>managing the application life cycle of a given operating system</li><li>Implementing a fibonacci heap</li> <p>The benefits of a circular linked list are very similar to a singly linked list , but the only difference is that you can define the starting point when you traverse the list</p></ul>

## Basic Structure

```cpp

struct node {
  int data;
  node *next;
}

```

```python


```
