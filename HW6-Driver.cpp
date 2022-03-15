
//Madison Sawvel

#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include "PartTime.h"
#include "FullTime.h"
#include <assert.h>

using namespace std;

int main() {
	Person* p1 = new Person("Ralph", 42);
	Person* p2 = new Person("Colin", 2);
	p1->setName("Umpkin");
	p2->setName("Howard");
	p1->setAge(2);
	p2->setAge(1);
	assert(p1->getName() == "Umpkin");
	assert(p2->getName() == "Howard");
	p1->display();
	p2->display();

	Student* s1 = new Student("Walter", 13, 1.6, 3222);
	Student* s2 = new Student("Mabel", 7, 2.7, 2021);
	s1->setYOG(2022);
	s2->setYOG(2022);
	s1->setAge(4);
	s1->setGPA(0.6);
	s2->setGPA(4.0);
	assert(s1->getGPA() == 0.6);
	assert(s2->getGPA() == 4.0);
	assert(s1->getYOG() == 2022);
	assert(s2->getYOG() == 2022);
	s1->display();
	s2->display();

	Professor* f1 = new Professor("Gilbert", 86, "Music");
	Professor* f2 = new Professor("Steven with a ph", 25, "Woodwork");
	f1->setDept("Golf");
	assert(f1->getDept() == "Golf");
	f1->setAge(67);
	f2->setDept("Science");
	assert(f2->getDept() == "Science");
	f1->display();
	f2->display();

	PartTime* pt1 = new PartTime("Broly", 12, "Veternary", 10.25, 12);
	PartTime* pt2 = new PartTime("Loki", 10, "Criminal Justice", 12.00, 14);
	pt1->setRate(11.50);
	pt2->setRate(11.50);
	pt1->setHours(10);
	pt2->setHours(9);
	assert(pt1->getRate() == 11.50);
	assert(pt2->getRate() == 11.50);
	assert(pt1->getHours() == 10);
	assert(pt2->getHours() == 9);
	pt1->display();
	pt2->display();

	FullTime* ft1 = new FullTime("Ami", 46, "Art", 60);
	FullTime* ft2 = new FullTime("Oli", 38, "Physical Education", 30);
	ft1->setSalary(70);
	ft2->setSalary(45);
	assert(ft2->getSalary() == 45);
	assert(ft1->getSalary() == 70);
	ft1->display();
	ft2->display();
	return 0;
}