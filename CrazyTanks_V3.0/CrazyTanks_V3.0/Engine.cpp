#include "stdafx.h"
#include "Engine.h"

Engine::Engine()
{
	init();
}
void Engine::init()
{
	Object Wall;
	Wall.Skin = '#';

	Object Gold;
	Gold.HealthPoints = 2;

	Object PlayerTank;
	PlayerTank.Skin = 'W';
	//PlayerTank.xPosition;

	Object EnemyTank;
	EnemyTank.Skin = 'O';
	EnemyTank.HealthPoints = 1;

	PrepareMatrixBoard(MatrixBoard, Wall.Skin);
	print();
}

void Engine::PrepareGame()
{

}

void Engine::PrepareMatrixBoard(char(&arr)[rowANDcolumn][rowANDcolumn], char Wall)
{
	for (int i = 0; i < rowANDcolumn; i++)
	{
		for (int j = 0; j < rowANDcolumn; j++)
		{
			if (i == 0 || j == 0 || i == rowANDcolumn -1 || j == rowANDcolumn -1 )
			{
				arr[i][j] = Wall;
			}
			else
			{
				arr[i][j] = ' ';
			}
		}
	}
}
void Engine::print()
{
	for (int i = 0; i < rowANDcolumn; i++)
	{
		for (int j = 0; j < rowANDcolumn; j++)
			std::cout << MatrixBoard[i][j];
		std::cout << std::endl;
	}
}

Engine::~Engine()
{}