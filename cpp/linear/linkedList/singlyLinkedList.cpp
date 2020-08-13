/*
  Aug 10, 2020
  My own implementation of linkedlist to understand how the structure works

*/


#include <iostream>
#include "../../src/include/Node.h"

class LinkedList {
 private:
 	Node* head;

 public: 
 	LinkedList() : head(nullptr) {}

  bool isEmpty() {
    return (head == nullptr) ? true : false;
  }

 	/*
   * @param data - data to be dded at the end of the linkedlist
   * 
   * Time Complexity: O(n) 
   */
   
 	void append(int data) {
 		Node *newNode = new Node(data);
 		
 		if(this->isEmpty()) {
 			head = newNode;
 		
 		} else {
 			
 			//you want temp to hold the address of the head node 
 			Node *temp = head;
 			while(temp->next != nullptr) {
 				temp = temp->next;
 			}
			temp->next = newNode;
 		}
 	}
	/*
   * @param data - data to be dded at the beginning of linkedlist
   * 
   * Time Complexity: O(1) 
   */
 	void prepend(int data) {
 		Node *newNode = new Node(data);
  
    newNode->next = head;
    head = newNode;
 	}

  /*
   * @param data - is the value of the node
   * @param index - the index of the new node - we always start at 0
   *
   * Time Complexity: O(n) at worst case
  */
 	void insert(int data, int index) {
     // traverse the linkedlist by counting
     int count = 0;
    
     if (index == count) {
       this->prepend(data);
     } else if (index >= this->length()) {
       this->append(data);
     } else {
       
      Node *newNode = new Node(data);
      Node *temp = head;

      // traverses through the list and get node before index so index - 1
      while (count < index-1) {
        count++;
        temp = temp->next;
      }
      
      // temp is now of the node just prev to the node where index is
      newNode->next = temp->next;
      temp->next = newNode;

     }
  }

  /*
   * Delete the first node that matches value of interest
   * Time Complexity: O(n)
  */

  void remove(int value) {
    Node *prev = nullptr;
    Node *current = head;
    
    /* 1. traverse the list until current->value == value and current == nullptr
          1.1 the loop will only continue only if current->value != value and current != nullptr
       3. Each iteration, set prev => current, and current => current->next
       4. If current is null, nothing to delete
       5. If prev is null, the first node is to be deleted, update head => current->next
       6. If not 4 or 5, then prev->next = current->next
    */
   
    while (current != nullptr && current->data != value) {
      std::cout << current->data << std::endl;
      prev = current;
      current = current->next;
    }

    if (current == nullptr) {
      throw "Value not found";
    } else if (prev == nullptr) {
      head = current->next;
    } else {
      prev->next = current->next;
    }

     delete current;
  }

  /* 
   * Reverses a linked list iteratively
   * Time Complexity: O(n)
  */

  void reverseIter() {
    // use 3 pointers: prev, next, current
    /*
      1. initiate prev and next to null
      2. assign head to current
      3. go through the nodes one by one using n - 1
      4. update head to current
    */

    Node *prev = nullptr;
    Node *next = nullptr;
    Node *current = head;

    if (this->isEmpty()) {
      std::cout << "Nothing to reverse, empty list" << std::endl;
      return;
    } else {
      while(current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
      }
      // because current and next will both be pointing to NULL once the whileloop finishes
      head = prev;
    }

  }
  
  /*
    Reverses the linkedList recursively
    Time Complexity: The total number of recursive calls is porportional to length of list so O(n)
    Space Complexity: O(n)
  */
  void reverseRecurs() {
    Node *prev = head;
    head = prev->next;
    if (prev->next == nullptr) {
      head = prev;
      return;
    } else {
      reverseRecurs();
      Node *temp = prev->next;
      temp->next = prev;
      prev->next = nullptr;
    }
  }

  /*
   * Time Complexity: O(n) 
   */
 	void printData() {
 		if(this->isEmpty()) {
 			std::cout << "list is empty" << std::endl;
 			return;
 		}

 		Node *temp = head;
 		while (temp != nullptr) {
 			std::cout << temp->data << " ";
 			temp = temp->next;
 		}
 		std::cout << "\n";
 	}

  /*
   * @return total element of the linkedlist
  */
 	int length() {

 		int count = 0;
 		Node *temp = head;

 		while(temp != nullptr) {
 		 	count++;
 			temp = temp->next; //this is very important because if you don't your loop wil never end;
 		}

 		return count;
 	}

  
};

int main() {

  LinkedList list;

  list.append(5);
  list.append(10);
  list.append(20);
  list.printData(); // should print 5 10 20

  list.insert(3, 1);
  list.printData(); // should print 5 3 10 20

  list.prepend(55);
  list.printData(); // should print 55 5 3 10 20

  std::cout << list.length() << std::endl; // should print 5

  try {
    list.remove(54);
  } catch (const char* msg) {
    std::cerr << msg << std::endl;
  }
  
  list.printData();

  list.reverseRecurs();
  list.printData();

  return 0;
}
