#include "main.h"

/**
 * print_chessboard - print chess board
 *@a: chess board
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j, row;

	row = sizeof(*a) / sizeof(char);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}

}
