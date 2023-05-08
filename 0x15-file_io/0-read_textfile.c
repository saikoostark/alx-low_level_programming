#include "main.h"

/**
 * read_textfile - function
 * @filename: param
 * @letters: param
 * Return: 0 on success
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, nread, nwrote;
	char *str;

	if (filename == NULL)
		return (0);

	/* OPEN */
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fp);
		return (0);
	}

	/* READ */
	nread = read(fp, str, letters);
	close(fp);
	if (nread == -1)
	{
		free(str);
		return (0);
	}

	/* WRITE */
	nwrote = write(STDOUT_FILENO, str, nread);
	free(str);

	if (nread != nwrote)
		return (0);

	return (nwrote);
}
