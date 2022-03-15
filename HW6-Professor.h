
//Madison Sawvel

#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Person.h"

class Professor : public Person {
protected:
	string department;
public:
	Professor() { department = "Unknown"; }
	Professor(string n, int a, string dept) { name = n, age = a, department = dept; }
	void setDept(string d) { department = d; }
	string getDept() const { return department; }
	void display() const {cout << "Name: " << name << " " << "Age: " << age << " " << "Dept: " << department << endl;}
};
#endif
