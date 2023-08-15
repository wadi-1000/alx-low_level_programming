#include <unistd.h>
/**
 * _putchar - Function that prints _putchar, followed by a new line.
 * @c: character to be written.
 *
 * Return: 1 on success, -1 on error and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
