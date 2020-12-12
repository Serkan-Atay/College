#include "parkplatz.h"

Parkplatz::Parkplatz()
{
	head = tail = 0;
	size = 0;
}

Parkplatz::~Parkplatz()
{
	Parkluecke* curr = head;
	Parkluecke* next;
	while (curr != 0) {
		next = curr->next;
		delete curr;
		curr = next;
	}
}

void Parkplatz::enqueue(Fahrzeug *f)
{
	Parkluecke* pl = new Parkluecke();
	pl->fahrzeug = f;
	if (tail != 0) tail->next = pl;
	tail = pl;
	if (!head) head = pl;
	size++;
}

Fahrzeug* Parkplatz::dequeue()
{
	Parkluecke* pl = head;
	Fahrzeug* popped_item = pl->fahrzeug;
	head = head->next;
	delete pl;
	size--;
	return popped_item;
}

unsigned int Parkplatz::getSize() const
{
	return size;
}
