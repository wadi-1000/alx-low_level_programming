#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to find the absolute value of.
 *
 * Return: The absolute value of `n`.
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_value;

		abs_value = n * -1;
		return (abs_value);
	}
	return (n);
}
