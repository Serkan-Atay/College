#pragma once
#include "landfahrzeug.h"
#include "motor.h"

class Auto : public Landfahrzeug
{
public:
	void setMotor(Motor* m);
	void bewegen();
	Motor* motor = 0;
};
