#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Characters to match
 *
 * Return: Number of bytes in the initial segment of s
 * consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept * s))
	{
		count++;
		s++;
	}
	return (count);
}
