#include "main.h"

/**
 *print_line - Draws a diagonal line
 *@n: Number of times the character '_' should be printed

 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int spaces = 0;
		while (n > 0)
		{
			int i;
			for (i = 0; i < spaces; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			spaces++;
			n--;
		}
	}
}
