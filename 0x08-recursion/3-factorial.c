#include "main.h"

/**
 * factorial - Function that returns the factorial of a number.
 * @n: The input number
 *
 * Return: -1 if n < 0 else the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
				}
				}
