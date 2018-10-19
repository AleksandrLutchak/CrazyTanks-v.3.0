#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include "Objects.h"


	class Engine
	{
	public:
		static const int rowANDcolumn = 24;
		
		char MatrixBoard[rowANDcolumn][rowANDcolumn]{};

		 Engine();
		~Engine();

	private:
			
		void init();
		void PrepareMatrixBoard(char (&arr)[rowANDcolumn][rowANDcolumn], char Wall);
		void PrepareGame();
		void print();

	};

#endif ENGINE_H
