#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a specified number of letters from a text file
 * @filename: pointer to the name of the file
 * @letters: number of letters to read from the file
 *
 * Return: number of letters read and printed, or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	struct stat st;
	ssize_t file, lett, e;
	char *text;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	if (fstat(file, &st) == -1)
	{
		close(file);
		return (0);
	}

	lett = st.st_size;
	if (lett > letters)
	{
		lett = letters;
	}

	text = malloc(lett);
	if (text == NULL)
	{
		close(file);
		return (0);
	}

	lett = read(file, text, let);
	if (lett == -1)
	{
		free(text);
		close(file);
		return (0);
	}

	e = write(STDOUT_FILENO, text, lett);
	if (e != let)
	{
		free(text);
		close(file);
		return (0);
	}

	free(text);
	close(file);
	return (e);
}

