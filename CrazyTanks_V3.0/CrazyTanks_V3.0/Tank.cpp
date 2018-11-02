#include "stdafx.h"
#include "Tank.h"

void Tank::Movement()
{
	switch (_getch())
	{
		case UP:
		{
			std::cout << "UP!";
		}
		break;

		case DOWN:
		{
			std::cout << "DOWN!";
		}
		break;

		case RIGHT:
		{
			std::cout << "RIGHT!";
		}
		break;

		case LEFT:
		{
			std::cout << "LEFT!";
		}
		break;

		default:
		break;
	}
	
}

void Tank::Fire()
{

}
