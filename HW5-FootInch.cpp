
//Madison Sawvel

#include "FootInch.h"

FootInch::FootInch()
{
	foot = 0;
	inch = 0;
}

FootInch::FootInch(int f, int i)
{
	foot = f;
	inch = i;
	simplify();
}

void FootInch::display() const
{
	cout << "------------------" << endl;
	cout << "Foot: " << foot << endl;
	cout << "Inch: " << inch << endl;
	cout << "------------------" << endl;
}

int FootInch::getFoot() const
{
	return foot;
}

int FootInch::getInch() const
{
	return inch;
}

void FootInch::setFoot(int f)
{
	foot = f;
}

void FootInch::setInch(int i)
{
	inch = i;
	simplify();
}

void FootInch::simplify()
{
	if (inch >= 12) {
		int temp = inch / 12;
		foot += temp;
		inch = inch % 12;
	}
}

FootInch FootInch::operator++(int) {
	FootInch newTemp;
	newTemp.foot = foot;
	newTemp.inch = inch;
	++newTemp.inch;
	if (newTemp.inch >= 12) {
		int temp = newTemp.inch / 12;
		newTemp.foot += temp;
		newTemp.inch = newTemp.inch % 12;
	}
	return newTemp;
}
FootInch FootInch ::operator++() {
	++inch;
	if (inch >= 12) {
		int temp = inch / 12;
		foot += temp;
		inch = inch % 12;
	}
	return(*this);
}
FootInch FootInch::operator+(const FootInch& rhs) {
	FootInch comboTemp;
	comboTemp.foot = foot + rhs.foot;
	comboTemp.inch = inch + rhs.inch;
	if (comboTemp.inch >= 12) {
		int temp = comboTemp.inch / 12;
		comboTemp.foot += temp;
		comboTemp.inch = comboTemp.inch % 12;
	}
	return comboTemp;

}
bool FootInch::operator==(const FootInch& rhs) const {
	if (foot == rhs.foot && inch == rhs.inch)
		return true;
	else
		return false;
}
ostream& operator<<(ostream& output, const FootInch& f) {
	output << "Foot: " << f.foot << endl;
	output << "Inch: " << f.inch << endl;
	return output;
}


