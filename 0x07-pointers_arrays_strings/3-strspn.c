#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Characters to match
 *
 * Return: 0 (Successful)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept(l); l++)
		{
			if (*s == accept(l))
			{
				n++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
