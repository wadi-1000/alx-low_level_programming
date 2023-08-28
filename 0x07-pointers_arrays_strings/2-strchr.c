#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of char c
 * Null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
