#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 *
 * Return: (0) Successful
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; j < '9'; k++)
	{
		for (j = k +1; j <= '9'; j++)
		{
			for (k = j + 1; j <= '9'; j++)
			{
				if ((j !=  i) != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8')
						continue;
					putchar (',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
