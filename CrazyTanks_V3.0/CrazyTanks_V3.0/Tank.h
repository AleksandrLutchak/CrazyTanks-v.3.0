#ifndef TANK_H
#define TANK_H

#include <iostream>
#include <conio.h>

class Tank
{
	

public:
	struct TankProperties
	{
		int xPosition, yPosition, HealthPoints;
		char Skin;
	};
	
	void Movement();
	void Fire();

	enum Direction {UP = 72, DOWN = 80, RIGHT = 77, LEFT = 75};

};



#endif TANK_H
