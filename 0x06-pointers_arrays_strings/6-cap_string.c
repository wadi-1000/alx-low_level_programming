#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * cap_string - Function that capitalizes all chars
 * @str: String to be capitalized
 * Separators of words: space, tabulation, new line, ,,
 * ;, ., !, ?, \", (, ), {, and }
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
					)
				&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
