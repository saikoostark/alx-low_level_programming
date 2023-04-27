#include "lists.h"

/**
 * print_list - function
 *
 * @h: param
 * Return: reurn size
 */
size_t print_list(const list_t *h)
{

	int listSize = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		listSize++;
		h = h->next;
	}

	return (listSize);
}
