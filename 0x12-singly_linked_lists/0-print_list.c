#include "lists.h"

/**
 * _strlen - function
 *
 * @str: param
 * Return: reurn size
 */
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (*(str + i))
		i++;
	return (i);
}

/**
 * print_list - function
 *
 * @h: param
 * Return: reurn size
 */
size_t print_list(const list_t *h)
{
	list_t *ptr = (list_t *)h;
	int strLen;
	int listSize = 0;

	while (ptr != NULL)
	{
		strLen = _strlen(ptr->str);
		if (strLen == 0)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", strLen, ptr->str);
		}
		listSize++;
		ptr = ptr->next;
	}

	return (listSize);
}
