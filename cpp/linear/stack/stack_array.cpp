//implementing the stack data structure using static array

#include <iostream>


/*#######################################
/ defining the stack class 
#######################################*/
class stack {

private: 
	static const int SIZE = 10;
	int nums[SIZE];
	int top;

public: 
	stack() : top(0) { }

	void push(int x) {
	
		if(top == (SIZE-1)) {
			std::cout << "stack is full" << std::endl;
			return;
		}
		nums[top++] = x;
	}

	int pop() {
	
		if(top == 0) {
			std::cout << "stack is empty" << std::endl;
			return 0;
		}
		return nums[--top];

	}

};

/*#######################################
/ main to be executed
#######################################*/

int main(void) {

stack s;

s.push(1);
std::cout << s.pop() << std::endl;

return 0;

}


