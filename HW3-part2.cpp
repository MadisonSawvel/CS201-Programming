
//Madison Sawvel

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	cout << "What file would you like to open?" << endl;
	string fileName;
	cin >> fileName;
	ifstream file2(fileName);
	int n;
	file2 >> n;
	double* a = new double[n];
	for (int i = 0; i < n; i++) {
		file2 >> a[i];
	}
	double sum = 0.0;
	int size = n;
	double average = 0.0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	average = sum / size;
	ofstream outFile;
	outFile.open("aboveAverage.txt");
		for (int i = 0; i < n; i++) {
			if (a[i] > average) {
				outFile << a[i];
				
			}
		}
	
	file2.close();
	outFile.close();

	return 0;
}