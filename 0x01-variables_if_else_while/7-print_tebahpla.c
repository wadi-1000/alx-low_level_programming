#include <stdio.h>
/**
 * main - Function that prints the alphabet in reverse.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
