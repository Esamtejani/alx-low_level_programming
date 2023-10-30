#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file to append text to
 * @text_content: The text content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w;
	size_t len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	w = write(file, text_content, len);
	if (w != len)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
