#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int l;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (l = len; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
