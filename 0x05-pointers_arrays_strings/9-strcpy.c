#include "main.h"
/**
 * char *_strcpy - Function that copies pointed string
 * @dest: destination
 * @src: source
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; n < 1 ; n++)
	{
		dest[x] = src[x];
	}
	dest[m] = '\0';
	return (dest);
}

