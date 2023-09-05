#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * word_len - Computes the length of a word starting from a given position.
 * @str: The input string.
 *
 * Return: The length of the word.
 */
int word_len(char *str)
{
	int len = 0;

	while (*str != ' ' && *str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: NULL if str == NULL, str == "" or function fails,
 *         else a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (*str == ' ')
			str++;

		letters = word_len(str);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = *str++;

		strings[w][l] = '\0';
	}

	strings[w] = NULL;

	return (strings);
}
