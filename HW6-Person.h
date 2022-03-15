
//Madison Sawvel

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person() { name = "Unknown", age = 0; }
	Person(string n, int a) { name = n, age = a; }
	string getName() const { return name; }
	int getAge() const { return age; }
	void setName(string n) { name = n; }
	void setAge(int a) { age = a; }
	void display() const {cout << "Name: " << name << " " << "Age: " << age << endl;}
};

#endif 
