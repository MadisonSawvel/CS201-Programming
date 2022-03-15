
//Madison Sawvel

#ifndef PARTTIME_H
#define PARTTIME_H
#include "Professor.h"

class PartTime :public Professor {
protected:
	double rate;
	int hours;
public:
	PartTime() { rate = 0, hours = 0; }
	PartTime(string n, int a, string dept, double r, int h) { name = n, age = a, department = dept, rate = r, hours = h; }
	void setRate(double r) { rate = r; }
	void setHours(int h) { hours = h; }
	double getRate() const { return rate; }
	int getHours() const { return hours; }
	void display() const { cout << "Name: " << name << " " << "Age: " << age << " " << "Dept: " << department << " " << "Part time rate: " << rate << " " << "Hours: "<< hours << endl; }
};
#endif