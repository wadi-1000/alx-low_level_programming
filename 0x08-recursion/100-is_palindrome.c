#include "main.h"

/**
 * check_palindrome - Recursive function to check if string
 * is a palidrome
 * @s: Input string
 * @start: Strating index
 * @end: Ending index
 *
 * Return: 1 if palindrome else, 0.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: Input string
 *
 * Return: 1 if palindrome else, 0.
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	if (len == 0)
	{
		return (1);
	}
	return (check_palindrome(s, i, len - 1));
}
