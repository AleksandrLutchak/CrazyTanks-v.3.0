#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>

#include "Tank.h"


	class Engine
	{
	public:
		static const int row = 48;
		static const int column = 24;
				
		char MatrixBoard[column][row]{};

		bool exitGame = false;

	public:
		void Start();

		 Engine();
		~Engine();

	private:
		void PrepareMatrixBoard(char (&arr)[column][row], char Wall);
		void print(char(&arr)[column][row]);

		void RenderObjectsOnMap(char(&arr)[column][row]);

		void GameLoop();


	};

#endif ENGINE_H
