# Data Structures
- My implementation of the different data structures I am learning to be familiarized with them
- Data structures are implemented in cpp, python, and hopefully Java and Javascript.

<h1>Table of Content</h1>

- [Data Structures](#data-structures)
  - [Python](#python)
  - [CPP](#cpp)
  - [Contribution and Review](#contribution-and-review)

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


## Contribution and Review
* I am still learning so there might be mistakes or code could be written better. I would appreciate review and corrections from anyone. Please make a pull request!  