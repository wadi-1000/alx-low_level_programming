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
	int start;

	while (*s != '\0')
	{
		len++;
			s++;
	}
	int start = len / 2;
        if (len % 2 != 0)
        {
                start++;
        }

        /* Print the second half of the string */
        while (s[start] != '\0')
        {
                _putchar(s[start]);
                start++;
        }
        _putchar('\n');
}
