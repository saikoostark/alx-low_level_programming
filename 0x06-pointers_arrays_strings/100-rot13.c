#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * rot13 - function
 * @s : param1
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *rot13(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ((s[i] - 'a') + 13) % 26 + 'a';

		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = ((s[i] - 'A') + 13) % 26 + 'A';

		i++;
	}

	return (s);
}
