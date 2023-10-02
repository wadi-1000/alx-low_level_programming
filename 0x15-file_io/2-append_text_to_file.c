#include "main.h"

/**
 * append_text_to_file - a function that appends text at the
 * end of a file.
 * @filename: The name of the file.
 * @text_content: appendend text.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_a;
	int cletters;
	int rwr;

	if (!filename)
		return (-1);

	file_a = open(filename, O_WRONLY | O_APPEND);

	if (file_a == -1)
		return (-1);
	if (text_content)
	{
		for (cletters = 0; text_content[cletters]; cletters++)
			;
		rwr = write(file_a, text_content, cletters);

		if (rwr == -1)
			return (-1);
	}
	close(file_a);
	return (1);
}
