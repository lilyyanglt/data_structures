Aug 7, 2020

# Hashtable
* Hashtable requires the use of hash functions to create a key
* It's used for quick search at constant time 
* supports delete, insert, and search operations 

## Implementation

1. First implementation approach is to use simple direct access with keys being the index of an array
   * this presents 2 problems:

| problem | solution |
| ------- | -------- | 
| Keys might not be integers | using `prehash` to map any keys to non-negative integers, the non-integer objects must be immutable, cannot be changed because if you prehash it and the object can be changed, then you won't be able to find it later in your hash table, that's why you can't hash a list or a set or any other mutable objects. If you hash an integer, it will just give you back that integer. This prehash operation in python is called `hash()`|
| Using direct access approach uses a lot of memory | use `hashing` which is different from `prehash`. What hashing does is that for a universal number of possible keys to map it to a 0 -> m-1 possible values. Say you have reserved space that only contains 10 slots, then you can use some hashing algorithm so map keys to 0 -> m-1 slots, now the problem with this is the pigeonhole effect. When you have more values than slots, you are bound to have multiple keys being mapped to the same slot- this is known as `collision`| 

* Approaches to solve collision problem
  1. Chaining
    * This approach is to store the values in a linkedlist for any keys that are hashed to be the same value. Worst case for this though is O(n) because if you map all the keys to the same slot, then you end up with one slot with a linkedlist and so finding the item is O(n). The reason why hashing isn't O(n) in practice is because of randomization.
    * The proof for why it's not O(n) depends on an assumption: It's really unrealistic called `simple uniform hashing` to show that chaining works. The assumption states that each key is equally likely to be hashed to any slot of the table, independent of where the other keys hashing. 
    * Hash function maps your universe to a set of {0,1,2,3....m-1}
    * Analysis: The expected length of a chain for n keys and m slots is n/m, meaning that the probability for all keys going into an m slot is n/m = alpha which is the load factor, each key has 1/m chance of going into the slot. As long as you set your m to the right value so space is always O(1). 
    * running time is O(1 + length of our chain), always pay the cost of hash function which we assume to take constant time. 

  2. Linear Probing
      * This strategy suggests that if our hash function returns an index that is already filled, move to the next index
  3. Resizing the Array 
  4. Open Addressing

* How to build a hash function? How to implement it?
  1. division method: h(k) = key mod m (this is bad if m has some common factor with k, for example if k is even all the time and m is even all the time so you only use half of the table. You should choose prime for m) - works a lot of time but not always
  2. multiplication method: h(k) = [(a*k) mod 2^w] >> (w - r)
  3. universal hashing: h(k) = [(ak + b) mod p] mod m

### Using an array of linkedlists (Each root node is an element of the array)

Time Complexity: if high number of collision occurs, then search would be O(N) - N is the number of keys, but generally look up is O(1)

Benefits: Good implementation will keep collisions to a minimum and so look up is really fast.

### Using a binary search tree
Time Complexity: Search for a specific item would be O(log N)

Benefits: Uses less space than using array of linkedlist



## Source

* CTCI
* MIT Open Courseware 6.006