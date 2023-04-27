#include "lists.h"

/**
 * print_list - function
 *
 * @h: param
 *
 * Return: reurn size
 */
size_t print_list(const list_t *h)
{

	size_t listSize = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		listSize++;
	}

	return (listSize);
}
