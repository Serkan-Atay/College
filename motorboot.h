#pragma once
#include "wasserfahrzeug.h"
#include "motor.h"

class Motorboot : public Wasserfahrzeug
{
public:
	void setMotor(Motor* m);
	void bewegen();
	Motor* motor = 0;
};
