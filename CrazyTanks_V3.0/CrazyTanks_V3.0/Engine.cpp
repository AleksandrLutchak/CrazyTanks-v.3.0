#include "stdafx.h"
#include "Engine.h"

Engine::Engine()
{}

void Engine::Start()
{
	//Wall
	/*====================*/
	Object Wall;
	Wall.Skin = '#';

	//Gold
	/*====================*/
	Object Gold;
	Gold.HealthPoints = 2;
	
	//PlayerTank
	/*====================*/
	TankProperties PlayerTank;
	PlayerTank.Skin = 'W';
	PlayerTank.xPosition = row / 2;
	PlayerTank.yPosition = column - 1;
	
	//EnemyTank
	/*====================*/
	Object EnemyTank;
	EnemyTank.Skin = 'O';
	EnemyTank.HealthPoints = 1;
	
	PrepareMatrixBoard(MatrixBoard, Wall.Skin);

	GameLoop();
}



void Engine::GameLoop()
{
	while (!exitGame)
	{
		print(MatrixBoard);
		Tank PlayerTank;

		if (_kbhit())
			PlayerTank.Movement();

		Sleep(10);
		system("cls");
	}
}

void Engine::RenderObjectsOnMap(char(&arr)[column][row])
{

}

void Engine::PrepareMatrixBoard(char(&arr)[column][row], char Wall)
{
	for (int i = 0; i < column; i++)
		for (int j = 0; j < row; j++)
			if (i == 0 || j == 0 || i == column -1 || j == row -1 )
				arr[i][j] = Wall;
			else
				arr[i][j] = ' ';
}

void Engine::print(char(&arr)[column][row])
{
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
			std::cout << arr[i][j];
		std::cout << std::endl;
	}
}





Engine::~Engine()
{}