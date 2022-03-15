
//Madison Sawvel

#include "FootInch.h"
#include <assert.h>

int main() {
	FootInch f1(5, 4);
	FootInch f2(2, 10);
	FootInch f3(4, 7);
	FootInch f4(2, 10);
	assert((f4 == f2) == true);
	assert((f3 == f1) == false);
	++f1;
	++f2;
	assert(f1.getInch() == 5);
	assert(f1.getFoot() == 5);
	assert(f2.getInch() == 11);
	assert(f2.getFoot() == 2);
	FootInch f5 = f3 + f4;
	FootInch f6 = f2 + f2;
	assert(f5.getInch() == 5);
	assert(f5.getFoot() == 7);
	assert(f6.getInch() == 10);
	assert(f6.getFoot() == 5);
	FootInch f7 = f3++;
	FootInch f8 = f4++;
	assert(f7.getInch() == 8);
	assert(f7.getFoot() == 4);
	assert(f8.getInch() == 11);
	assert(f8.getFoot() == 2);

	cout << f1;
	cout << f4;

	system("pause");
	return 0;
}