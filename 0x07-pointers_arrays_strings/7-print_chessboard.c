#include "holberton.h"
/**
 * print_chessboard - print chess
 * @a: pointer
 */
void print_chessboard(char (*a)[8])
{
	int col, row;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
			printf("%c", a[row][col]);
		printf("\n");
	}
}

