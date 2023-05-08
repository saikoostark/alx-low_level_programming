#include "main.h"

/**
 * append_text_to_file - function
 * @filename: param
 * @text_content: param
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int nwrote;
	int len;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
	{
		close(fp);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}

	len = 0;
	while (*(text_content + len++))
		len++;

	nwrote = write(fp, text_content, len);

	if (nwrote == -1 || nwrote != len)
		return (-1);

	return (1);
}
