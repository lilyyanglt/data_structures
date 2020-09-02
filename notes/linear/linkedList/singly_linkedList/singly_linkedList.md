# Singly Linked List

> Source: Educative.io Data structures for coding interviews

* unidirectional
* the nodes that makes up the chain only has one pointer that's pointing to the next node

## C++
* In c++, there's a singly-linked-list structure called `<forward_list>`
* You can use this container if you don't want to implement your own, it comes with methods such as 

## Key Operations and Time Complexity

| operation | runtime |
| --------- | ------- |
| `insertAtTail(value)`<li>adding elements to end of the linkedlist, synonym is `append` pr `push_back`</li> | <li>O(n) if no tail pointer</li><li>O(1) if there's tail pointer</li> |
| `insertAtHead(value)`<li>adding elements to the head, synonym is `push_front` or `prepend`</li> | <li>O(1)</li> |
| `delete(value)`<li>delete any nodes that's not the head</li> | <li>O(n) because you need to traverse the list to find the data to be deleted so worst case is up to O(n) if the item is towards end of list</li> |
| `deteleAtHead()`<li>deteling the head, synonym is `pop_front`</li> | <li>O(1)</li> |
| `search(value)`<li>Find elements and return position of element</li> | <li>O(n)</ldi> |
| `getHead()`<li>return value of the head</li> | <li>O(1)</ldi> |
| `isEmpty`<li>return True/False whether the list is empty</li> | <li>O(1)</ldi> |
| `reverse()` <li>reverse the linked list</li> | <li>O(n)</li>|