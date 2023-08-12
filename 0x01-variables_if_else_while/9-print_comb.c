#include <stdio.h>
/**
 * main - Prints all possible combinations for single digits
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
