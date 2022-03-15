#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	cout << "Which file would you like to open?" << endl;
	string fileName;
	cin >> fileName;
	ifstream file3(fileName);
	int n;
	file3 >> n;
	string first;
	string word;
	string temp;
	for (int i = 0; i <= n; i++) {
		if (i == 0) {
			file3 >> first;
		}
		else if(i == (n-1)){
			file3 >> word;
		}
		else {
			file3 >> temp;
		}
	}
	if (first == word) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}