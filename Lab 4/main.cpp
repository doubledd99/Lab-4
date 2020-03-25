/*
Daniel Dooley
Mr. Busch
Lab 4 - Recursion
"Flip the order of a stack using recursion."
*/

#include "Stack.h" //includes stack class from lab 3

//Precondition: two stacks have to be created
//Postcondtion: the old stack is empty and new stack contains all nodes from old stack in reversed order

void reverse(Stack list1, Stack Flipped); //void function prototype
int main() { //main function
	Stack list1; //creates a stack to insert items in the "correct" order
	Stack Flipped; //creates a stack to be flipped
	for (int i = 0; i < 10; i++) //for loop to insert 0-9 to the first stack starting with 0
	{
		list1.push(i);//inserts item into the first stack
		cout << list1.top() << endl; //outputs integers from the stack to demonstrate 0123456789 order
		
	}
	cout << "End of first list: \n \n"; //outputs when the first list has been added all items
	reverse(list1, Flipped); //function call of the reverse function that inserts the first stack and the stack to hold the reversed stack
}
void reverse(Stack list1, Stack Flipped) {//void function definition that inputs the stack with information already and the stack that is empty as a template
	Flipped.push(list1.top()); //adds the top item from the old stack to the bottom of the new stack, reversing its order
	list1.pop(); //removes the top item on the old stack to be reversed exposing the next node
	cout << Flipped.top() << endl; //displays the new stack's order one int per line
	if (!list1.isEmpty()) { //as long as the "old" stack isnt empty it will call itself recursively
		reverse(list1, Flipped); //recursive function call of itself inputting both stacks.
	}
}