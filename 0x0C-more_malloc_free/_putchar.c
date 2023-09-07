#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: Input character
 *
 * Return: 1 (Succesful) else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
