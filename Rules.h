/*
 * Rules class. see .cpp for further detail
 */
#ifndef RULES_H
#define RULES_H
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string.h>
using namespace std;

class Rules {
	public:
		Rules();
		~Rules();
		int** newBoard; // copies the current board to update if needed.
		void copyBoard(int** board);
		int** check(int** board, int** dice, int player);
};


#endif