#include "lists.h"

/**
 * print_listint - function
 *
 * @h: param
 * Return: return a value
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
