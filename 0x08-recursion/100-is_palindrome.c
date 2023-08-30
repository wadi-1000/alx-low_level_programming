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
	return check_palindrome(s, start + 1, end - 1);
}
