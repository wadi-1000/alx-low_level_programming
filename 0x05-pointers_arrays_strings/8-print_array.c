#include "main.h"
/**
 * print_array - Function that prints elements of an array
 * @a: name of the array
 * @n: number of items on the array
 *
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	print("\n");
}
