#include <stdio.h>
/**
 * main - Function that prints numbers to base 16.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar(d);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
