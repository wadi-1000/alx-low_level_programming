#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x
 * raised to the power of y.
 * @x: Base number
 * @y: Exponent number
 *
 * Return: x raised to power y
 * else -1 if y is negative
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
