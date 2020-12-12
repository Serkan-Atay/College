#ifndef _NOTEN_H_
#define _NOTEN_H_

#include <iostream>
using namespace std;

class Note {
private:
	float value;
	Note *next;
public:
	/* Bitte komplett inline implemenetieren */
	Note(float val);
	/* Konstruktor */
	float getValue() const;
	/* Gibt Notenwert zurueck  */
	void setValue(float val);
	/* Setzt Notenwert */
	Note *getNext() const;
	/* Naechste Note */
	void setNext(Note *n);
	/* Naechste Note anhängen */
	void print() const;
};

class NotenListe{
private:
	Note *first;		/* Listenanfang*/
public:
	NotenListe(int size = 0);
	/* Notenliste der vorgegebenen Groesse erzeugen und Noten einlesen */
	Note *begin() const;
	/* Listenanfang */
	void addNote();
	/* Neue Note am Anfnag der Liste einfuegen */
	double calculateAverage() const;
	/* Durchschnittsnote berechnen */
	bool isEmpty() const;
	/*Pruefen, ob Liste leer */
	unsigned int size() const;
	/* Groesse der Liste */
	void print() const;
	/* Notenliste ausgeben */
	~NotenListe();

};

#endif
