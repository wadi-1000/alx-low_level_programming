#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}
