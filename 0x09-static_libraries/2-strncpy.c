#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Pointer to the destination
 * @src: Pointer to source string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
