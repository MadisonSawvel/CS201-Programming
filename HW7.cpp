
//Madison Sawvel

#include <iostream>
#include <assert.h>
#include <math.h>

using namespace std;

int sum(int n) {
	if (n != 0) {
		return n + sum(n - 1);
	}
	return 0;
}
int triangle(int n) {
	if (n >= 1) {
		return n + triangle(n - 1);
	}
	else {
		return 0;
	}
}
bool linearSearch(char a[], int size, char target){ 
	size = size - 1;
	if (a[size] == 0) {
		return false;
	}
	if (a[size] == target) {
		return true;
	}
	else{
		return linearSearch(a, size, target);
	}
}
int exp(int b, int e) {
	if (e == 0) {
		return 1;
	}
	else {
		return b * exp(b, e - 1);
	}
}
int maximum(int a[], int n) {
	if (n == 1) {
		return a[0];
	}
	return max(a[n - 1], maximum(a, n - 1));
}


int main() {
	assert(sum(6) == 21);
	assert(sum(4) == 10);
	assert(sum(10) == 55);
	assert(exp(3, 4) == 81);
	assert(exp(2, 6) == 64);
	assert(exp(4, 2) == 16);
	int a1[] = { 2,4,7,3,8 };
	int n = sizeof(a1) / sizeof(a1[0]);
	assert(maximum(a1, n) == 8);
	int a2[] = { 23,75,10,23,92 };
	int m = sizeof(a2) / sizeof(a2[0]);
	assert(maximum(a2, m) == 92);
	int a3[] = { 101,205,93,535,104 };
	int p = sizeof(a3) / sizeof(a3[0]);
	assert(maximum(a3, p) == 535);
	char c1[] = { 'c','b','c','e','f' };
	assert(linearSearch(c1, 5, 'b') == true);
	char c2[] = { 'a','c','e','g','i','k','m' };
	assert(linearSearch(c2, 7, 'g') == true);
	char c3[] = { 'w','x','y','z' };
	assert(linearSearch(c3, 4, 'd') == false);
	cout << triangle(4) << endl;
	cout << triangle(3) << endl;
	cout << triangle(6) << endl;


	
}