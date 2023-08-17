#include "main.h"

/**
 *print_line - Draws a diagonal line
 *@n: Number of times the character '_' should be printed
 *Return: void
 */
void print_line(int n)
{
	if (n  <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
