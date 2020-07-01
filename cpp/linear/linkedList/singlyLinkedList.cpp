//testing template usage to implement a linkedList


#include <iostream>

template <typename T>
struct node {
   T data;
  node<T>* next;
  node(T d) {data = d; next = NULL; }

};

template <typename T>
class linkedList {
 private:
 	node<T>* head;

 public: 
 	linkedList() : head(nullptr) {}

 	//adding nodes to the end of the list
 	void append(T data) {
 		node<T>* newNode = new node<T>(data);
 		
 		if(head == nullptr) {
 			head = newNode;
 		
 		} else {
 			
 			//you want temp to hold the address of the last node

 			node<T>* temp = head;
 			while(temp->next != nullptr) {
 				temp = temp->next;
 			}
			temp->next = newNode;
 		}
 	}

 	//adding nodes to the beginning of the list
 	void prepend(T data) {
 		node<T>* newNode = new node<T>(data);
 			newNode->next = head;
 			head = newNode;

 	}


 	//print out all the data in the list
 	void printData() {
 		if(head == nullptr) {
 			std::cout << "list is empty" << std::endl;
 			return;
 		}

 		node<T>* temp = head;
 		while (temp != NULL) {
 			std::cout << temp->data << " ";
 			temp = temp->next;
 		}
 		std::cout << "\n";
 	}

 	node<T>* getHeadAdress() {
 		return head;
 	}

 	int getElementCount() {

 		int count = 0;

 		node<T>* temp = head;

 		while(temp != nullptr) {
 		 	count++;
 			temp = temp->next; //this is very important because if you don't your loop wil never end;
 		}

 		return count;
 	}

 	//converts 
};

int main() {

	int totalElements = 0;
	linkedList<int>* list = new linkedList<int>();

	list->append(5);
	list->append(6);
	list->append(7);
	list->append(8);
	list->printData();
	list->prepend(4);
	list->prepend(3);
	list->prepend(2);
	list->prepend(1);
	list->printData();
	std::cout << "total count is: " << list->getElementCount() << std::endl;

	delete list;

	return 0;

	//the following code doesn't work and I am not sure why, maybe I am still not too familiar with streams
	//need to further understand stream
	/*std::cout << "How many items for your list: ";
	std::cin >> totalElements;
	while(totalElements > 0) {
		std::cout << "Enter element data: ";
		list->append(std::cin.get());
		totalElements--;
	}

	list->printData();*/

}
