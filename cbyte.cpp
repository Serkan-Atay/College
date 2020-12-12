#include "cbyte.h"
#include <cmath>
#include <iostream>
using namespace std;

CByte::CByte()
{
	for (int i = 0; i < 8; i++) value[i] = false;
}

CByte::CByte(int x)
{
	// default to zero if integer too big
	if (x > 255) for (int i = 0; i < 8; i++) value[i] = false;
	// convert integer to binary
	else {
		for (int i = 7; i >= 0; i--) {
			int pow = (int)exp2(i);
			if (x >= pow) {
				value[i] = true;
				x -= pow;
			}
			else {
				value[i] = false;
			}
		}
	}
}

int CByte::get(int i) const
{
	return (int)value[i];
}

void CByte::set(int i, int v)
{
	if (v == 0) value[i] = false;
	else value[i] = true;
}

int CByte::dezimal() const
{
	int result = 0;
	for (int i = 7; i >= 0; i--) {
		if (value[i] == 1) result += (int)exp2(i);
	}

	return result;
}

CByte CByte::operator&(CByte b) const
{
	CByte result;
	for (int i = 7; i >= 0; i--) {
		if (value[i] && b.value[i]) result.set(i, 1);
		else result.set(i, 0);
	}
	return result;
}

CByte CByte::operator|(CByte b) const
{
	CByte result;
	for (int i = 7; i >= 0; i--) {
		if (value[i] || b.value[i]) result.set(i, 1);
		else result.set(i, 0);
	}
	return result;
}

CByte CByte::operator^(CByte b) const
{
	CByte result;
	for (int i = 7; i >= 0; i--) {
		if ((value[i] && !b.value[i]) || (!value[i] && b.value[i])) result.set(i, 1);
		else result.set(i, 0);
	}
	return result;
}

CByte CByte::operator!() const
{
	CByte result;
	for (int i = 7; i >= 0; i--) {
		if (value[i]) result.set(i, 0);
		else result.set(i, 1);
	}
	return result;
}

ostream& operator<<(ostream& os, CByte b)
{
	for (int i = 7; i >= 0; i--) os << b.get(i);
	return os;
}

istream& operator>>(istream& is, CByte& b)
{
	int tmp;
	for (int i = 7; i >= 0; i--) {
		is >> tmp;
		b.set(i, tmp);
	}
	return is;
}
