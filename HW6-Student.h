
//Madison Sawvel

#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student :public Person {
protected:
	int yog;
	double gpa;
public:
	Student() { yog = 0, gpa = 0; }
	Student(string n, int a, double g, int y) { name = n, age = a, gpa = g, yog = y; }
	void setYOG(int y) { yog = y; }
	void setGPA(double g) { gpa = g; }
	int getYOG()const { return yog; }
	double getGPA() const { return gpa; }
	void display() const { cout << "Name: " << name << " " << "Age: " << age << " " << "GPA: " << gpa << " " << "YOG: " << yog << endl; }
};
#endif
