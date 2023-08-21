#include "main.h"
/**
 * swap_int - Function that swaps the values of 2 integers
 * @a: 1st integer
 * @b: 2nd inetger
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
