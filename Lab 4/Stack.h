#ifndef Stack_h
#define Stack_h

#include <stdlib.h> //libraries used to make code work
#include <iostream>
using namespace std;

typedef int itemType; //type defined as integer for now called itemType (is information stack carries)
struct itemNode //container name of the node for each entry in the stack 
{
	itemType info; //variable for information the stack item carries
	itemNode* next; //pointer that will be used to point to the next node in the stack
};

class Stack { //class stack contains all methods and variables used to create a stack
public: //public members
	Stack(); //default constructor
	~Stack();//default destructor
	//
	bool isEmpty(); //returns bool true if stack contains no items
	bool isFull();	//returns bool true if it cannot allocate more memory
	itemType top(); //returns a copy of the top item from the stack

	void push(itemType info); //adds an item on the stack
	void pop(); //removes the top item from the stack
private: //private members 
	//
	int length; //keeps track of the length of the stack
	itemNode item; // variable to store information in the node
	itemNode* head; //pointer to point to the next node in the stack
	
};
#endif