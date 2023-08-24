#include "main.h"

/**
 * _strcmp - Function that compares 2 strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Negative value if s1 is less
 * 0 if they're equal
 * Positive value if s1 is greater
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
