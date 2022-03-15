//Madison Sawvel

#include <iostream>
#include <assert.h>

using namespace std;

void backwards(char a[], int size);
int evenProduct(int b[], int size);
int howManyQ(char c[], int size);
bool palindrome(char d[], int size);


int main() {
	char array1[5] = {'h','e','l','l','o'};
	backwards(array1, 5);

	int array2[6] = { 4,7,12,52,1,39 };
	assert(evenProduct(array2, 6) == 48);
	int array3[4] = { 3,27,46,10 };
	assert(evenProduct(array3, 4) == 138);
	int array4[5] = { 0,11,84,120, 7 };
	assert(evenProduct(array4, 5) == 0);

	char a1[5] = { 'a','?','b','?','c' };
	assert(howManyQ(a1, 5) == 2);
	char a2[4] = { 'w', 'h', 'o','?' };
	assert(howManyQ(a2, 4) == 1);
	char a3[2] = { '?','?' };
	assert(howManyQ(a3, 2) == 1);
	char a4[3] = { '?',':)','?' };
	assert(howManyQ(a4, 3) == 0);

	char b1[7] = { 'c','h','i','c','k','e','n' };
	assert(palindrome(b1, 7) == false);
	char b2[4] = { 'b','o','o','b' };
	assert(palindrome(b2, 4) == true);
	char b3[5] = { 's','o','r','r','y' };
	assert(palindrome(b3, 5) == false);
	char b4[4] = { 'p','e','e','p' };
	assert(palindrome(b4, 4) == true);
	return 0;
}

void backwards(char a[], int size) {
	char* ptr = a + (size - 1);
	for (int i = 0; i < size - 1; i++) {
		cout << *ptr << " ";
		ptr--;
	}
	cout << *ptr << endl;
}

int evenProduct(int b[], int size) {
	int* ptr = b; 
	int product = 1;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			product = product * ptr[i];
		}
	}
	return product;
	
}

int howManyQ(char c[], int size) {
	char* ptr = c;
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 1) {
			if (c[i] == '?') {
				count++;
			}
		}
	}
	return count;
}

bool palindrome(char d[], int size) {
	int flag = 0;
	for (int i = 0; i <= size / 2 && 2 != 0; i++) { 
		if (d[i] != d[size - i - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		return false;
	}
	else {
		return true;
	}
}