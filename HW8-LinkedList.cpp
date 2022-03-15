#include "LinkedList.h"

int LinkedList::size() const {
	int counter = 0;
	Node* current = head;
	
	while(current != nullptr){
		counter++;
		current = current -> next;
	}
	return counter;
}

void LinkedList::print() const {
	Node * current = head;	
	while(current != nullptr){
		cout << current -> data << " ";
		current = current -> next;
	}
	cout << endl;
}

void LinkedList::addAtFirst(int n)
{
	Node * ptr = new Node;
	ptr -> data = n;
	ptr -> next = head;
	head = ptr;
}

void LinkedList::removeFirst()
{
	if(head != nullptr){
		Node * temp = head;
		head = head -> next;
		delete temp;
	}
}

LinkedList::~LinkedList()
{
	while(head != nullptr){
		Node * temp = head;
		head = head -> next;
		delete temp;
	}
}

int LinkedList::sum() {
	Node * current = head;
	int sum = 0;
	while (head != nullptr) {
		sum += head->data;
		head = head->next;
	}
	return sum;

}

int LinkedList::count(int n) {
	Node* current = head;
	int count = 0;
	while (current != nullptr) {
		if (current->data == n) {
			count++;
		}
		current = current->next;
	}
	return count;
}

void LinkedList::triple() {
	Node* current = head;
	while (current != head) {
		current->data = current->data * 3;
		head = head->next;
	}
}

bool LinkedList::find(int n) {
	Node* current = head;
	while (head != nullptr) {
		if (head != n) {
			head = head->next;
		}
		else{
			return true;
		}
	}
}

int LinkedList::at(int i) {
	Node* current = head;
	int count = 0;
	int default = 0;
	while (current != nullptr) {
		if (count == i) {
			return (current->data);
		}
		else {
			cout << "Error, returning default" << endl;
			return default;
		}
		count++;
		current = current->next;
	}
}

void LinkedList::removeAt(int i) {
	Node* previous = head;
	Node* current = head->next;
	while (current != nullptr) {
		if (current->data == i) {
			break;
		}
		else {
			previous = current;
			current = current->next;
		}
	}
	if (current == nullptr) {
		cout << "Empty or not in range" << endl;
	}
	else {
		previous->next = current->next;
		delete current;
	}
}
void LinkedList::insertAt(int i, int n) {

}


