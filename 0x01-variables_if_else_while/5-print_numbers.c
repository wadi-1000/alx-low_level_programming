#include <stdio.h>
/**
 * main - Function that prints numbers to base 10.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d\n", number);
	}
	putchar('\n');
	return (0);
}
