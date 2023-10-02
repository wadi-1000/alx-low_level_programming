#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file created.
 * @text_content: contetnt in the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_f;
	int cletters;
	int rwr;

	if (!filename)
		return (-1);
	file_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_f == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (cletters = 0; text_content[cletters]; cletters++);
	rwr = write(file_f, text_content, cletters);
	
	if (rwr == -1)
		return (-1);
	close(file_f);
	return (1);
}
