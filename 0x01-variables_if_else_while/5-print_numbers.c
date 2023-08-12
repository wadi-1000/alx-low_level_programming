#include <stdio.h>
/**
 * main - Function that prints numbers to base 10.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d\n", number);
		number++;
	}
	putchar('\n');
	return (0);
}
