#include <stdio.h>
#include <stdbool.h>

/**
 * leet - Function that encodes a string into 1337
 * @str: String to be encoded 1337
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	char *leet_characters = "AEOTL";
	char *leet_replacements = "43071";

	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (leet_characters[j] != '\0')
		{
			if (str[i] == leet_characters[j] || str[i] == leet_characters[j] + 32)
			{
				str[i] = leet_replacements[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
