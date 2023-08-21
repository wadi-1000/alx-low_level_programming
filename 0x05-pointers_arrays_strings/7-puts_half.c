#include "main.h"
/**
 * puts_half - Function that returns the length of a string
 * @s: string
 *
 * Return: length
 */
void puts_half(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
			s++;
	}
	return (len);
}
