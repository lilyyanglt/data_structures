/*
  Aug 10, 2020
  My own implementation of linkedlist to understand how the structure works

*/


#include <iostream>

struct Node {
  int data;
  Node *next;
  
  Node(int d) {
    data = d; 
    next = nullptr; 
  }

};

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
   * Time Complexity: O(n)
  */

  void reverse() {
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

  list.reverse();
  list.printData(); // 20 10 3 5 55

  return 0;
}
