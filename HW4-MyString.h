
//Madison Sawvel

#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
#include <assert.h>

using namespace std;

class MyString {
public:
	MyString();
	MyString(int, char);
	MyString(const MyString &);
	char getChar(int) const;
	void addAsFirst(char);
	void print() const;
	int getSize();
	void changeChar(int, char);
	void removeFirst();
	bool isEqual(const MyString&);
	int countChar(char);
	void removeAllBs();
	~MyString(); 
	
private:
	int size;
	char* data;
};
#endif

