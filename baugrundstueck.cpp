#pragma once
#include "baugrundstueck.h"

Baugrundstueck::Baugrundstueck(float x1, float y1, float x2, float y2, float p) : Grundstueck(x1, y1, x2, y2)
{
	quadratmeterpreis = p;
}

float Baugrundstueck::getQuadratmeterpreis() const
{
	return quadratmeterpreis;
}

void Baugrundstueck::setQuadratmeterpreis(float p)
{
	quadratmeterpreis = p;
}

float Baugrundstueck::Kaufpreis() const
{
	return quadratmeterpreis * Flaeche();
}
