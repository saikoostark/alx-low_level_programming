#include "main.h"
#define BUFF_SIZE 1024
/**
 * _errex - function
 * @str:   param
 * @file:  param
 * @code:   param
 * Return: void
 */
void _errex(char *str, char *file, int code)
{
	dprintf(STDERR_FILENO, str, file);
	exit(code);
}

/**
 * _cp -  function
 * @ffrom:   param
 * @fto:   param
 *
 * Return: void
 */
void _cp(char *ffrom, char *fto)
{
	int fd1, fd2, nread, nwrote;
	char str[BUFF_SIZE];

	fd1 = open(ffrom, O_RDONLY);
	if (fd1 == -1)
		_errex("Error: Can't read from file %s\n", ffrom, 98);

	fd2 = open(fto, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		_errex("Error: Can't write to %s\n", fto, 99);

	nread = BUFF_SIZE;
	while (nread == BUFF_SIZE)
	{
		nread = read(fd1, str, BUFF_SIZE);
		if (nread == -1)
			_errex("Error: Can't read from file %s\n", ffrom, 98);

		nwrote = write(fd2, str, nread);

		if (nwrote == -1)
			_errex("Error: Can't write to %s\n", fto, 99);
	}

	if (nread == -1)
		_errex("Error: Can't read from file %s\n", ffrom, 98);
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 *main -  function
 *@argc: param
 *@argv:  param
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
