#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the code
 * @str : 1st param
 * Return: Always 0.
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (*(str + i))
		i++;

	return (i);
}

/**
 * argstostr - check the code
 * @ac : param
 * @av : param
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, sum = 0;
	char *str;

	for (i = 0; i < ac; i++)
	{
		sum += _strlen(av[i]);
	}

	str = malloc(sizeof(char) * sum + ac + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j))
		{
			str[k] = av[i][j];
			k++, j++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
