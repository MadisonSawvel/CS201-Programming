
//Madison Sawvel

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	cout << "What file would you like to open?" << endl;
	string fileName;
	cin >> fileName;
	ifstream file1(fileName);
	string word;
	int count = 0;
	while (file1 >> word) {
		if (word == "the") {
			count++;
		}
		cout << count << " ";
	}
	cout << endl;
}