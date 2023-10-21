#include "main.h"

/**
 * print_line - Draws a diagonal line
 * @n: Number of times the character '_' should be printed
 * Return: 0 (Successful)
 */
int print_line(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x , n; x++)
		{
			for (y = 0; y< x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}
