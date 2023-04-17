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
	int flag = 1;
	int sum = 0;

	for (i = 0; *(str + i); i++)
	{
		if (str[i] == ' ')
			flag = 1;
		else if (flag)
		{
			flag = 0;
			sum++;
		}
	}

	return (sum);
}

/**
 * argstostr - check the code
 * @str : param
 * Return: Always 0.
 */

char **strtow(char *str)
{

	int i = 0, a = 0, b = 0;
	char **arr;
	int arg = _strlen(str);

	if (str == NULL)
		return (NULL);

	printf("%d\n", arg);
	arr = malloc(sizeof(*arr) * arg);

	for (i = 0; *(str + i); i++)
	{
		if ((str[i] != ' ' && str[i + 1] != ' ') || (str[i] != ' ' && str[i + 1] == '\0'))
		{
			arr[a][b] = str[i];
		}
		else if ((str[i] != ' ' && str[i + 1] == ' '))
		{
			arr[a][b] = str[i];
			a++;
			b = 0;
		}
	}

	return (arr);
}
