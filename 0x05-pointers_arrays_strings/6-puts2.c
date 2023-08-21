#include "main.h"
/**
 * puts2 - Function that prints 1 character out of 2
 * @str: input
 *
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int k = 0;
	char *h = str;
	int j;

	while (*h != '\0')
	{
		h++;
		len++;
	}
	k = len - 1;
	for (j = 0; j <= k; j++)
	{
		if (j % 2 == 0)
		{
			_pucthar(str[0]);
		}
	}
}


