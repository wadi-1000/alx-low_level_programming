#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: Input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

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
	int len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
