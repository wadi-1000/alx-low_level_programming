#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the arrays
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 * else index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (amp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
