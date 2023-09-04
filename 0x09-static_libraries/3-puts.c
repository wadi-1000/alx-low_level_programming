#include "main.h"
/**
 * _puts - Function that prints a string thena new line
 * @s: string
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
