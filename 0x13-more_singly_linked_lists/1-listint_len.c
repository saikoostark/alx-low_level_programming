#include "lists.h"

/**
 * listint_len - function
 *
 * @h: param
 * Return: return a value
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}

	return (size);
}
