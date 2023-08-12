#include <stdio.h>
/**
 * main - Function that  prints the alphabet in lowercase.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
