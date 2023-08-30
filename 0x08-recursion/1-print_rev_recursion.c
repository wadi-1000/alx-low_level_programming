#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: Input string
 *
 */
void _print_rev_recursion(char *s)
{
	if (s == '\0')
	{
		return;
	}
	_print_rev_recursions(s + 1);
	putchar(*s);
}
