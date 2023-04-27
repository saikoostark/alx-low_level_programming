#include "lists.h"

/**
 * list_len - function
 *
 * @h: param
 *
 * Return: reurn size
 */
size_t list_len(const list_t *h)
{

	size_t listSize = 0;

	while (h != NULL)
	{
		h = h->next;
		listSize++;
	}

	return (listSize);
}
