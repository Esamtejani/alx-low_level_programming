#include "main.h"

/**
 * print_chessboard - prints chessboard var.
 *
 * @a: rows.
 * rReturn: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int s, j;

	for (s = 0; s < 8; s++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[s][j]);
		}
		_putchar('\n');
	}
}
