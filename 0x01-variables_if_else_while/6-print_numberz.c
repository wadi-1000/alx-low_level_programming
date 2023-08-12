#include <stdio.h>
/**
 * main - Function that prints numbers to base 10.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
		putchar('\n');
	}
	return (0);
}
