#include "main.h"
/**
 * _puts - Function that prints a string thena new line
 * @str: string
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str++);
        }
        _putchar('\n');
}
