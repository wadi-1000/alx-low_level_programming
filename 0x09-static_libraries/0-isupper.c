#include "main.h"
/**
 * _isupper - Function that checks for uppercase characters
 * @c: Character to be checked
 *
 * Return: 0 (Successful)
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
