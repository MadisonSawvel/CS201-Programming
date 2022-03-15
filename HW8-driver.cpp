#include "LinkedList.h"
#include <assert.h>

int main()
{
	LinkedList l1;
	cout << l1.size() << endl;
	l1.print();
	for(int i = 0 ; i < 4; i++)
		l1.addAtFirst(i);
	cout << l1.size() << endl;
	l1.print();
	l1.removeFirst();
	cout << l1.size() << endl;
	l1.print();	

	LinkedList l2;
	for (int i = 0; i < 3; i++) {
		l2.addAtFirst(i);
	}
	l2.print();
	return 0;
}