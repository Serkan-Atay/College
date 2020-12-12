#ifndef _BAUGRDSTUECK_H
#define _BAUGRDSTUECK_H
#include "grundstueck.h"

class Baugrundstueck : public Grundstueck
{
private:
	float quadratmeterpreis;

public:
	Baugrundstueck(float x1 = 0, float y1 = 0,
		float x2 = 0, float y2 = 0,
		float p = 1.0);
	float getQuadratmeterpreis() const;
	void setQuadratmeterpreis(float p);
	float Kaufpreis() const;
};

#endif#ifndef _BAUGRDSTUECK_H
#define _BAUGRDSTUECK_H
#include "grundstueck.h"

class Baugrundstueck : public Grundstueck
{
private:
	float quadratmeterpreis;

public:
	Baugrundstueck(float x1 = 0, float y1 = 0,
		float x2 = 0, float y2 = 0,
		float p = 1.0);
	float getQuadratmeterpreis() const;
	void setQuadratmeterpreis(float p);
	float Kaufpreis() const;
};

#endi
