#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: matriz
 */
void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar(10);
	}
}
