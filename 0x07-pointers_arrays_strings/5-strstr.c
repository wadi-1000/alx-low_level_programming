#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
			return (haystack);
	}
	return (NULL);
}
