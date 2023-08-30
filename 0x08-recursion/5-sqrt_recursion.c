#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Input number
 * @i: Value that checks possible root
 *
 * Return: Square root else -1
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recursive(n, i + 1));
	}
}
