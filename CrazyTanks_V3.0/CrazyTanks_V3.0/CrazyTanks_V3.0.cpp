// CrazyTanks_V3.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Engine.h"
#include <Windows.h>

void setWindowSize()
{
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD crd = { 50, 30 };
	SMALL_RECT src = { 0, 0, crd.X - 1, crd.Y - 1 };
	SetConsoleWindowInfo(out_handle, true, &src);
	SetConsoleScreenBufferSize(out_handle, crd);
}

int main()
{
	setWindowSize();

	Engine();
	Engine StartGame;
	StartGame.Start();

	system("pause");

    return 0;
}

