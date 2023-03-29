#include <stdio.h>

/**
 * leet - function
 * @s : param1
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *leet(char *s)
{

	int i;

	i = 0;

	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = '4';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = '3';

		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = '0';

		else if (s[i] == 't' || s[i] == 'T')
			s[i] = '7';

		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = '1';

		i++;
	}

	return (s);
}
