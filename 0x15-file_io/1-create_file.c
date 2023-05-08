#include "main.h"

/**
 * create_file - function
 * @filename: param
 * @text_content: param
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len, nwrote;
	int fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = 0;
	while (*(text_content + len))
		len++;

	nwrote = write(fp, text_content, len);
	close(fp);

	if (len == -1 || len != nwrote)
		return (-1);

	return (1);
}
