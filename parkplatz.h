#pragma once
#include "fahrzeug.h"

struct Parkluecke
{
	Fahrzeug* fahrzeug;
	Parkluecke* next = 0;
};

class Parkplatz
{
public:
	Parkplatz();
	~Parkplatz();
	void enqueue(Fahrzeug* f);
	Fahrzeug* dequeue();
	unsigned int getSize() const;

private:
	Parkluecke* head;
	Parkluecke* tail;
	unsigned int size;
};
