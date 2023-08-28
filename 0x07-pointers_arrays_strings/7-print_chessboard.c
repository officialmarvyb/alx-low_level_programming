#include "main.h"

/**
 * print_chessboard - print the chessboard in 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x <= 7; x++)
	{
		for (y = 0; y <= 7; y++)
		{
		_putchar(a[y][x]);
		}
	_putchar('\n')
	}
}
