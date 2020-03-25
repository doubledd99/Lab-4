#include "Stack.h" //includes stack.h

Stack::Stack() { //constructor
	head = nullptr; //sets the head to nullptr
	length = 0;//sets length to 0
}

Stack::~Stack()//class destructor
{
}

bool Stack::isEmpty() //rethrns bool if stack is empty
{
	if(head==nullptr) //if the head pointer is not pointing to anything
		return true;//returns true
	else
		return false; //returns false if head points to a node
}

bool Stack::isFull() //check to see if stack is full returns bool
{
	itemNode* newNode; //creates new node called newNode
	try //tries to create the node if it cannot it returns false
	{
		newNode = new itemNode; //sets newnode to a new itemnode type
		delete newNode; //deletes newnode
		return false;//returns false
	}
	catch (std::bad_alloc exception) //if it cannot allocate more memory it returns true
	{
		return true;
	}
	return false;
}

itemType Stack::top() //returns value of the top item in the stack
{
	if (!isEmpty())//if the stack has atleast 1 item it returns the top item
		return head->info; //returns the top item's information
	else
		return NULL; //returns nothing
}

void Stack::push(itemType info) //adds a new item to the stack
{
	if (!isFull()) { //checks to see if the stack is full first
		itemNode* newNode; //creates new node called newnode
		newNode = new itemNode; //sets new node to new itemnode type
		newNode->next = head; //sets the newnode next pointer to the top item
		head = newNode; //sets head to the newest created node
		newNode->info = info; //populates newest node with inserted information
	}
	length++; //adds one to length counter
}

void Stack::pop() //removes top item off stack
{
	if (!isEmpty()) { //if stack has more than one item
		itemNode* newNode = head; //creates new node called newnode and aggigns head information to it
		head = head->next; //sets head equal to the next item pointer in the stack
		delete newNode; //deletes top item
		length--; //subtracts one from length variable
	}
}
