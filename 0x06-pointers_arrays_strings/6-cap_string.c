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

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;

		if (str[i - 1] == ' ' ||
				str[i - 1] == '\t' ||
				str[i - 1] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - 1] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
