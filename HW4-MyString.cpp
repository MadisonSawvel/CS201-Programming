
//Madison Sawvel

#include "MyString.h"

MyString::MyString() {
	size = 0;
	data = nullptr;
}
MyString::MyString(int s, char ch) {
	size = s;
	data = new char[size];
	for(int i = 0; i < size; i++) {
		data[i] = ch;
	}
}
void MyString::print() const {
	for (int i = 0; i < size; i++) {
		cout << data[i];
	}
	cout << endl;
}
MyString::MyString(const MyString& rhs) {
	size = rhs.size;
	data = new char[size];
	for (int i = 0; i < size; i++) {
		data[i] = rhs.data[i];
	}
}
char MyString::getChar(int x) const {
	return data[x];
}
int MyString::getSize() {
	return size;
}
int MyString::countChar(char ch) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (data[i] == ch) {
			count++;
		}
	}
	return count;
}
bool MyString::isEqual(const MyString& rhs) {
	if (size == rhs.size) {
		for (int i = 0; i < size; i++) {
			data[i] = rhs.data[i];
		}
		return true;
	}
	else {
		return false;
	}
}
void MyString::removeFirst() {
	char* tempPtr2 = new char[size - 1];
	for (int i = 0; i < size; i++) {
		tempPtr2[i - 1] = data[i];
	}
	delete[] data;
	data = tempPtr2;
	size--;
}
void MyString::changeChar(int x, char ch) {
	char* tempPtr3 = new char[size];
	data[x] = ch;
	for (int i = 0; i < size; i++) {
		tempPtr3[i] = data[i];
	}

	delete[] data;
	data = tempPtr3;
}
MyString::~MyString() {
	delete[] data ;
	data = nullptr;
}
void MyString::addAsFirst(char ch) {
	char * tempPtr = new char[size + 1];
	tempPtr[0] = ch;
	for (int i = 0; i < size; i++) {
		tempPtr[i+1] = data[i];
	}
	delete[] data;
	data = tempPtr; // sets data to now be tempPtr 
	size++;
}
void MyString::removeAllBs() {
	for (int i = 0; i < size; i++) {
		if (data[i] == 'b') {

		}
	}
}