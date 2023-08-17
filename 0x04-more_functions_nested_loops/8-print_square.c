#include "main.h"

/**
 * print_square - Function that prints a square
 * @size: size of square
 * Can only use _putchar to print. Use '#' to print the square
 */
void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while
		(y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
