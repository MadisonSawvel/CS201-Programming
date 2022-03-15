 #ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

using namespace std;

class LinkedList {
public:
	LinkedList() { head = nullptr; }
	int size() const;
	void print() const;
	void addAtFirst(int n);
	void removeFirst();
	~LinkedList();

	int sum(); 
	int count(int n);
	void triple(); //multiplies value of data in every node by 3
	bool find(int n); //returns true if at least node has n as its data
	int at(int i); //returns data in the ith node of the list. if i is not good, write error message and return default int
	void removeAt(int i); // removes the ith node from the list, if empty or not in range, write error message and doesn't change list
	void insertAt(int i, int n); //OPTIONAL: creates new node with n data and adds new node as the ith node of the list. if i not in range, write error and return with no change
private:
	struct Node {
		int data;
		Node * next;
	};
	// head is the only member variable in this class.
	// It is a pointer that stores the address of (i.e., points to) the first node in the linked list.
	// If the linked list is empty (i.e., it does not have any nodes), then head is nullptr.
	Node * head;
};

#endif