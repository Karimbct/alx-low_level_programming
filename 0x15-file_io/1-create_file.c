#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int nletters;
	int write_result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	write_result = write(file_descriptor, text_content, nletters);

	if (write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

