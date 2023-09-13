#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function
 * given as a parameter on each element of an array.
 * @array: the array
 * @size: size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: Always 0 (Successful)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
