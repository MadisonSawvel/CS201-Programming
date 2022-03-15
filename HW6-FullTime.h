
//Madison Sawvel

#ifndef FULLTIME_H
#define FULLTIME_H
#include "Professor.h"

class FullTime :public Professor {
protected:
	double salary;
public:
	FullTime() { salary = 0; }
	FullTime(string n, int a, string dept, double s) { name = n, age = a, department = dept, salary = s; }
	void setSalary(double s) { salary = s; }
	double getSalary()const { return salary; }
	void display() const { cout << "Name: " << name << " " <<"Age: " << age << " " <<"Dept: " << department << " " <<"Full time salary: " << salary << endl; }
};
#endif