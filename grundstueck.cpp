#pragma once
#include "grundstueck.h"

Grundstueck::Grundstueck(float x1, float y1, float x2, float y2)
{
	Ecke1[0] = x1;
	Ecke1[1] = y1;
	Ecke2[0] = x2;
	Ecke2[1] = y2;
}

float const* Grundstueck::get_Ecke1() const
{
	return Ecke1;
}

float const* Grundstueck::get_Ecke2() const
{
	return Ecke2;
}

void Grundstueck::set_Ecke1(float x, float y)
{
	Ecke1[0] = x;
	Ecke1[1] = y;
}

void Grundstueck::set_Ecke2(float x, float y)
{
	Ecke2[0] = x;
	Ecke2[1] = y;
}

float Grundstueck::Flaeche() const
{
	float x_diff = Ecke1[0] - Ecke2[0];
	if (x_diff < 0) x_diff = -x_diff;

	float y_diff = Ecke1[1] - Ecke2[1];
	if (y_diff < 0) y_diff = -y_diff;

	return x_diff * y_diff;
}
