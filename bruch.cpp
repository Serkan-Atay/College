#include "bruch.h"
#include <string>
#include <stdio.h>
using namespace std;

Bruch::Bruch()
{
	zaehler = 0;
	nenner = 1;
}

Bruch::Bruch(int z, int n)
{
	zaehler = z;
	nenner = n;
	kuerze();
}

Bruch::Bruch(int ganzzahl)
{
	zaehler = ganzzahl;
	nenner = 1;
}

void Bruch::kuerze()
{
	if (zaehler == 0) {
		nenner = 1;
		return;
	}

	int a = zaehler;
	int b = nenner;

	if (a < 0) a = 0 - a;
	if (b < 0) b = 0 - b;

	while (a != b)
		if (a > b) a -= b;
		else b -= a;
	zaehler /= a;
	nenner /= a;
}

void Bruch::set(int z, int n)
{
	zaehler = z;
	nenner = n;
	kuerze();
}

string Bruch::toString()
{
	if (zaehler == 0) return to_string(0);
	else if (nenner == 1) return to_string(zaehler);
	else if (zaehler >= nenner) return to_string(zaehler / nenner) + "_" + to_string(zaehler % nenner) + "/" + to_string(nenner);
	else return to_string(zaehler) + "/" + to_string(nenner);
}

Bruch Bruch::operator+(Bruch b)
{
	Bruch result;
	result.zaehler = zaehler * b.nenner + b.zaehler * nenner;
	result.nenner = nenner * b.nenner;
	result.kuerze();

	return result;
}

Bruch Bruch::operator-(Bruch b)
{
	Bruch result;
	result.zaehler = zaehler * b.nenner - b.zaehler * nenner;
	result.nenner = nenner * b.nenner;
	result.kuerze();

	return result;
}

Bruch Bruch::operator*(Bruch b)
{
	Bruch result;
	result.zaehler = zaehler * b.zaehler;
	result.nenner = nenner * b.nenner;
	result.kuerze();

	return result;
}

Bruch Bruch::operator/(Bruch b)
{
	Bruch result;
	result.zaehler = zaehler * b.nenner;
	result.nenner = nenner * b.zaehler;
	result.kuerze();

	return result;
}
