#include "main.h"

int _sqrt_recursive(int n, int i);

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Input number
 *
 * Return: Square root else -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursive(n, 1));
}
/**
 * _sqrt_recursive - Recursive function
 * @n: Input number
 * @i: Value to chec for natural root
 * Return: Root
 */
int _sqrt_recursive(int n, int i)
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
		return (_sqrt_recursive(n, i + 1));
	}
