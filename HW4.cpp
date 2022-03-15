
//Madison Sawvel

#include "MyString.h"

int main() {
	MyString s1(3, 'c');
	MyString s2(4, 'a');
	MyString s3(7, 't');
	MyString s4(6, 'g');
	MyString s5(7, 't');
	assert(s1.getSize() == 3);
	assert(s4.getSize() == 6);
	assert(s3.countChar('t') == 7);
	assert(s2.countChar('z') == 0);
	assert(s1.isEqual(s2) == false);
	assert(s3.isEqual(s5) == true);
	s4.changeChar(0, 'u');
	assert(s4.getChar(0) == 'u');
	s4.print();
	s2.changeChar(1, 'h');
	assert(s2.getChar(1) == 'h');
	s2.print();
	s2.removeFirst();
	assert(s2.getSize() == 3);
	s3.removeFirst();
	assert(s3.getSize() == 6);
	s4.addAsFirst('b');
	assert(s4.getChar(0) == 'b');
	s5.addAsFirst('a');
	assert(s5.getChar(0) == 'a');
	system("pause");
	return 0;
}