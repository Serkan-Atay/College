#include "noten.h"
#include <iostream>
using namespace std;

// Class Note
Note::Note(float val)
{
	value = val;
	next = NULL;
}

float Note::getValue() const
{
	return value;
}

void Note::setValue(float val)
{
	value = val;
}

Note* Note::getNext() const
{
	return next;
}

void Note::setNext(Note *n)
{
	next = n;
}

void Note::print() const
{
	cout << value;
}


// Class NotenListe
NotenListe::NotenListe(int size)
{
	if (size == 0) first = NULL;
	else {
		double note = 0.0;
		for (int i = 1; i <= size; i++)
		{
			cout << "Bitte " << i << ". Note eingeben: ";
			do {
				cin >> note;
			} while (note < 1.0 || note > 5.0);
			Note* n = new Note(note);	// beschi***ner Programmierstil
			n->setNext(first);			// aber wenn's so gefordert ist...
			first = n;					// ist das Gleiche wie unten
		}
	}
}

Note* NotenListe::begin() const
{
	return first;
}

void NotenListe::addNote()
{
	float val;
	do {
		cout << "Bitte Note eingeben: ";
		cin >> val;
	} while ((val < 1.0) || (val >5.0));

	Note* n = new Note(val);	// beschi***ner Programmierstil
	n->setNext(first);			// aber wenn's so gefordert ist...
	first = n;					// ist das Gleiche wie oben
}

double NotenListe::calculateAverage() const
{
	Note* curr = first;
	double sum = 0;
	unsigned int count = 0;
	while (curr != NULL)
	{
		sum += curr->getValue;
		count++;
		curr = curr->getNext;
	}
	return (double)(sum / count);
}

bool NotenListe::isEmpty() const
{
	if (first == NULL) return true;
	else return false;
}

unsigned int NotenListe::size() const
{
	unsigned int size = 0;
	Note* curr = first;
	while (curr != NULL)
	{
		size++;
		curr = curr->getNext;
	}
	return size;
}

void NotenListe::print() const
{
	Note* curr = first;
	while (curr != NULL)
	{
		cout << curr->getValue << " ";
		curr = curr->getNext;
	}
}

NotenListe::~NotenListe()
{
	if (size() == 0) return;

	Note* curr = first;
	Note* next;
	while (curr != NULL)
	{
		next = curr->getNext;
		delete curr;
	}
}
