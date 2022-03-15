//Madison Sawvel

#include <iostream>

using namespace std;

void sumOfNumber(int x);
void productOfNumber(int x);
void sumOfRatios(int x);

int main() {
	cout << "Enter an integer, 0 to quit." << endl;
	int x = 0;
	cin >> x;
	if (x <= 0) {
		return 0;
	}
	else {
		cout << "Enter S for sum, P for product, or R for sum of ratios." << endl;
		char entered;
		cin >> entered;
		if (entered == 's' || entered == 'S') {
			sumOfNumber(x);
		}
		else if (entered == 'p' || entered == 'P') {
			productOfNumber(x);
		}
		else if (entered == 'r' || entered == 'R') {
			sumOfRatios(x);
		}
		else {
			cout << "That was not an S, P, or R." << endl << "Try again" << endl;
		}
	}
}	

void sumOfNumber(int x) {
	for (int i = 1; i <= x; i++) {
		int sum = 0;
		for (int j = 1; j <= i; j++){
			sum = sum + j;
			cout << j;
			if (j != i) {
				cout << " + ";
			}
			else {
				cout << " = ";
			}
		}
		cout << sum << endl;
	}
}
void productOfNumber(int x) {
	for (int i = 1; i <= x; i++) {
		int product = 1;
		for (int j = 1; j <= i; j++) {
			product = product * j;
			cout << j;
			if (j != i) {
				cout << " * ";
			}
			else {
				cout << " = ";
			}
		}
		cout << product << endl;
	}

}
void sumOfRatios(int x) {
	for (int i = 1; i <= x; i++) {
		float sumR = 0;
		for (int j = 1; j <= i; j++) {
			sumR = sumR + (1.0 / j);
			cout << "1/" << j;
			if (j != i) {
				cout << " + ";
			}
			else {
				cout << " = ";
			}
		}
		cout << sumR << endl;
	}
}
