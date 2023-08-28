#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: array
 *
 * Return: Always 0 (Successful)
 *
 */
void print_chessboard(char (*a)[8])
{
	int q;
	int k;

	for (q = 0; q < 8; q++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[q][k]);
		_putchar('\n');
	}
}
