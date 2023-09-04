#include "main.h"
/**
 * _isalpha - Looks for alphabet
 * @c: The chracter being looked at.
 *
 * Return: 1 for an alphabet, 0 for any other
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
