#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
