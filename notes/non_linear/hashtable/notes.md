Aug 7, 2020

# Hashtable
* Hashtable requires the use of hash functions to create a key


## Implementation

### Using an array of linkedlists (Each root node is an element of the array)

Time Complexity: if high number of collision occurs, then search would be O(N) - N is the number of keys, but generally look up is O(1)

Benefits: Good implementation will keep collisions to a minimum and so look up is really fast.

### Using a binary search tree
Time Complexity: Search for a specific item would be O(log N)

Benefits: Uses less space than using array of linkedlist



## Source

* CTCI