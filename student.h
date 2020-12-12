#ifndef _STUDENT_H_
#define _STUDENT_H_


#include <iostream>
#include <iostream>
#include "noten.h"
using namespace std;


class Student {
private:
	long const matnr; 		// Matrikelnummer
	unsigned int semester;	// Fachsemester
	char *name;				// Name
	NotenListe grades;		// Notenliste

public:
	Student(long matnr, char const *name, unsigned int semester = 0);
	/* Konstruktor mit Initialisierung, NoteListe ist leer */

	long getMatrikelNr() const;
	/* Zugriffsfunktion für Matrikelnummer */
	char const *getName() const;
	/* Zugriffsfunktion für Name */
	unsigned int getSemester() const;
	/* Zugriffsfunktion für Name */
	NotenListe const getNotenListe() const;
	/* Zugriffsfunktion für Note */

	void setName(char const *);
	/* Name verändern */
	void setSemester(unsigned int sesmester);
	/* Semsterzahl verändern */

	void closeSemester(unsigned int anz_noten);
	// Am Ende des Semesters wird die Semesterzahl erhöht 
	// und die während des Semesters erzielten Prüfungsnoten (anz_noten = wie viele)
	// abgefragt und in der Notenliste gespeichert 

	void print() const;
	/* Ausgabe der Objektdaten */
};

#endif
