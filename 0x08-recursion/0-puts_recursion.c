#include "main.h"

/**
 * _puts_recursion - Function that prints a string and a new line
 * @s: The input string
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		/*Base case. Stops loop when s is 0.*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	/* Makes a recursive call to the next character*/
}
