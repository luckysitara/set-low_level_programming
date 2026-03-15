#include "main.h"
/**
 * print_chessboard - prints 2D array of chessboard
 * @a: chessboard array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int irow, jcol;

	for (irow = 0; irow < 8; irow++)
	{
		for (jcol = 0; jcol < 8; jcol++)
		{
			_putchar(a[irow][jcol]);
		}
		_putchar('\n');
	}
}
