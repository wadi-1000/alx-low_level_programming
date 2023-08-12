#include <stdio.h>
/**
 * main - Function that  prints the alphabet in lowercase.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	putchar('\n');
	return (0);
}
