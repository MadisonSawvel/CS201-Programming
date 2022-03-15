
//Madison Sawvel

#ifndef FOOT_INCH
#define FOOT_INCH

#include <iostream>

using namespace std;

class FootInch {
public:
	FootInch();
	FootInch(int, int);
	void display() const;
	int getFoot() const;
	int getInch() const;
	void setFoot(int);
	void setInch(int);
	FootInch operator++(int);
	FootInch operator++();
	FootInch operator+(const FootInch& rhs);
	bool operator==(const FootInch &rhs) const;
	friend ostream& operator<<(ostream& output, const FootInch& r);

private:
	int foot;
	int inch;
	void simplify();
};

#endif
