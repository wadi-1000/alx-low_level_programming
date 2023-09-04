#include "main.h"

/**
 * _islower - Looks for lowercase letters
 * @c: The character to be looked for.
 * Return: 1 for lowercase character, 0 for any other.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
